int *__error(void)
{
  int *v0; // x8

  v0 = *(int **)(_ReadStatusReg(TPIDRRO_EL0) + 8);
  if ( v0 )
    return v0;
  else
    return &errno;
}
