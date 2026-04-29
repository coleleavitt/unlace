__int64 __fastcall sub_3873D0(__int64 a1, int *a2, double a3)
{
  __int64 v4; // r13
  int *v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rbx

  if ( *a2 != 1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(int **)(v4 + 432);
  v6 = 0x4EC4EC4EC4EC4EC5LL * (((char *)a2 - (char *)v5) >> 3);
  if ( v6 >= *(_QWORD *)(v4 + 440) )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC51Bu, (__int64)a2, a3);
    BUG();
  }
  v7 = 0;
  if ( a2 == v5 )
    return 1;
  while ( (unsigned int)sub_1BF090(&v5[26 * v7], a2) )
  {
    if ( ++v7 >= v6 )
      return 1;
    v5 = *(int **)(v4 + 432);
  }
  return 0;
}
