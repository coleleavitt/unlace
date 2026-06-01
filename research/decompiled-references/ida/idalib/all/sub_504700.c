__int64 __fastcall sub_504700(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdi
  void **v4; // rax
  _QWORD *v5; // rdi
  void **v6; // r12
  _QWORD *v7; // rax
  __int64 v9; // rbp

  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 0;
  v4 = (void **)sub_506E00(v3, *a2);
  v5 = *(_QWORD **)(a1 + 32);
  v6 = v4;
  if ( v4 == (void **)(*v5 + 16LL * v5[1]) )
    return 0;
  v7 = *v4;
  if ( *v7 != *a2 || v7[1] != a2[1] )
    return 0;
  sub_504460(v5 + 8, a1, a2);
  v9 = *(_QWORD *)(a1 + 32);
  if ( a2 != *v6 )
    memcpy(*v6, a2, *(unsigned int *)(v9 + 32));
  *((_BYTE *)v6 + 12) = 1;
  *(_QWORD *)(v9 + 24) = v6;
  return 1;
}
