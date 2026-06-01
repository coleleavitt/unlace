/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4925A0
// Address: 0x00000000004925A0

//----- (00000000004925A0) ----------------------------------------------------
bool __fastcall sub_4925A0(void *a1, size_t a2)
{
  int v4; // w0
  int v5; // w19
  _BOOL4 v6; // w20

  v4 = open("/dev/urandom", 0);
  if ( v4 == -1 )
    return 0;
  v5 = v4;
  v6 = read(v4, a1, a2) == a2;
  close(v5);
  return v6;
}
