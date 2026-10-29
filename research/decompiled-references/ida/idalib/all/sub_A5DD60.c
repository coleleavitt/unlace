__int64 __fastcall sub_A5DD60(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // r12
  char v8; // bl
  __int64 v9; // r11
  char v10; // bp
  char v11; // r8
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned __int64 v24; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  if ( (v2 & 0x40000000) != 0
    && (v3 = *(unsigned __int16 *)(a2 + 22),
        v4 = 8 * v3 + 48,
        v5 = (a2 + v4 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL,
        v6 = *(_BYTE *)(v5 + 1),
        (v6 & 0xF0) != 0) )
  {
    v8 = *(_BYTE *)(a2 + 19);
    v9 = v6 >> 4;
    v10 = v8 & 0x40;
    v11 = ((unsigned __int8)v8 >> 1) & 0xF;
    if ( (v6 & 8) != 0 && v6 >> 4 )
    {
      v16 = (v2 & 0x40000000) != 0;
      if ( v10 )
        v16 += (*(_BYTE *)(((a2 + v4 + ((v8 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      if ( v11 != 2 )
        __asm { jmp     rax }
      v21 = v5 + 8 * v16 + 8LL * (*(_WORD *)((a2 + v4 + ((v8 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      v22 = v6 >> 4;
      v10 = v8 & 0x40;
      v11 = ((unsigned __int8)v8 >> 1) & 0xF;
      if ( (v2 & 0x20000000) != 0 )
        v21 += v3;
      v23 = 8 * ((v2 >> 24) & 1);
      v24 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 0x40000000) != 0 )
        v23 += *(_BYTE *)(((a2 + v4 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) >> 4;
      v12 = v6 >> 4;
      v9 = v22;
      v13 = (v23 + v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = (v2 & 0x40000000) != 0;
    if ( v10 )
      v14 += (*(_BYTE *)(((a2 + v4 + ((v8 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v15 = ((a2 + v4 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v14;
    if ( v11 != 2 )
    {
      switch ( v11 )
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
          switch ( v11 )
          {
            case 6:
            case 7:
            case 8:
              v15 += 8LL;
              goto LABEL_17;
            case 9:
              goto LABEL_24;
            case 10:
              goto LABEL_23;
            default:
LABEL_17:
              switch ( v11 )
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
                  goto LABEL_19;
                case 9:
                  goto LABEL_24;
                case 10:
                  goto LABEL_23;
                default:
                  return sub_A5E110(a1, a2, v2, v13);
              }
          }
        case 9:
LABEL_24:
          v17 = v15 + 8;
          v18 = 8;
          goto LABEL_20;
        case 10:
LABEL_23:
          v17 = v15 + 16;
          v18 = 16;
          goto LABEL_20;
        default:
          return sub_A5E110(a1, a2, v2, v13);
      }
    }
    v15 += 8LL * (*(_WORD *)((a2 + ((v8 >> 5) & 4) + v4 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_19:
    v17 = v15;
    v18 = 0;
LABEL_20:
    v19 = v2 >> 24;
    a1[3] = v12;
    v20 = v15 + v18 + v3;
    a1[1] = v9;
    if ( (v19 & 0x20) != 0 )
      v17 = v20;
    a1[2] = v13;
    *a1 = ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * (v19 & 1);
    return (__int64)a1;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    return (__int64)a1;
  }
}
