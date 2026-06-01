void __fastcall sub_1366240(__int64 a1, __int64 a2)
{
  const __m128i *v2; // rbx
  unsigned __int64 v4; // r13
  const __m128i *v5; // r15
  const __m128i *v6; // rdx
  const __m128i *v7; // rax
  __int64 v8; // rbx
  void *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __m128i *v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rax
  __m128i *v15; // rax
  unsigned __int64 *v16; // rdi
  size_t v17; // rdx
  __m128i *v18; // rdi
  void *v19[2]; // [rsp+8h] [rbp-68h] BYREF
  __m128i v20; // [rsp+18h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]

  if ( a1 != a2 )
  {
    v2 = (const __m128i *)(a1 + 40);
    if ( a2 != a1 + 40 )
    {
      v4 = a1 + ((a2 - 80 - a1) & 0xFFFFFFFFFFFFFFF8LL) + 80;
      do
      {
        v5 = (const __m128i *)((char *)v2 + 40);
        if ( sub_9C4B50((__int64)v2, a1) >= 0 )
        {
          sub_13660E0((__int64)v2);
        }
        else
        {
          v6 = (const __m128i *)v2->m128i_i64[0];
          v7 = v2 + 1;
          v19[0] = &v20;
          if ( v6 == &v2[1] )
          {
            v20 = _mm_loadu_si128(v2 + 1);
          }
          else
          {
            v19[0] = (void *)v6;
            v20.m128i_i64[0] = v2[1].m128i_i64[0];
          }
          v8 = (__int64)v2->m128i_i64 - a1;
          v9 = (void *)v5[-2].m128i_i64[0];
          v5[-3].m128i_i64[1] = (__int64)v7;
          v10 = v5[-1].m128i_i64[1];
          v5[-2].m128i_i8[8] = 0;
          v19[1] = v9;
          v5[-2].m128i_i64[0] = 0;
          v11 = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 3);
          v21 = v10;
          if ( v8 > 0 )
          {
            v12 = (__m128i *)&v5[-4];
            while ( 1 )
            {
              v15 = (__m128i *)v12[-1].m128i_i64[0];
              v16 = (unsigned __int64 *)v12[1].m128i_i64[1];
              if ( v15 == v12 )
              {
                v17 = v12[-1].m128i_u64[1];
                if ( v17 )
                {
                  if ( v17 == 1 )
                    *(_BYTE *)v16 = v12->m128i_i8[0];
                  else
                    memcpy(v16, v12, v17);
                  v16 = (unsigned __int64 *)v12[1].m128i_i64[1];
                  v17 = v12[-1].m128i_u64[1];
                }
                v12[2].m128i_i64[0] = v17;
                *((_BYTE *)v16 + v17) = 0;
                goto LABEL_12;
              }
              if ( v16 == &v12[2].m128i_u64[1] )
                break;
              v12[1].m128i_i64[1] = (__int64)v15;
              v13 = v12[2].m128i_i64[1];
              v12[2].m128i_i64[0] = v12[-1].m128i_i64[1];
              v12[2].m128i_i64[1] = v12->m128i_i64[0];
              if ( !v16 )
                goto LABEL_20;
              v12[-1].m128i_i64[0] = (__int64)v16;
              v12->m128i_i64[0] = v13;
LABEL_12:
              v14 = (_BYTE *)v12[-1].m128i_i64[0];
              v12[-1].m128i_i64[1] = 0;
              v12 = (__m128i *)((char *)v12 - 40);
              *v14 = 0;
              v12[6].m128i_i64[0] = v12[3].m128i_i64[1];
              if ( !--v11 )
                goto LABEL_21;
            }
            v12[1].m128i_i64[1] = (__int64)v15;
            v12[2].m128i_i64[0] = v12[-1].m128i_i64[1];
            v12[2].m128i_i64[1] = v12->m128i_i64[0];
LABEL_20:
            v12[-1].m128i_i64[0] = (__int64)v12;
            goto LABEL_12;
          }
LABEL_21:
          sub_A0AAD0(a1, v19);
          v18 = (__m128i *)v19[0];
          *(_QWORD *)(a1 + 32) = v21;
          if ( v18 != &v20 )
            operator delete(v18);
        }
        v2 = v5;
      }
      while ( v5 != (const __m128i *)v4 );
    }
  }
}
