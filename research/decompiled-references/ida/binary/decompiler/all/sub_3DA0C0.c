__int64 __fastcall sub_3DA0C0(__m128i *a1, unsigned __int64 a2)
{
  const __m128i *v4; // rbx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __m128i *v19; // rdi
  __int64 (__fastcall *v20)(__int64); // rdx
  const char *v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a2 >= a1[16].m128i_i64[0] )
    return -1;
  v4 = (const __m128i *)(a1[15].m128i_i64[1] + 32 * a2);
  if ( !v4 )
    return -1;
  sub_3D96E0((__int64)&v21, (__int64)a1[17].m128i_i64, v4->m128i_i64[0]);
  if ( (_BYTE)v24 )
  {
    v8 = s1;
    if ( v22 )
      v8 = v21;
    sub_3D9CB0(a1, (__int64)v8, (int)"deletion", v5, v6, v7, (__int64)v21, v22, v23, v24);
    v9 = a2;
    if ( v21 )
      qfree();
  }
  else
  {
    if ( v4->m128i_i64[1] )
    {
      v4[1].m128i_i64[0] = 0;
      qfree();
    }
    v11 = a1[16].m128i_i64[0];
    v12 = ((a1[15].m128i_i64[1] + 32 * v11 - (__int64)v4) >> 5) - 2;
    if ( v12 >= 0 )
    {
      do
      {
        v13 = v4[2].m128i_i64[0];
        v14 = _mm_loadu_si128(v4 + 3);
        v4 += 2;
        v4[1].m128i_i64[1] = 0;
        v4[-2].m128i_i64[0] = v13;
        v15 = v4->m128i_i64[1];
        v4[-1] = v14;
        v4[-2].m128i_i64[1] = v15;
        v4->m128i_i64[1] = 0;
      }
      while ( v12-- != 0 );
      v11 = a1[16].m128i_i64[0];
    }
    v17 = a1[2].m128i_i64[0];
    v18 = v11 - 1;
    v19 = a1 + 2;
    a1[16].m128i_i64[0] = v18;
    v20 = *(__int64 (__fastcall **)(__int64))(v17 + 40);
    if ( v20 != sub_3D6B20 )
      v18 = v20((__int64)v19);
    if ( v18 )
    {
      v9 = v18 - 1;
      if ( a2 < v18 )
        return a2;
    }
    else
    {
      return -1;
    }
  }
  return v9;
}
