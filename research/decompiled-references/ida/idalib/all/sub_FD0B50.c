__int64 __fastcall sub_FD0B50(__int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = a1[22];
  if ( a1[21] == v2 )
    return 0;
  v3 = *(_QWORD *)(v2 - 8);
  if ( v3 != a1[19] )
  {
    sub_FCFEB0((__int64)(a1 + 12), a1[8], a2, v3);
    v2 = a1[22];
  }
  a1[22] = v2 - 8;
  return 1;
}
