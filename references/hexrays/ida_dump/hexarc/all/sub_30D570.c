__int64 __fastcall sub_30D570(__m128i *a1, int *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbp
  int v5; // r12d
  __int32 v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  char v17; // [rsp+4h] [rbp-F4h]
  __int64 *v18; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v19; // [rsp+18h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v21; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+40h] [rbp-B8h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+60h] [rbp-98h]
  _DWORD v26[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v27; // [rsp+78h] [rbp-80h] BYREF
  __int128 v28; // [rsp+80h] [rbp-78h]
  __m128i v29; // [rsp+90h] [rbp-68h]
  __m128i v30; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+B8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( (a1->m128i_i32[0] & 0xF) == 2 )
  {
    v2 = 0;
    if ( (*a2 & 0xF) == 2 )
    {
      v4 = a1[1].m128i_i64[0];
      v5 = a2[1];
      v6 = a1->m128i_i32[1];
      v7 = (__int64 *)a1->m128i_i64[1];
      v21.m128i_i32[0] = 2;
      v23[1] = v5;
      v21.m128i_i32[1] = v6;
      v21.m128i_i64[1] = 0;
      v23[0] = 2;
      v24 = 0;
      v18 = &v7[2 * v4];
      v17 = 8 * v5;
      v22 = 0;
      v25 = 0;
      if ( v7 == v18 )
      {
LABEL_23:
        sub_30B800((__int64)&v21);
      }
      else
      {
        do
        {
          v8 = *v7;
          v9 = v7[1];
          v19 = (unsigned __int64)*v7 >> v17;
          if ( v19 != (unsigned __int64)(*v7 + v9 - 1) >> v17 )
            goto LABEL_22;
          if ( v5 != 8 )
          {
            v10 = (1LL << v17) - 1;
            v8 &= v10;
            v9 = (v10 & (*v7 + v9 - 1)) + 1 - v8;
          }
          v20[0] = v8;
          v20[1] = v9;
          if ( (unsigned __int8)sub_310AF0(&v24, v20, 0) )
          {
LABEL_22:
            v2 = 0;
            goto LABEL_15;
          }
          sub_30FD30(&v24, v20);
          v26[1] = v5;
          v26[0] = 2;
          v27 = nullptr;
          v28 = 0;
          sub_30FD30(&v27, v20);
          if ( (unsigned __int8)sub_30D430((__int64)v26, a2) )
          {
            if ( v26[0] )
            {
              v14 = v19 << v17;
              v15 = v27;
              v16 = &v27[2 * v28];
              if ( v16 != v27 )
              {
                if ( ((16 * (_BYTE)v28) & 0x10) == 0 || (v15 = v27 + 2, *v27 += v14, v16 != v15) )
                {
                  do
                  {
                    *v15 += v14;
                    v15[2] += v14;
                    v15 += 4;
                  }
                  while ( v16 != v15 );
                }
              }
              sub_30F930(&v21.m128i_u64[1], &v27);
            }
          }
          else
          {
            sub_30FD30(&v21.m128i_u64[1], v7);
          }
          v7 += 2;
          sub_30B800((__int64)v26);
        }
        while ( v18 != v7 );
        if ( !v22.m128i_i64[0] )
          goto LABEL_23;
      }
      v11 = _mm_loadu_si128(a1);
      v2 = 1;
      v12 = _mm_loadu_si128(a1 + 1);
      *a1 = _mm_load_si128(&v21);
      v13 = _mm_load_si128(&v22);
      v29 = v11;
      v30 = v12;
      a1[1] = v13;
      v21 = v11;
      v22 = v12;
LABEL_15:
      sub_30B800((__int64)v23);
      sub_30B800((__int64)&v21);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
