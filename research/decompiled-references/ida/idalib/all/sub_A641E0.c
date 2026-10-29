__int64 __fastcall sub_A641E0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5, __int64 a6)
{
  __int64 v6; // r10
  int v7; // r10d
  __int64 v8; // r14
  char v9; // al
  char v10; // r8
  __int64 v12; // r11
  __int64 v13; // r9
  unsigned __int8 v14; // r12
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // r13
  char v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v21; // dl
  __int64 v22; // r12
  char v23; // cl
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // cl
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rsi
  char v31; // cl
  unsigned __int64 v32; // rsi
  char v33; // cl
  __int64 v34; // rcx
  __int64 v35; // [rsp+0h] [rbp-68h]
  char v38; // [rsp+1Dh] [rbp-4Bh]
  char v39; // [rsp+1Eh] [rbp-4Ah]
  char v40; // [rsp+1Fh] [rbp-49h]
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]

  *a5 = 1;
  *a4 = 1;
  v6 = *(_QWORD *)(a2 + 16) >> 24;
  if ( (((unsigned __int8)v6 | BYTE3(*(_QWORD *)(a3 + 16))) & 0x20) == 0 )
    return 1;
  v7 = v6 & 0x20;
  if ( v7 )
    v35 = *(unsigned __int16 *)(a2 + 22);
  else
    v35 = *(unsigned __int16 *)(a3 + 22);
  v8 = 0;
  v9 = 0;
  v10 = BYTE3(*(_QWORD *)(a3 + 16)) & 0x20;
  v12 = a3;
  v13 = a2;
  if ( !v35 )
    goto LABEL_50;
  do
  {
    if ( (_BYTE)v7 )
    {
      v21 = BYTE3(*(_QWORD *)(v13 + 16)) & 0x20;
      if ( v21 )
      {
        v22 = 8LL * *(unsigned __int16 *)(v13 + 22) + 48;
        v23 = *(_BYTE *)(v13 + 19);
        v24 = (*(_QWORD *)(v13 + 16) & 0x40000000LL) != 0;
        if ( (v23 & 0x40) != 0 )
          v24 += (*(_BYTE *)(((v13 + v22 + ((v23 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v25 = ((v13 + v22 + (((char)BYTE3(*(_QWORD *)(v13 + 16)) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v24;
        v26 = ((unsigned __int8)v23 >> 1) & 0xF;
        if ( v26 != 2 )
          __asm { jmp     rsi }
        v21 = *(_BYTE *)(v25
                       + 8LL
                       * (*(_WORD *)((v13 + (((char)BYTE3(*(_QWORD *)(v13 + 16)) >> 5) & 4) + v22 + 7)
                                   & 0xFFFFFFFFFFFFFFF8LL)
                        & 0x3FF)
                       + v8);
        if ( !v10 )
        {
          if ( (v21 & 0xBF) != 0 )
            return 0;
          goto LABEL_43;
        }
      }
      else if ( !v10 )
      {
        v21 = 0;
LABEL_43:
        v14 = (v21 & 0x40) != 0;
LABEL_7:
        v15 = 0;
        v16 = 0;
        v17 = 0;
        goto LABEL_8;
      }
    }
    else
    {
      v14 = 0;
      if ( !v10 )
        goto LABEL_7;
      v21 = 0;
    }
    v28 = *(_QWORD *)(v12 + 16) >> 24;
    if ( (v28 & 0x20) != 0 )
    {
      v29 = 8LL * *(unsigned __int16 *)(v12 + 22) + 48;
      v30 = (v28 & 0x40) != 0;
      v31 = *(_BYTE *)(v12 + 19);
      if ( (v31 & 0x40) != 0 )
        v30 += (*(_BYTE *)(((v12 + v29 + ((v31 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v32 = ((v12 + v29 + (((char)BYTE3(*(_QWORD *)(v12 + 16)) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v30;
      v33 = ((unsigned __int8)v31 >> 1) & 0xF;
      if ( v33 == 2 )
      {
        v32 += 8LL
             * (*(_WORD *)((v12 + (((char)BYTE3(*(_QWORD *)(v12 + 16)) >> 5) & 4) + v29 + 7) & 0xFFFFFFFFFFFFFFF8LL)
              & 0x3FF);
LABEL_36:
        v34 = v8;
      }
      else
      {
        switch ( v33 )
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
            switch ( v33 )
            {
              case 6:
              case 7:
              case 8:
                v32 += 8LL;
                goto LABEL_34;
              case 9:
                goto LABEL_49;
              case 10:
                goto LABEL_48;
              default:
LABEL_34:
                switch ( v33 )
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
                    goto LABEL_36;
                  case 9:
                    goto LABEL_49;
                  case 10:
                    goto LABEL_48;
                  default:
                    goto LABEL_52;
                }
            }
          case 9:
LABEL_49:
            v34 = v8 + 8;
            break;
          case 10:
LABEL_48:
            v34 = v8 + 16;
            break;
          default:
LABEL_52:
            ++*(_DWORD *)(a6 + 72);
            BUG();
        }
      }
      v17 = v21 & 0xBF;
      if ( (v21 & 0xBF) != (*(_BYTE *)(v32 + v34) & 0xBF) )
        return 0;
      v15 = (*(_BYTE *)(v32 + v34) & 0x40) != 0;
      v14 = (v21 & 0x40) != 0;
      v16 = v14 & v15;
      if ( (v14 & v15) != 0 )
      {
        v18 = *(_QWORD *)(a6 + 8);
        v14 &= v15;
        v15 = v16;
        v17 = v21 | 0x40;
        v19 = v18 + 1;
        if ( (unsigned __int64)(v18 + 1) <= *(_QWORD *)(a6 + 16) )
          goto LABEL_9;
        goto LABEL_40;
      }
    }
    else
    {
      v17 = v21 & 0xBF;
      if ( (v21 & 0xBF) != 0 )
        return 0;
      v15 = 0;
      v16 = 0;
      v14 = (v21 & 0x40) != 0;
    }
LABEL_8:
    v18 = *(_QWORD *)(a6 + 8);
    v19 = v18 + 1;
    if ( (unsigned __int64)(v18 + 1) <= *(_QWORD *)(a6 + 16) )
      goto LABEL_9;
LABEL_40:
    v38 = v9;
    v42 = v12;
    v41 = v13;
    v40 = v10;
    v39 = v7;
    sub_2236E10(a6, a6 + 24, v19, 1);
    v18 = *(_QWORD *)(a6 + 8);
    v12 = v42;
    v13 = v41;
    v10 = v40;
    LOBYTE(v7) = v39;
    v9 = v38;
LABEL_9:
    *(_BYTE *)(*(_QWORD *)a6 + v18) = v17;
    v20 = *(_QWORD *)(a6 + 8);
    *(_QWORD *)(a6 + 8) = v20 + 1;
    if ( *(_BYTE *)(*(_QWORD *)a6 + v20) )
      v9 = 1;
    if ( v16 != v14 )
      *a4 = 0;
    if ( v16 != v15 )
      *a5 = 0;
    ++v8;
  }
  while ( v35 != v8 );
  if ( v9 )
    return 1;
LABEL_50:
  *(_QWORD *)(a6 + 8) = 0;
  return 1;
}
