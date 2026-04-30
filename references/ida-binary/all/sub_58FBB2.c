__int64 __fastcall sub_58FBB2(_DWORD *a1, _DWORD *a2)
{
  int fds[2]; // [rsp+18h] [rbp-8h] BYREF

  if ( socketpair(1, 5, 0, fds) )
    return 0;
  if ( setsockopt(fds[1], 1, 16, &unk_759390, 4u) )
    return 0;
  if ( fcntl(fds[1], 4, 2048) )
    return 0;
  if ( fcntl(fds[1], 2, 1) )
    return 0;
  *a2 = fds[0];
  *a1 = fds[1];
  return 1;
}
