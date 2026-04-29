__int64 __fastcall sub_3DCE40(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 func; // rdx
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 *v15; // r11
  __m128i v16; // xmm0
  volatile signed __int32 *v17; // xmm2_8
  unsigned int v18; // ebx
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  __m128i v21; // [rsp+10h] [rbp-58h] BYREF
  __m128i v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( a4 )
  {
    func = get_func(a2);
    if ( !func )
      return 0;
    sub_3CC230(&v22, **(_QWORD **)(a1 + 48), func, a3, a5);
    v12 = v22.m128i_i64[0];
    if ( !v22.m128i_i64[0] )
      return 0;
    sub_80090(v22.m128i_i64[0]);
    j__qfree(v12);
  }
  v13 = (__int64 *)sub_3CF540(*(_QWORD *)(a1 + 48), a2);
  if ( v13 == v14 )
    return 0;
  while ( a3 != *(_DWORD *)(*v13 + 56) )
  {
    if ( v14 == ++v13 )
      return 0;
  }
  sub_3D9F30(&v21, *v13, *v15, a6, a7, *(double *)a8.m128_u64, a9);
  v16 = _mm_load_si128(&v21);
  v17 = (volatile signed __int32 *)_mm_movehl_ps(a8, (__m128)v16).m128_u64[0];
  v20 = v16;
  if ( !v16.m128i_i64[0] )
  {
    if ( v17 )
      sub_3D07E0(v17);
    return 0;
  }
  sub_3CD8D0(v16.m128i_i64[0]);
  sub_3D9740(v16.m128i_i64[0], v16);
  v22 = _mm_load_si128(&v20);
  v18 = sub_3D0B90(a1, &v22);
  if ( v22.m128i_i64[1] )
    sub_3D07E0((volatile signed __int32 *)v22.m128i_i64[1]);
  return v18;
}
