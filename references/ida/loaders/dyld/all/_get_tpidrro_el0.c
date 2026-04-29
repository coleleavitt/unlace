unsigned __int64 get_tpidrro_el0()
{
  return _ReadStatusReg(TPIDRRO_EL0);
}
