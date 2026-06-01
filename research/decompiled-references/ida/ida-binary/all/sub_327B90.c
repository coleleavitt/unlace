__int64 __fastcall wpl_chooser_t__::vfunc_13(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbx
  __int64 problem_name; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rdx
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-18h]

  v10 = *(_QWORD *)(a1 + 184) + 16LL * **(_QWORD **)a2;
  qword_8BCDD0 = *(_QWORD *)v10;
  byte_8BCDD8 = *(_BYTE *)(v10 + 8);
  problem_name = get_problem_name(*(unsigned __int8 *)(v10 + 8), 1);
  sub_169700((int)"%08a: %s\n", *(_QWORD *)v10, problem_name, v12, v13, v14, a3, a4, a5, a6, v15, v16, a9, a10, v19);
  sub_192AA0(0, *(_QWORD *)v10, -1, 1u);
  v17 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( v17 != 1 )
  {
    memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v17 - 8);
    --*(_QWORD *)(a2 + 8);
    return 2;
  }
  return result;
}
