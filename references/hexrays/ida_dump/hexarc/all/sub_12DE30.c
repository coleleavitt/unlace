__int64 __fastcall sub_12DE30(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 112;
  *(_QWORD *)(v2 - 112) = off_4AA4A0;
  *(_QWORD *)(v2 - 64) = off_4AA478;
  sub_1166E0(v2);
  return j__qfree(a1);
}
