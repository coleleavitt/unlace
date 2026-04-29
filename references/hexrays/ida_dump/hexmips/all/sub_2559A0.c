int __fastcall sub_2559A0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  bool v5; // zf
  __int64 v6; // r13
  int result; // eax

  v2 = *a1;
  v3 = *a2;
  v4 = *a1 + 72 * a1[1];
  v5 = v4 == *a1;
  v6 = *a2 + 72 * a2[1];
  while ( !v5 && v6 != v3 )
  {
    result = sub_254FD0(v2, v3, 0);
    if ( result )
      return result;
    v2 += 72;
    v3 += 72;
    v5 = v2 == v4;
  }
  if ( v4 == v2 && v6 != v3 )
    return -1;
  else
    return !v5 && v6 == v3;
}
