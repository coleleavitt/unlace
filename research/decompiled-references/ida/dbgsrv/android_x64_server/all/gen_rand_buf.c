/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gen_rand_buf
// Address: 0x00000000000C3B90

//----- (00000000000C3B90) ----------------------------------------------------
__int64 __fastcall gen_rand_buf(void *buf, size_t nbytes)
{
  unsigned int v2; // ebp
  int v3; // eax
  int v4; // ebx

  v2 = 0;
  v3 = __open_2("/dev/urandom", 0);
  if ( v3 != -1 )
  {
    v4 = v3;
    LOBYTE(v2) = read(v3, buf, nbytes) == nbytes;
    close(v4);
  }
  return v2;
}
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
