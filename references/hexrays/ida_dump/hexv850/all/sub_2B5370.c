__int64 __fastcall sub_2B5370(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 144;
  *(_QWORD *)(v2 - 144) = &off_4B4EC8;
  cleanup_argloc(v2);
  sub_2B45C0((_QWORD *)(a1 + 48));
  return cleanup_argloc(a1 + 8);
}
