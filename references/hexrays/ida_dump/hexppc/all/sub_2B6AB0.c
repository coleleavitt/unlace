__int64 __fastcall sub_2B6AB0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 144;
  *(_QWORD *)(v2 - 144) = &off_4CE648;
  cleanup_argloc(v2);
  sub_2B5D00((_QWORD *)(a1 + 48));
  return cleanup_argloc(a1 + 8);
}
