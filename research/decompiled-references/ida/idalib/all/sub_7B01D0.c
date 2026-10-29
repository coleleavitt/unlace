__int64 __fastcall sub_7B01D0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  const void *v6; // r13
  void *v7; // rdi
  __int64 v9; // rax

  if ( (*(_BYTE *)(a1 + 6016) & 1) == 0 )
  {
    if ( !under_debugger )
      interr(1228);
    BUG();
  }
  v3 = swap64(*(_QWORD *)(a3 + 1));
  if ( v3 >= *(_QWORD *)(a1 + 5928) )
    return -1;
  v4 = *(_QWORD *)(a1 + 5920) + 24 * v3;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 <= 1 )
    return -1;
  if ( !a2 || a2 == (__int64 *)v4 )
    return v5 - 1;
  v6 = *(const void **)v4;
  v7 = (void *)*a2;
  if ( a2[2] < v5 )
  {
    v9 = qvector_reserve(a2, *a2, *(_QWORD *)(v4 + 8), 1);
    *a2 = v9;
    v7 = (void *)v9;
  }
  a2[1] = v5;
  memmove(v7, v6, v5 - 1);
  *(_BYTE *)(*a2 + v5 - 1) = 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
    return v5 - 1;
  return 0;
}
