__int64 __fastcall sub_735660(unsigned int *a1, char a2, __int64 (*a3)(void))
{
  void *v4; // rdi
  char v6; // r12
  unsigned int v7; // r12d
  unsigned int v8; // eax
  unsigned int v9; // eax
  __m128i *v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  char *v15; // rax
  int v16; // ecx
  unsigned __int16 *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v22; // rdx

  if ( *((_WORD *)a1 + 816) != 1 )
  {
    v4 = *((void **)a1 + 727);
    if ( v4 )
    {
      *((_QWORD *)a1 + 728) = 0;
      qfree(v4);
      *((_QWORD *)a1 + 727) = 0;
      *((_QWORD *)a1 + 729) = 0;
    }
    v6 = *((_BYTE *)a1 + 1620);
    *((_WORD *)a1 + 2904) = 0;
    v7 = (v6 & 0x10) != 0;
    LOBYTE(v7) = a2 | v7;
    if ( (_BYTE)v7 )
    {
      v8 = a1[406];
      a1[405] = v8;
      if ( (~(_BYTE)v8 & 7) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)a1 + 1) + 584LL) = 4 * *a1;
        v9 = a1[405];
        if ( (~(_BYTE)v9 & 7) != 0 && (v9 & 0x4000) == 0 && (unsigned int)sub_7353C0((__int64)a1, 1) == 2 )
          sub_734FA0((__int64)a1, 0);
        v10 = *((__m128i **)a1 + 1);
        v11 = *((unsigned __int16 *)a1 + 16);
        v12 = *((unsigned __int16 *)a1 + 12);
        v13 = v10[35].m128i_u64[0];
        if ( (_WORD)v11 )
        {
          while ( 1 )
          {
            v14 = *a1;
            if ( (unsigned __int16)v12 < (unsigned __int16)v11 )
              v12 = v11;
            if ( (unsigned __int16)v11 >= v13 / v14 )
              break;
            v15 = sub_733BE0(v10, v11, 0);
            if ( !v15 )
            {
              v10 = *((__m128i **)a1 + 1);
              v19 = *a1;
              v13 = v10[35].m128i_u64[0];
              goto LABEL_26;
            }
            v16 = *(unsigned __int16 *)v15;
            if ( (_WORD)v16 )
            {
              v17 = (unsigned __int16 *)(v15 + 4);
              v18 = (__int64)&v15[2 * (v16 - 1) + 6];
              if ( ((2 * ((_BYTE)v16 - 1) + 2) & 2) == 0 )
                goto LABEL_41;
              if ( (unsigned __int16)v12 < *((_WORD *)v15 + 2) )
                v12 = *((unsigned __int16 *)v15 + 2);
              v17 = (unsigned __int16 *)(v15 + 6);
              if ( (char *)v18 != v15 + 6 )
              {
LABEL_41:
                do
                {
                  if ( (unsigned __int16)v12 < *v17 )
                    v12 = *v17;
                  if ( (unsigned __int16)v12 < v17[1] )
                    v12 = v17[1];
                  v17 += 2;
                }
                while ( (unsigned __int16 *)v18 != v17 );
              }
            }
            v11 = *((unsigned __int16 *)v15 + 1);
            v10 = *((__m128i **)a1 + 1);
            if ( !(_WORD)v11 )
            {
              v13 = v10[35].m128i_u64[0];
              goto LABEL_25;
            }
          }
          v20 = v14 * (v12 + 1);
          if ( v10[35].m128i_i64[0] >= v20 )
            goto LABEL_27;
        }
        else
        {
LABEL_25:
          v19 = *a1;
LABEL_26:
          v20 = v19 * (v12 + 1);
          if ( v13 >= v20 )
          {
LABEL_27:
            if ( a1[7] )
            {
LABEL_37:
              v22 = *((unsigned __int16 *)a1 + 17);
              *((_QWORD *)a1 + 333) = a1 + 410;
              *((_WORD *)a1 + 817) = 1;
              dword_2CCC4C4 = 0;
              sub_737D90(a1, a1 + 410, v22);
              sub_735050((__int64)a1, *((__int16 *)a1 + 816), a3);
            }
LABEL_28:
            *((_WORD *)a1 + 816) = 1;
            sub_737CE0(a1, 1);
            byte_2CCC4C2 = 0;
            *((_WORD *)a1 + 817) = 0;
            return v7;
          }
        }
        sub_7334C0(v10, v20);
        if ( a1[7] )
          goto LABEL_37;
        goto LABEL_28;
      }
    }
    else
    {
      a1[405] = 7;
    }
    if ( *((__int16 *)a1 + 816) <= 0 )
      *((_WORD *)a1 + 816) = -1;
  }
  return 0;
}
