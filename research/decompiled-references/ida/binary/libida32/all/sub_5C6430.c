__int64 __fastcall sub_5C6430(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = a1[15];
  if ( !v2 )
  {
    v2 = a1[16];
    if ( !v2 )
      v2 = a1[13];
  }
  if ( *(_QWORD *)(v2 + 24) )
    return set_qerrno(1726, a2);
  v4 = qalloc_or_throw(24, a2);
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v2 + 24) = v4;
  return 0;
}

