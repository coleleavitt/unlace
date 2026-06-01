char __fastcall sub_A77830(__int64 **a1, unsigned int *a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  __int64 *v6; // r12
  char result; // al
  __int64 *v8; // rdi

  v3 = sub_FF9E10((*a1)[63], *a2);
  if ( v3 < 0 )
    return 0;
  v4 = v3;
  v5 = **a1;
  v6 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 8LL * (unsigned int)v3);
  result = sub_966310(v5, v6);
  if ( !result )
    return 0;
  v8 = (__int64 *)v6[1];
  if ( v6 != v8 )
    return v4 == (unsigned int)sub_B39350(v8, *(unsigned int *)(**a1 + 8));
  return result;
}

