bool __fastcall func_parent_iterator_set(__int64 a1, unsigned int *a2)
{
  __int64 *v2; // r12
  unsigned int *v3; // rax

  if ( !a1 )
    return 0;
  v2 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( *(_QWORD *)a1 )
    sub_4EC940((__int64)(v2 + 203), *(unsigned int **)a1);
  if ( a2 )
    sub_4EE7B0((__int64)(v2 + 203), a2);
  *(_QWORD *)a1 = a2;
  sub_5AD260(v2, (__int64)a2);
  v3 = *(unsigned int **)a1;
  *(_DWORD *)(a1 + 8) = 0;
  return v3 && *((char *)v3 + 9) < 0 && (int)v3[5] > 0;
}

