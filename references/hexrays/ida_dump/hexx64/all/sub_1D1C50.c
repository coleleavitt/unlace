__int64 __fastcall sub_1D1C50(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 208;
  *(_QWORD *)(v2 - 208) = &off_4EC050;
  sub_11CDA0(v2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4EA5E8;
  return sub_4139F0(a1);
}
