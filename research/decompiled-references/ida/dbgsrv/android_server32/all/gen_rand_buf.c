/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gen_rand_buf
// Address: 0x0007F0A8

//----- (0007F0A8) --------------------------------------------------------
bool __fastcall gen_rand_buf(void *a1, size_t a2)
{
  int v4; // r6
  int v5; // r7
  ssize_t v6; // r5

  v4 = 0;
  v5 = _open_2("/dev/urandom", 0);
  if ( v5 != -1 )
  {
    v6 = read(v5, a1, a2);
    close(v5);
    return v6 == a2;
  }
  return v4;
}
// 192E0: using guessed type int __fastcall _open_2(_DWORD, _DWORD);
