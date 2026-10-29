unsigned __int64 __fastcall sub_484E40(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int64 i; // rbp
  __int64 v10; // rdi

  v2 = *(_QWORD *)(a1 + 152);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = v3 + 416LL * *(_QWORD *)(v2 + 48);
  while ( v4 != v3 )
  {
    v5 = v3;
    v3 += 416;
    sub_484B70(v5, v2);
  }
  v6 = *(_QWORD *)(a1 + 160);
  result = *(_QWORD *)(v6 + 48);
  v8 = *(_QWORD *)(v6 + 40);
  for ( i = v8 + 416 * result; i != v8; result = sub_484B70(v10, v6) )
  {
    v10 = v8;
    v8 += 416;
  }
  return result;
}

