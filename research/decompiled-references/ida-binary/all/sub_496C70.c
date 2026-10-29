__int64 __fastcall base_dirtree_widget_t::copy_all(
        __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        signed __int64 a5,
        __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int *v8; // rax

  sub_3FBE30(a1 + 2, a1[3].m128i_i64[0], a2, a4, a5, a6);
  v8 = (int *)a1[2].m128i_i64[0];
  if ( !v8 || *v8 > 1 )
    sub_3FB980(a1 + 2, 0, 0, 0, v6, v7);
  return 0;
}
