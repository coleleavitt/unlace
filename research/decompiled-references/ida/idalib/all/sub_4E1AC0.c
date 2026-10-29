__int64 __fastcall sub_4E1AC0(_QWORD *a1)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14

  if ( (*(_BYTE *)(*a1 + 940LL) & 1) == 0 )
    return 1;
  v3 = use_mapping(a1[7]);
  v4 = a1[8];
  v5 = v3;
  if ( !v4 )
  {
    if ( a1[7] != v3 && (debug & 2) != 0 )
      sub_3879F0();
    a1[7] = v3;
    return 1;
  }
  v6 = use_mapping(v4);
  v7 = sub_505D70(*(_QWORD *)(*a1 + 1672LL) + 1624LL, a1[3]);
  v8 = sub_510810(*(_QWORD *)(*a1 + 1672LL), v7, a1[7] - a1[8]);
  if ( v8 == sub_510810(*(_QWORD *)(*a1 + 1672LL), v7, v5 - v6) )
  {
    if ( a1[8] != v6 && (debug & 2) != 0 )
      sub_3879F0();
    a1[7] = v5;
    a1[8] = v6;
    return 1;
  }
  if ( (debug & 2) != 0 )
    sub_3879F0();
  return 0;
}
