void __fastcall sub_5FFB0(__int64 a1, const char *a2)
{
  void (__fastcall *hexdsp)(__int64, const char *, __int64); // rax

  if ( *(_BYTE *)(a1 + 136) )
  {
    hexdsp = (void (__fastcall *)(__int64, const char *, __int64))get_hexdsp(a1, a2);
    hexdsp(403, a2, 1);
  }
}
