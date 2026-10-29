bool __fastcall GUIDGenerator::CreateGUIDFromDevUrandom(void *a1)
{
  ssize_t v2; // [rsp+18h] [rbp-18h]
  int fd; // [rsp+24h] [rbp-Ch]

  fd = open("/dev/urandom", 0x80000);
  if ( fd == -1 )
    return 0;
  do
    v2 = read(fd, a1, 0x10u);
  while ( v2 == -1 && *__errno_location() == 4 );
  close(fd);
  return v2 == 16;
}

