__int64 __fastcall sub_593F6E(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
  {
    v3 = sub_59476D(a2);
    v4 = sub_5939CC(a1);
    sub_5947B4(a1, v4, v3);
  }
  else
  {
    v2 = sub_59476D(a2);
    sub_59477B(a1, *(_QWORD *)(a1 + 8), v2);
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return sub_594A08(a1);
}
