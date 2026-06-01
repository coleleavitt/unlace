mach_port_t mig_get_reply_port(void)
{
  unsigned __int64 StatusReg; // x19
  mach_port_t result; // w0
  mach_port_options_t v2; // [xsp+10h] [xbp-30h] BYREF
  mach_port_name_t name; // [xsp+2Ch] [xbp-14h] BYREF

  StatusReg = _ReadStatusReg(TPIDRRO_EL0);
  result = *(_DWORD *)(StatusReg + 16);
  name = result;
  if ( !result )
  {
    *(_OWORD *)&v2.flags = xmmword_7CFA8;
    v2.reserved[1] = 0;
    result = mach_port_construct(mach_task_self_, &v2, 0, &name);
    if ( result )
    {
      qword_9C1C0 = (__int64)"mach_port_construct for mig_get_reply_port failed";
      qword_9C1F0 = (int)result;
      __break(1u);
    }
    else
    {
      result = name;
      *(_QWORD *)(StatusReg + 16) = name;
    }
  }
  return result;
}
