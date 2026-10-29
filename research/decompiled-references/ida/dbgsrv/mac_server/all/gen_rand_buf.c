/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gen_rand_buf
// Address: 0x000000010007D4F0

//----- (000000010007D4F0) ----------------------------------------------------
__int64 __fastcall gen_rand_buf(void *a1, size_t a2)
{
  unsigned int v2; // r14d
  int v3; // eax
  int v4; // r12d

  v2 = 0;
  v3 = open("/dev/urandom", 0);
  if ( v3 != -1 )
  {
    v4 = v3;
    LOBYTE(v2) = read(v3, a1, a2) == a2;
    close(v4);
  }
  return v2;
}
