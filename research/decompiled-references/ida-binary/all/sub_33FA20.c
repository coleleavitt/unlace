unsigned __int64 __fastcall sub_33FA20(__int64 a1, unsigned __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rax

  v3 = *(__int64 **)(a1 + 112);
  v4 = &v3[4 * *(_QWORD *)(a1 + 120)];
  if ( v3 == v4 )
    return -1;
  while ( a2 < *v3 || a2 >= v3[1] )
  {
    v3 += 4;
    if ( v4 == v3 )
      return -1;
  }
  if ( !v3 )
    return -1;
  else
    return sub_33F1E0(v3, a2, a1);
}
