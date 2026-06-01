bool __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_5(__int64 a1)
{
  int *v2; // rax
  size_t v3; // rbx
  const void *v4; // r12
  void *v5; // rax
  __int64 v6; // rax
  unsigned __int64 i; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 256) )
    return 1;
  for ( i = 0; i < sub_59BDEE(a1 + 112); ++i )
  {
    v2 = (int *)sub_59F630(a1 + 112, i);
    if ( (unsigned __int8)sub_59E957(*v2) != 1 )
    {
      if ( i < sub_59BDEE(a1 + 112) - 1 )
      {
        v3 = 4 * (sub_59BDEE(a1 + 112) - i) - 4;
        v4 = (const void *)sub_59F630(a1 + 112, i + 1);
        v5 = (void *)sub_59F630(a1 + 112, i);
        memmove(v5, v4, v3);
      }
      v6 = sub_59BDEE(a1 + 112);
      sub_59F652(a1 + 112, v6 - 1);
      --i;
    }
  }
  *(_BYTE *)(a1 + 256) = 1;
  return sub_59BDEE(a1 + 112) != 0;
}
