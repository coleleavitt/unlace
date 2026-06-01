__int64 __fastcall sub_5A9496(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_5A9D64(a1);
  sub_5A9D72(a2, *(_QWORD *)(a1 + 8), v2);
  *(_QWORD *)(a1 + 8) = a2;
  return a1;
}
