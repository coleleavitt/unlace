__int64 __fastcall stage_next(_QWORD *a1)
{
  unsigned __int64 v1; // x9
  __int64 v2; // x8

  v1 = a1[1];
  if ( v1 >= *(_QWORD *)(*a1 + 64LL) )
    return 0;
  v2 = *(_QWORD *)(*a1 + 8 * v1);
  a1[1] = v1 + 1;
  return v2;
}
