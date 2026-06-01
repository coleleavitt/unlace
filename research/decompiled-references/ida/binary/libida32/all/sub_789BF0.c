__int64 __fastcall sub_789BF0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  unsigned __int64 v3; // rbp
  const void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1[13] + 8LL * a1[14] - 8);
  if ( *(_DWORD *)v1 != 3 )
    sub_789570();
  v2 = (__int64 *)(**(_QWORD **)(v1 + 8) + 40LL * *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8LL) - 40);
  if ( (unsigned __int64)v2[1] > 1 )
  {
    if ( !under_debugger )
      interr(1276);
    BUG();
  }
  if ( v2 == a1 + 5 )
    return 0;
  v3 = a1[6];
  if ( v3 <= 1 )
  {
    v2[1] = 0;
    return 0;
  }
  v5 = (const void *)a1[5];
  v6 = (void *)*v2;
  if ( v2[2] < v3 )
  {
    v7 = qvector_reserve(v2, *v2, v3, 1);
    *v2 = v7;
    v6 = (void *)v7;
  }
  v2[1] = v3;
  memmove(v6, v5, v3 - 1);
  *(_BYTE *)(*v2 + v3 - 1) = 0;
  return 0;
}

