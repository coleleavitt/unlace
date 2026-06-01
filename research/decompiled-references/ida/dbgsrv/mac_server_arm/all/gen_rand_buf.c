/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gen_rand_buf
// Address: 0x000000010006FCF8

//----- (000000010006FCF8) ----------------------------------------------------
bool __fastcall gen_rand_buf(void *a1, size_t a2)
{
  int v4; // w0
  int v5; // w21
  _BOOL8 v6; // x19

  v4 = open("/dev/urandom", 0);
  if ( v4 == -1 )
    return 0;
  v5 = v4;
  v6 = read(v4, a1, a2) == a2;
  close(v5);
  return v6;
}
