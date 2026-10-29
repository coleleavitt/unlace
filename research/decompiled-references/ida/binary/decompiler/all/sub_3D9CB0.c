__int64 __fastcall sub_3D9CB0(
        __m128i *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 i; // rbx
  __int64 v17; // rax
  __m128i v18; // xmm1
  bool v19; // zf
  const char *v20; // rsi
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  __m128i v24; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  sub_2B1D90(
    (unsigned int)"Stock comments: detected corruption during %s, rebuilding and refreshing",
    a3,
    a3,
    a4,
    a5,
    a6);
  sub_3D77D0();
  sub_3D9AB0((__int64)&v23);
  v13 = v23;
  v14 = a1[15].m128i_i64[1];
  v22 = _mm_loadu_si128(&v24);
  if ( v14 )
  {
    v15 = a1[16].m128i_i64[0];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = v14 + 32 * i;
        if ( *(_QWORD *)(v17 + 8) )
        {
          *(_QWORD *)(v17 + 16) = 0;
          qfree();
          v14 = a1[15].m128i_i64[1];
        }
      }
    }
    a1[16].m128i_i64[0] = 0;
    qfree();
  }
  v18 = _mm_load_si128(&v22);
  v19 = a1[1].m128i_i64[0] == 0;
  a1[15].m128i_i64[1] = v13;
  v20 = s1;
  a1[16] = v18;
  if ( !v19 )
    v20 = (const char *)a1->m128i_i64[1];
  return callui(78, v20, callui, v10, v11, v12, a7, a8, a9, a10);
}
