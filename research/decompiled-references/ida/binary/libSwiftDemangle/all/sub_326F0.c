void __fastcall __noreturn sub_326F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  char *s[3]; // [rsp+0h] [rbp-18h] BYREF

  s[1] = (char *)__readfsqword(0x28u);
  if ( (int)sub_32620(s, a2, a3) >= 0 )
  {
    fputs(s[0], stderr);
    fflush(stderr);
    abort();
  }
  fwrite("unable to format fatal error message", 1u, 0x24u, stderr);
  fflush(stderr);
  abort();
}

