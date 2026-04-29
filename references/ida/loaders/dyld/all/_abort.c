void __noreturn abort(void)
{
  const char *v0; // x1

  dyld4::halt((dyld4 *)"dyld calling abort()\n", v0);
}
