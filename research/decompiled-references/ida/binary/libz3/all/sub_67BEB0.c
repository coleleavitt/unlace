__int64 __fastcall sub_67BEB0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  bool v5; // zf
  _QWORD *v6; // rbx
  _QWORD *i; // r13
  __int64 v8; // r15
  __int64 result; // rax
  unsigned int *v10; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  if ( a2 )
  {
    a2[2] += 2;
    v10 = a2;
  }
  else
  {
    v10 = nullptr;
  }
  sub_6761A0((unsigned int **)(a1 + 1552), &v10);
  v3 = sub_67B850((__int64 *)(a1 + 144), a2);
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  if ( a2 )
  {
    v5 = a2[2]-- == 1;
    if ( v5 )
      sub_15D7BC0(v2, a2);
  }
  sub_E5EBF0(*(_QWORD *)(a1 + 1352), v4);
  sub_E5EBF0(*(_QWORD *)(a1 + 1360), v4);
  v6 = *(_QWORD **)(a1 + 216);
  if ( v6 )
  {
    for ( i = &v6[*((unsigned int *)v6 - 1)]; i != v6; ++v6 )
    {
      v8 = *v6;
      sub_E5EBF0(*(_QWORD *)(a1 + 1352), *v6);
      sub_E5EBF0(*(_QWORD *)(a1 + 1360), v8);
    }
  }
  result = sub_2FCDE0((__int64 *)(a1 + 208));
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v5 )
      return sub_15D7BC0(v2, v4);
  }
  return result;
}

