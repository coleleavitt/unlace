__int64 __fastcall pl_chooser_t__::vfunc_11(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  do
  {
    v2 = *(_QWORD *)(a1 + 184) + 16LL * *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8) - 8);
    forget_problem(*(unsigned __int8 *)(v2 + 8), *(_QWORD *)v2);
  }
  while ( (unsigned __int8)sub_49F220(a2) );
  sub_49F270(a1, a2, **(_QWORD **)a2);
  return 1;
}
