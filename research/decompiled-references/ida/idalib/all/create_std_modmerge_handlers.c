unsigned __int64 __fastcall create_std_modmerge_handlers(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v7; // r14
  unsigned __int64 result; // rax
  __int64 v9; // [rsp-10h] [rbp-38h]

  v7 = *(const char **)(a3 + 16);
  result = sub_461C30(a1, a2, a3, (__int64)v7);
  if ( a5 )
  {
    if ( a1[2].m128i_i32[1] != -2 )
      a1[2].m128i_i32[1] = -1;
    create_nodeval_merge_handlers(nullptr, a1->m128i_i64, a2, v7, a4, a5, 1);
    return v9;
  }
  return result;
}
