unsigned __int64 __fastcall sub_499AE0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 i; // rbp
  __int64 v5; // rdi
  unsigned __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 j; // rbp
  __int64 v10; // rdi

  v2 = *(_QWORD *)(a1 + 152);
  v3 = *(_QWORD *)(v2 + 40);
  for ( i = v3 + 424LL * *(_QWORD *)(v2 + 48); i != v3; result = sub_499790(v5, v2) )
  {
    v5 = v3;
    v3 += 424;
  }
  v7 = *(_QWORD *)(a1 + 160);
  v8 = *(_QWORD *)(v7 + 40);
  for ( j = v8 + 424LL * *(_QWORD *)(v7 + 48); j != v8; result = sub_499790(v10, v7) )
  {
    v10 = v8;
    v8 += 424;
  }
  return result;
}
