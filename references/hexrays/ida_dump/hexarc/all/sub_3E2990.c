__int64 __fastcall sub_3E2990(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // eax
  __int64 *v5; // rcx

  if ( a2 != 15 )
    return 0;
  v4 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v5 = *((__int64 **)a3 + 1);
    *((_QWORD *)a3 + 1) = v5 + 1;
  }
  else
  {
    v5 = (__int64 *)(*((_QWORD *)a3 + 2) + v4);
    *a3 = v4 + 8;
  }
  sub_308480(*v5);
  return 0;
}
