/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gen_rand_buf
// Address: 0x00000000000BEDB4

//----- (00000000000BEDB4) ----------------------------------------------------
bool __fastcall gen_rand_buf(void *a1, size_t a2)
{
  int v4; // w0
  int v5; // w20
  _BOOL4 v6; // w19

  v4 = __open_2("/dev/urandom", 0);
  if ( v4 == -1 )
  {
    return 0;
  }
  else
  {
    v5 = v4;
    v6 = read(v4, a1, a2) == a2;
    close(v5);
  }
  return v6;
}
// 36DE0: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
