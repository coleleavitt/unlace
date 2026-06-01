void __fastcall detach_process(void *a1)
{
  operator delete(a1, 0x10u);
}
