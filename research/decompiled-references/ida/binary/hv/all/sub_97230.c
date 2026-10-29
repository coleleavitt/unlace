__int64 __fastcall sub_97230(void *buf, size_t nbytes)
{
  unsigned int v2; // r13d
  int v3; // eax
  int v4; // ebx

  v2 = 0;
  v3 = open("/dev/urandom", 0);
  if ( v3 != -1 )
  {
    v4 = v3;
    LOBYTE(v2) = read(v3, buf, nbytes) == nbytes;
    close(v4);
  }
  return v2;
}

