__int64 __fastcall sub_C26740(unsigned int *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v7; // r13
  unsigned int v8; // eax

  v4 = *(_QWORD *)(a3 + 8);
  v5 = sub_EEB7E0(a3);
  if ( !(unsigned __int8)sub_C26100(v5, v4, a1, a2, 1u) )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL);
  v8 = sub_EEB7E0(a3);
  return sub_C26100(v8, v7, a1, a2, 0);
}
