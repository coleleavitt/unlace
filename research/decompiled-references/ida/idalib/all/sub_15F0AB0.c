__int64 __fastcall sub_15F0AB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int8 v17; // al
  char v18; // r10
  __int64 v19; // r11
  char v20; // r13
  __int64 v21; // rdi
  __int64 v22; // r14
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rcx

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v5;
LABEL_2:
  while ( 1 )
  {
    v8 = (__int64 *)(sub_F68450(v7, (__int64)v5, a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = (__int64)v8;
    if ( !v8 )
      break;
    v7 = *v8;
  }
  v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  a3 = (unsigned int)(v10 - 2);
  if ( (unsigned __int8)(v10 - 2) <= 4u )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v7 + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          goto LABEL_2;
        v11 = sub_F63050(v7, v5, a3, a4);
        if ( !v11 )
          goto LABEL_2;
        v7 = v11;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  if ( (*(_BYTE *)(v7 + 16) == 26 || (_BYTE)v10 == 26 && (v7 = sub_F63050(v7, v5, a3, a4)) != 0)
    && (v12 = *(_QWORD *)(v7 + 16), (v12 & 0x40000000) != 0)
    && (v14 = *(unsigned __int16 *)(v7 + 22),
        v15 = 8 * v14 + 48,
        v16 = (v7 + v15 + ((SBYTE3(v12) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL,
        v17 = *(_BYTE *)(v16 + 1),
        (v17 & 0xF0) != 0) )
  {
    v18 = *(_BYTE *)(v7 + 19);
    v19 = v17 >> 4;
    v20 = v18 & 0x40;
    v21 = ((unsigned __int8)v18 >> 1) & 0xF;
    if ( (v17 & 8) != 0 && v17 >> 4 )
    {
      v28 = (v12 & 0x40000000) != 0;
      if ( v20 )
        v28 += (*(_BYTE *)(((v7 + v15 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      if ( (_BYTE)v21 != 2 )
        __asm { jmp     r9 }
      v34 = v16 + 8 * v28 + 8LL * (*(_WORD *)((v7 + v15 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      v35 = v17 >> 4;
      v20 = v18 & 0x40;
      v30 = v34;
      v21 = ((unsigned __int8)v18 >> 1) & 0xF;
      v29 = v14 + v34;
      if ( (v12 & 0x20000000) != 0 )
        v30 = v29;
      v31 = 8LL * (BYTE3(v12) & 1);
      v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v12 & 0x40000000) != 0 )
        v31 += *(_BYTE *)(((v7 + v15 + ((SBYTE3(v12) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) >> 4;
      v33 = v31 + v32;
      v22 = v19;
      v19 = v35;
      v23 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    v24 = (v12 & 0x40000000) != 0;
    if ( v20 )
      v24 += (*(_BYTE *)(((v7 + v15 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v25 = ((v7 + v15 + ((SBYTE3(v12) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v24;
    if ( (_BYTE)v21 != 2 )
    {
      switch ( (char)v21 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( (char)v21 )
          {
            case 6:
            case 7:
            case 8:
              v25 += 8LL;
              goto LABEL_28;
            case 9:
              goto LABEL_39;
            case 10:
              goto LABEL_38;
            default:
LABEL_28:
              switch ( (char)v21 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_30;
                case 9:
                  goto LABEL_39;
                case 10:
                  goto LABEL_38;
                default:
                  return sub_15F0EF0(v21, v14, v12);
              }
          }
        case 9:
LABEL_39:
          v26 = v25 + 8;
          v9 = 8;
          goto LABEL_31;
        case 10:
LABEL_38:
          v26 = v25 + 16;
          v9 = 16;
          goto LABEL_31;
        default:
          return sub_15F0EF0(v21, v14, v12);
      }
    }
    v25 += 8LL * (*(_WORD *)((v7 + ((v18 >> 5) & 4) + v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_30:
    v26 = v25;
LABEL_31:
    v27 = v12 >> 24;
    a1[1] = v19;
    a1[2] = v23;
    if ( (v27 & 0x20) != 0 )
      v26 = v25 + v9 + v14;
    a1[3] = v22;
    *a1 = ((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * (v27 & 1);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
  }
  return (__int64)a1;
}
