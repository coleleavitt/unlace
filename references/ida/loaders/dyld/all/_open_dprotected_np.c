int open_dprotected_np(const char *a1, int a2, int a3, int a4, ...)
{
  int *v4; // x8

  if ( (a4 & 4) == 0 )
    return __open_dprotected_np(a1, a2, a3, (unsigned __int8)a4);
  v4 = *(int **)(_ReadStatusReg(TPIDRRO_EL0) + 8);
  if ( !v4 )
    v4 = &errno;
  *v4 = 22;
  return -1;
}
