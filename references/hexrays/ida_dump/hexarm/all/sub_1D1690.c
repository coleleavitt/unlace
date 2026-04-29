__int64 __fastcall sub_1D1690(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 208;
  *(_QWORD *)(v2 - 208) = &off_4E7F30;
  sub_11C7E0(v2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4E64D8;
  return sub_40D800(a1);
}
