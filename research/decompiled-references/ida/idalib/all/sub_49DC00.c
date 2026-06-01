unsigned __int64 __fastcall sub_49DC00(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-3B0h]
  __int64 v28; // [rsp+8h] [rbp-3B0h]
  __int64 v29; // [rsp+10h] [rbp-3A8h]
  __int64 v30; // [rsp+10h] [rbp-3A8h]
  __int64 v31; // [rsp+18h] [rbp-3A0h]
  __m128i v32[27]; // [rsp+20h] [rbp-398h] BYREF
  __m128i v33[26]; // [rsp+1D0h] [rbp-1E8h] BYREF
  unsigned __int64 v34; // [rsp+378h] [rbp-40h]

  v2 = a1[1];
  v34 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v32, 0, 0x1A8u);
    v32[16].m128i_i64[1] = -1;
    v32[19].m128i_i64[0] = (__int64)v32[22].m128i_i64;
    v32[19].m128i_i64[1] = 1;
    v32[21].m128i_i64[0] = 1065353216;
    if ( a2 < v2 )
    {
      v7 = 424 * a2;
      v8 = a2;
      do
      {
        ++v8;
        v9 = v7 + *a1;
        v7 += 424;
        sub_496580(v9);
      }
      while ( v2 != v8 );
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)v32 >= *a1 && (unsigned __int64)v32 < 424 * v4 + *a1 )
      {
        sub_49D3B0((__int64)v33, v32);
        v10 = a1[2];
        if ( v10 < a2 )
        {
          v30 = qvector_reserve(a1, 0, a2, 424);
          v21 = v30;
          v22 = a1[2];
          a1[2] = v10;
          v23 = (__int64 *)*a1;
          v31 = v22;
          v24 = a1[1] - 1;
          if ( v24 >= 0 )
          {
            do
            {
              v25 = v21;
              v28 = v24;
              v21 += 424;
              sub_49B590(v25, v23);
              v26 = (__int64)v23;
              v23 += 53;
              sub_496580(v26);
              v24 = v28 - 1;
            }
            while ( v28 );
            v23 = (__int64 *)*a1;
          }
          qfree(v23);
          *a1 = v30;
          a1[2] = v31;
        }
        v11 = a1[1];
        if ( v11 < a2 )
        {
          v12 = 424 * v11;
          do
          {
            sub_49D3B0(v12 + *a1, v33);
            ++v11;
            v12 += 424;
          }
          while ( a2 != v11 );
        }
        a1[1] = a2;
        sub_496580((__int64)v33);
        goto LABEL_9;
      }
      if ( v4 < a2 )
      {
        v13 = qvector_reserve(a1, 0, a2, 424);
        v14 = a1[2];
        v15 = (__int64 *)*a1;
        a1[2] = v4;
        v27 = v13;
        v29 = v14;
        v16 = a1[1] - 1;
        if ( v16 >= 0 )
        {
          v17 = v13;
          do
          {
            v18 = v17;
            v17 += 424;
            sub_49B590(v18, v15);
            v19 = (__int64)v15;
            v15 += 53;
            sub_496580(v19);
          }
          while ( v16-- != 0 );
          v15 = (__int64 *)*a1;
        }
        qfree(v15);
        v2 = a1[1];
        *a1 = v27;
        a1[2] = v29;
      }
      if ( v2 < a2 )
      {
        v5 = 424 * v2;
        do
        {
          sub_49D3B0(v5 + *a1, v32);
          ++v2;
          v5 += 424;
        }
        while ( v2 < a2 );
      }
    }
    a1[1] = a2;
LABEL_9:
    sub_496580((__int64)v32);
  }
  return v34 - __readfsqword(0x28u);
}
