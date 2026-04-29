__int64 __fastcall cerror_nocancel(int a1)
{
  int *v1; // x8

  errno = a1;
  v1 = *(int **)(_ReadStatusReg(TPIDRRO_EL0) + 8);
  if ( v1 )
    *v1 = a1;
  return -1;
}
