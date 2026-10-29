__int64 __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_6(__int64 a1)
{
  int *v2; // rax
  unsigned __int64 i; // [rsp+10h] [rbp-10h]
  unsigned __int8 v4; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 0;
  v4 = 1;
  for ( i = 0; i < sub_59BDEE(a1 + 112); ++i )
  {
    v2 = (int *)sub_59F630(a1 + 112, i);
    v4 &= sub_59EA70(*v2);
  }
  *(_BYTE *)(a1 + 256) = 0;
  return v4;
}
