__int64 __fastcall sub_3E2F40(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rax

  v3 = a1[2];
  v4 = (_QWORD *)(v3 + 8 * a1[3]);
  if ( (_QWORD *)v3 == v4 )
    return 0;
  v5 = (_QWORD *)a1[2];
  while ( a2 != *v5 )
  {
    if ( v4 == ++v5 )
      return 0;
  }
  if ( v4 == v5 )
    return 0;
  v6 = ((__int64)v5 - v3) >> 3;
  if ( (_DWORD)v6 == -1 )
    return 0;
  sub_3E2CD0(a1, (char *)(unsigned int)v6, 1u, v3, a3);
  return 1;
}
