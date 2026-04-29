char __fastcall sub_1154D0(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  __int64 *v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v1 = *a1;
  if ( *a1 == 9 )
  {
    v3 = *((__int64 **)a1 + 1);
    v4 = *v3;
    v5 = *((int *)v3 + 4);
    if ( *(_QWORD *)(v4 + 440) < v5 )
      sub_1152C0(a1);
    return sub_1BC810(*(_QWORD *)(v4 + 432) + 104 * v5);
  }
  else if ( v1 <= 9u )
  {
    return (unsigned __int8)(v1 - 5) <= 1u;
  }
  else if ( v1 == 15 )
  {
    return sub_1BC810(*((_QWORD *)a1 + 1));
  }
  else
  {
    return 0;
  }
}
