mach_port_t mig_get_reply_port_0(void)
{
  mach_port_t result; // w0
  mach_port_name_t v1; // w0
  mach_port_options_t v2; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( get_tpidrro_el0() )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld_mig_get_reply_port();
  }
  else
  {
    result = gMigReplyPort;
    if ( !gMigReplyPort )
    {
      v2 = *(mach_port_options_t *)gMigOptions;
      v1 = task_self_trap_0();
      mach_port_construct_0(v1, &v2, 0, (mach_port_name_t *)&gMigReplyPort);
      return gMigReplyPort;
    }
  }
  return result;
}
