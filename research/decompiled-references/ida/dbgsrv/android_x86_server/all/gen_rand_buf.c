/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gen_rand_buf
// Address: 0x000B1870

//----- (000B1870) --------------------------------------------------------
ssize_t __cdecl gen_rand_buf(void *buf, size_t nbytes)
{
  int v2; // eax
  int v3; // esi
  ssize_t v4; // eax
  ssize_t v5; // edi

  v2 = __open_2("/dev/urandom", 0);
  if ( v2 == -1 )
    return 0;
  v3 = v2;
  v4 = read(v2, buf, nbytes);
  LOBYTE(v4) = v4 == nbytes;
  v5 = v4;
  close(v3);
  return v5;
}
// 17A70: using guessed type int __cdecl __open_2(_DWORD, _DWORD);
