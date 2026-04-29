__int64 __fastcall sub_3AE950(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B870((__int64 *)a1, (__int64)"Collecting calls to %a: caller %a [%d/%d]", *(_QWORD *)(a2 + 72), a3, a4, a5);
  return a1;
}
