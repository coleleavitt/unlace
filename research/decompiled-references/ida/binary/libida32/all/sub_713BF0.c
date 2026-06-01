unsigned __int64 __fastcall sub_713BF0(unsigned int *a1)
{
  void *v2; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int16 v6; // bp
  __m128i *v7; // rdi
  __int8 *v8; // rsi
  unsigned __int16 *v9; // r15
  unsigned int v10; // ecx
  __int64 v11; // rdx
  int v12; // ebp
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // r8
  unsigned int v16; // r14d
  int v17; // r10d
  unsigned __int16 v18; // bx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+10h] [rbp-48h]
  unsigned __int64 v26; // [rsp+10h] [rbp-48h]
  unsigned int *v27; // [rsp+18h] [rbp-40h]

  v2 = *((void **)a1 + 727);
  if ( v2 )
  {
    *((_QWORD *)a1 + 728) = 0;
    qfree(v2);
    *((_QWORD *)a1 + 727) = 0;
    *((_QWORD *)a1 + 729) = 0;
  }
  result = 0;
  *((_WORD *)a1 + 2904) = 0;
  if ( (a1[405] & 0x20) == 0 )
  {
    v27 = a1 + 1454;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 560LL) / (unsigned __int64)*a1;
    result = *((_QWORD *)a1 + 728);
    v5 = ((unsigned __int16)v4 + 7) >> 3;
    if ( result < v5 )
    {
      v22 = *((_QWORD *)a1 + 727);
      if ( *((_QWORD *)a1 + 729) < v5 )
      {
        v23 = qvector_reserve(v27, v22, ((unsigned __int16)v4 + 7) >> 3, 1);
        *((_QWORD *)a1 + 727) = v23;
        v22 = v23;
        result = *((_QWORD *)a1 + 728);
      }
      result = (unsigned __int64)memset((void *)(v22 + result), 0, v5 - result);
      *((_QWORD *)a1 + 728) = v5;
    }
    else if ( v5 != result )
    {
      *((_QWORD *)a1 + 728) = v5;
    }
    *((_WORD *)a1 + 2904) = v4;
    v6 = *((_WORD *)a1 + 16);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *((__m128i **)a1 + 1);
        v8 = (__int8 *)v6;
        result = (unsigned __int64)sub_7136A0(v7, v6, 0);
        v9 = (unsigned __int16 *)result;
        if ( !result )
          break;
        v10 = *(unsigned __int16 *)result;
        v11 = *(unsigned __int16 *)result;
        result = (*a1 >> 1) - 4;
        if ( (unsigned int)result < v10 )
LABEL_34:
          sub_7172E0(v7, v8, v11);
        if ( v6 < *((_WORD *)a1 + 2904) )
        {
          result = sub_7139C0((__int64)a1, v6);
          LOWORD(v11) = *v9;
        }
        v12 = 0;
        if ( (_WORD)v11 )
        {
          do
          {
            v13 = *((_WORD *)a1 + 2904);
            v14 = v9[v12 + 2];
            if ( v14 < v13 )
            {
              v7 = *((__m128i **)a1 + 727);
              v15 = (unsigned __int64)v14 >> 3;
              v16 = v14 & 7;
              v8 = &v7->m128i_i8[v15];
              v17 = v7->m128i_u8[v15];
              v11 = v7->m128i_u8[v15];
              if ( _bittest(&v17, v16) )
                goto LABEL_34;
              v18 = v14 + 1;
              if ( v13 < (unsigned __int16)(v14 + 1) )
              {
                v19 = *((_QWORD *)a1 + 728);
                v20 = (v18 + 7) >> 3;
                if ( v19 < v20 )
                {
                  if ( *((_QWORD *)a1 + 729) < v20 )
                  {
                    v26 = v15;
                    v21 = qvector_reserve(v27, *((_QWORD *)a1 + 727), (v18 + 7) >> 3, 1);
                    v15 = v26;
                    v20 = (v18 + 7) >> 3;
                    *((_QWORD *)a1 + 727) = v21;
                    v7 = (__m128i *)v21;
                    v19 = *((_QWORD *)a1 + 728);
                  }
                  v24 = v20;
                  v25 = v15;
                  memset(&v7->m128i_i8[v19], 0, v20 - v19);
                  v8 = (__int8 *)(*((_QWORD *)a1 + 727) + v25);
                  *((_QWORD *)a1 + 728) = v24;
                }
                else if ( v20 != v19 )
                {
                  *((_QWORD *)a1 + 728) = v20;
                }
                *((_WORD *)a1 + 2904) = v18;
                LOBYTE(v11) = *v8;
              }
              *v8 = (1 << v16) | v11;
            }
            result = *v9;
            ++v12;
          }
          while ( (int)result > v12 );
        }
        v6 = v9[1];
        if ( !v6 )
          return result;
      }
      if ( v6 < *((_WORD *)a1 + 2904) )
        return sub_7139C0((__int64)a1, v6);
    }
  }
  return result;
}

