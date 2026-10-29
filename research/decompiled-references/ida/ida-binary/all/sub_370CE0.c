__int64 __fastcall proxim_data_t::add_item1(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  _QWORD *v13; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  char v24; // [rsp-8h] [rbp-8h]

  v13 = *(_QWORD **)(a1 + 8);
  v15 = (_QWORD *)*v13;
  v16 = *v13 + 40LL * v13[1];
  if ( *v13 != v16 )
  {
    while ( a11 != *v15 )
    {
      v15 += 5;
      if ( (_QWORD *)v16 == v15 )
        goto LABEL_7;
    }
    if ( v15 )
      return 1;
  }
LABEL_7:
  if ( !sub_370AA0((__int64)v13, a11, a13 - 1) )
    sub_169700(
      (int)"Coherency check failed: other_item != nullptr\n",
      a11,
      v18,
      v19,
      v20,
      v21,
      a2,
      a3,
      a4,
      a5,
      v22,
      v23,
      a8,
      a9,
      v24);
  return 1;
}
