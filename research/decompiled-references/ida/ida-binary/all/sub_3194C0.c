__int64 __fastcall rs_chooser_t__::vfunc_4(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 i; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 result; // rax
  char v23; // [rsp+0h] [rbp-28h]

  v11 = a1 + 184;
  v12 = *(_QWORD *)(a1 + 192);
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      v14 = (__int64 *)(*(_QWORD *)(a1 + 184) + 24 * i);
      v15 = *v14;
      if ( *v14 )
      {
        v14[1] = 0;
        *(double *)a3.m128_u64 = qfree(v15, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 192) = 0;
  reg_read_strlist(v11, "RecentScripts");
  result = *(_BYTE *)(a1 + 12) & 1;
  if ( (*(_BYTE *)(a1 + 12) & 1) == 0 )
    return 1;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    sub_169630(
      (int)"AUTOHIDE REGISTRY\nThe recent script list is empty.",
      (__int64)"RecentScripts",
      v16,
      v17,
      v18,
      v19,
      a3,
      a4,
      a5,
      a6,
      v20,
      v21,
      a9,
      a10,
      v23);
    return 0;
  }
  return result;
}
