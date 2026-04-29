__int64 __fastcall sub_1302F0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 112;
  *(_QWORD *)(v2 - 112) = off_4BE3E0;
  *(_QWORD *)(v2 - 64) = off_4BE3B8;
  sub_118BA0(v2);
  return j__qfree(a1);
}
