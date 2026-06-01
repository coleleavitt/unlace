__int64 __fastcall sub_5E2130(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = a1[16];
  if ( !v1 )
  {
    v1 = a1[17];
    if ( !v1 )
      v1 = a1[14];
  }
  if ( *(_QWORD *)(v1 + 24) )
    return set_qerrno(1726);
  v3 = qalloc_or_throw(24);
  *(_QWORD *)v3 = 0;
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v1 + 24) = v3;
  return 0;
}
