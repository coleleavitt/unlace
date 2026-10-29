__int64 __fastcall sub_46B240(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int *v4; // rax

  v3 = switch_dbctx(*(int *)(a1 + 8));
  v4 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a2);
  return sub_625720(v3, *v4, v4[1]);
}

