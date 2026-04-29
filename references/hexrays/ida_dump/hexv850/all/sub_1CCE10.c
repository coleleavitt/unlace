__int64 __fastcall sub_1CCE10(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 208;
  *(_QWORD *)(v2 - 208) = &off_4BEEE8;
  sub_1181E0(v2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4BD438;
  return sub_3EFEF0(a1);
}
