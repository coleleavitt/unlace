__int64 __fastcall segm_editor_t__::vfunc_12(
        double a1,
        __m128 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        _QWORD *a10)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8

  if ( !a10[1] )
    return 1;
  v10 = 0;
  do
  {
    v11 = *(unsigned int *)(*a10 + 8 * v10++);
    v12 = getnseg(v11);
    sub_3258C0(v12, a1, a2, a3, a4, v13, v14, a7, a8);
  }
  while ( v10 < a10[1] );
  return 1;
}
