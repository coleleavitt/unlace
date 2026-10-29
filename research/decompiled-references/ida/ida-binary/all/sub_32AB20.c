__int64 __fastcall sa_chooser_t__::vfunc_4(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  _QWORD *v15; // r13
  __int64 v16; // r12
  __int64 i; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  double v20; // xmm4_8
  double v21; // xmm5_8
  char v23; // [rsp+0h] [rbp-28h]

  v15 = *(_QWORD **)(a1 + 184);
  if ( v15
    || (v15 = (_QWORD *)qword_8CC7C0) != nullptr
    || (_QWORD)xmmword_8CC7D8 && (v15 = *(_QWORD **)qword_8CC7D0) != nullptr )
  {
    v16 = *(_QWORD *)(a1 + 216);
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 8 * i);
        *(double *)a7.m128_u64 = qfree(v18, a2);
      }
    }
    v19 = *(_QWORD *)(a1 + 208);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 216) = 0;
      *(double *)a7.m128_u64 = qfree(v19, a2);
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 224) = 0;
    }
    sub_1C76F0((int)"Searching");
    sub_329AF0(
      v15,
      1,
      *(_DWORD *)(a1 + 192),
      (__int64 (__fastcall *)(__int64 **, _QWORD *, __m256i *, __int64))sub_3273A0,
      (__int64 **)a1,
      a7,
      a8,
      a9,
      a10,
      v20,
      v21,
      a13,
      a14);
    sub_1C78D0();
  }
  else
  {
    sub_169700((int)"No view to search\n", (__int64)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v23);
  }
  return 1;
}
