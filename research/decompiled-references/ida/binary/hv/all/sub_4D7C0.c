__int64 __fastcall sub_4D7C0(__m128i *a1, const __m128i **a2, __int64 a3)
{
  __int8 *v3; // rbx
  unsigned int v4; // r14d
  unsigned int v8; // eax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __m128i *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-70h]
  unsigned int v25; // [rsp+14h] [rbp-64h] BYREF
  const __m128i *v26; // [rsp+18h] [rbp-60h] BYREF
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __m128i v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v26 = *a2;
  v3 = &v26->m128i_i8[a3];
  if ( !__CFADD__(a3, v26) )
  {
    if ( (unsigned __int8)sub_4CF70(a1, &v26, a3) )
    {
      LOBYTE(v8) = sub_4A460(&v25, (unsigned __int64 *)&v26, (__int64)v3);
      v4 = v8;
      if ( (_BYTE)v8 )
      {
        v9 = v25;
        v10 = a1[3].m128i_u64[1];
        v11 = v25;
        if ( v25 != v10 )
        {
          v27 = 0;
          v28 = 0;
          if ( v25 >= v10 )
          {
            v12 = a1[3].m128i_u64[0];
            v13 = a1[4].m128i_u64[0];
            v14 = a1 + 3;
            if ( (unsigned __int64)&v27 < v12 || (unsigned __int64)&v27 >= v12 + 24 * v13 )
            {
              if ( v13 >= v25
                || (v22 = sub_96080(v14, v12, v25, 24),
                    v10 = a1[3].m128i_u64[1],
                    a1[3].m128i_i64[0] = v22,
                    v12 = v22,
                    v10 < v9) )
              {
                v19 = v27;
                v20 = 24 * v10;
                while ( 1 )
                {
                  v21 = v20 + v12;
                  ++v10;
                  v20 += 24;
                  *(_QWORD *)v21 = v19;
                  *(__m128i *)(v21 + 8) = _mm_loadu_si128(&v28);
                  if ( v9 == v10 )
                    break;
                  v12 = a1[3].m128i_u64[0];
                }
              }
            }
            else if ( v13 >= v25
                   || (v23 = sub_96080(v14, v12, v25, 24),
                       v10 = a1[3].m128i_u64[1],
                       a1[3].m128i_i64[0] = v23,
                       v12 = v23,
                       v10 < v9) )
            {
              v15 = 24 * v10;
              while ( 1 )
              {
                v16 = v15 + v12;
                ++v10;
                v15 += 24;
                *(_QWORD *)v16 = 0;
                *(_OWORD *)(v16 + 8) = 0;
                if ( v9 == v10 )
                  break;
                v12 = a1[3].m128i_u64[0];
              }
            }
            a1[3].m128i_i64[1] = v9;
LABEL_17:
            v17 = 3 * v9;
            v18 = 0;
            v24 = 8 * v17;
            while ( (unsigned __int8)sub_4CD70(v18 + a1[3].m128i_i64[0], &v26, v3 - (__int8 *)v26) )
            {
              v18 += 24;
              if ( v24 == v18 )
                goto LABEL_20;
            }
            return 0;
          }
          a1[3].m128i_i64[1] = v25;
        }
        if ( !v11 )
        {
LABEL_20:
          *a2 = v26;
          return v4;
        }
        goto LABEL_17;
      }
    }
  }
  return 0;
}

