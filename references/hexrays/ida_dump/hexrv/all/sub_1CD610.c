__int64 __fastcall sub_1CD610(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 208;
  *(_QWORD *)(v2 - 208) = &off_4BDEE8;
  sub_1188E0(v2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4BC428;
  return sub_3EE6F0(a1);
}
