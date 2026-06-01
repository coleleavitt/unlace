__int64 sub_591E1C()
{
  struct sigaction s; // [rsp+0h] [rbp-B0h] BYREF
  int k; // [rsp+A4h] [rbp-Ch]
  int j; // [rsp+A8h] [rbp-8h]
  int i; // [rsp+ACh] [rbp-4h]

  if ( byte_8D2990 )
    return 0;
  for ( i = 0; i <= 5; ++i )
  {
    if ( sigaction(dword_7595F0[i], nullptr, (struct sigaction *)&unk_8D2600 + i) == -1 )
      return 0;
  }
  memset(&s, 0, sizeof(s));
  sigemptyset(&s.sa_mask);
  for ( j = 0; j <= 5; ++j )
    sigaddset(&s.sa_mask, dword_7595F0[j]);
  s.sa_handler = (__sighandler_t)sub_592028;
  s.sa_flags = 134217732;
  for ( k = 0; k <= 5; ++k )
    sigaction(dword_7595F0[k], &s, nullptr);
  byte_8D2990 = 1;
  return 1;
}
