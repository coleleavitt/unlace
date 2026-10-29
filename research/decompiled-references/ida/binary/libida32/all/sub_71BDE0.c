__int64 __fastcall sub_71BDE0(unsigned int *a1, char a2, __int64 (*a3)(void), __int64 a4, __int64 a5, int a6)
{
  void *v7; // rdi
  char v9; // r12
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // eax
  __m128i *v13; // r8
  unsigned __int32 v14; // esi
  unsigned __int32 v15; // ebx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  char *v18; // rax
  int v19; // edx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v23; // rdx

  if ( *((_WORD *)a1 + 816) != 1 )
  {
    v7 = *((void **)a1 + 727);
    if ( v7 )
    {
      *((_QWORD *)a1 + 728) = 0;
      qfree(v7);
      *((_QWORD *)a1 + 727) = 0;
      *((_QWORD *)a1 + 729) = 0;
    }
    v9 = *((_BYTE *)a1 + 1620);
    a1[1452] = 0;
    v10 = (v9 & 0x10) != 0;
    LOBYTE(v10) = a2 | v10;
    if ( (_BYTE)v10 )
    {
      v11 = a1[406];
      a1[405] = v11;
      if ( (~(_BYTE)v11 & 7) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)a1 + 1) + 584LL) = 4 * *a1;
        v12 = a1[405];
        if ( (~(_BYTE)v12 & 7) != 0
          && (v12 & 0x4000) == 0
          && (unsigned int)sub_71BAE0((__int64)a1, 1, ~(unsigned __int8)a1[405] & 7, a4, a5, a6) == 2 )
        {
          sub_71B680((__int64)a1, 0);
        }
        v13 = *((__m128i **)a1 + 1);
        v14 = a1[8];
        v15 = a1[6];
        v16 = v13[35].m128i_u64[0];
        if ( v14 )
        {
          while ( 1 )
          {
            v17 = *a1;
            if ( v15 < v14 )
              v15 = v14;
            if ( v14 >= v16 / v17 )
              break;
            v18 = sub_7188E0(v13, v14, 0, v14, (__int64)v13, a6);
            if ( !v18 )
            {
              v13 = *((__m128i **)a1 + 1);
              v20 = *a1;
              v16 = v13[35].m128i_u64[0];
              goto LABEL_21;
            }
            if ( *(_DWORD *)v18 )
            {
              v19 = 0;
              do
              {
                if ( v15 < *(_DWORD *)&v18[4 * v19 + 8] )
                  v15 = *(_DWORD *)&v18[4 * v19 + 8];
                ++v19;
              }
              while ( v19 != *(_DWORD *)v18 );
            }
            v14 = *((_DWORD *)v18 + 1);
            v13 = *((__m128i **)a1 + 1);
            if ( !v14 )
            {
              v16 = v13[35].m128i_u64[0];
              goto LABEL_20;
            }
          }
          v21 = v17 * (v15 + 1);
          if ( v13[35].m128i_i64[0] >= v21 )
            goto LABEL_22;
        }
        else
        {
LABEL_20:
          v20 = *a1;
LABEL_21:
          v21 = v20 * (v15 + 1);
          if ( v16 >= v21 )
          {
LABEL_22:
            if ( a1[7] )
            {
LABEL_32:
              v23 = a1[9];
              *((_QWORD *)a1 + 333) = a1 + 410;
              *((_WORD *)a1 + 817) = 1;
              dword_2CA26D8 = 0;
              sub_724B00(a1, a1 + 410, v23);
              sub_71B770((__int64)a1, *((__int16 *)a1 + 816), a3);
            }
LABEL_23:
            *((_WORD *)a1 + 816) = 1;
            sub_724A50(a1, 1);
            byte_2CA26CA = 0;
            *((_WORD *)a1 + 817) = 0;
            return v10;
          }
        }
        sub_7181C0(v13, v21);
        if ( a1[7] )
          goto LABEL_32;
        goto LABEL_23;
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

