__int64 jbclient_mach_get_launchd_port()
{
  task_inspect_t v0; // w0
  mach_port_t special_port; // [xsp+Ch] [xbp-4h] BYREF

  special_port = 0;
  v0 = task_self_trap_0();
  task_get_special_port(v0, 4, &special_port);
  return special_port;
}
