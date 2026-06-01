__int64 __fastcall sub_59F96E(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_59C4EA(a1);
  sub_59C4F8(a2, *(_QWORD *)(a1 + 32), v2);
  *(_QWORD *)(a1 + 32) = a2;
  return a1;
}
