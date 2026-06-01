__int64 __fastcall sub_59CBF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_59C962(a1);
  sub_59C970(a2, *(_QWORD *)(a1 + 32), v2);
  *(_QWORD *)(a1 + 32) = a2;
  return a1;
}
