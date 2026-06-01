__int64 __fastcall sub_CAE6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  LODWORD(v10[0]) = sub_AAE100(*(_QWORD *)a1, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8LL), a3, a4);
  v5 = sub_21EDE70(v10);
  LODWORD(v10[0]) = sub_21EF420(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  v6 = sub_21EDE70(v10);
  v7 = 1;
  if ( v5 != v6 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v10[0] = **(_QWORD **)(a1 + 8) | 4LL;
    return (unsigned int)sub_CA4220(v8, v5, v10);
  }
  return v7;
}
