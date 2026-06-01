unsigned __int64 sub_47B7A0()
{
  struct sigaction v1; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v2; // [rsp+98h] [rbp-30h]

  v2 = __readfsqword(0x28u);
  if ( byte_8C2ED0 )
  {
    memset(&act, 0, sizeof(act));
    memset(&stru_8D1600, 0, sizeof(stru_8D1600));
    memset(&stru_8D1560, 0, sizeof(stru_8D1560));
    memset(&v1.sa_mask, 0, 0x90u);
    v1.sa_handler = (__sighandler_t)sub_478C20;
    sigemptyset(&v1.sa_mask);
    sigaddset(&v1.sa_mask, 11);
    sigaddset(&v1.sa_mask, 4);
    sigaddset(&v1.sa_mask, 7);
    v1.sa_flags = 134217732;
    if ( !sigaction(11, &v1, &act) && !sigaction(7, &v1, &stru_8D1600) && !sigaction(4, &v1, &stru_8D1560) )
      byte_8D1554 = 1;
  }
  return v2 - __readfsqword(0x28u);
}
