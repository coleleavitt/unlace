__int64 __fastcall sub_1CAF800(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 i; // r12

  v3 = 24LL * *(unsigned int *)(a1 + 8);
  if ( v3 != 24 * a2[1] )
    return 0;
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)a1 + v3;
  if ( *(_QWORD *)a1 == v6 )
    return 1;
  for ( i = *a2; sub_AB67C0(*(_QWORD **)(a3 + 248), v5, i); i += 24 )
  {
    v5 += 24;
    if ( v6 == v5 )
      return 1;
  }
  return 0;
}
