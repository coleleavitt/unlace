/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C7FC
// Address: 0x0001C7FC

//----- (0001C7FC) --------------------------------------------------------
bool sub_1C7FC()
{
  int v0; // r0
  int v1; // r4
  int v2; // r0
  const char *v3; // r5

  v0 = sub_1A27E();
  v1 = v0;
  if ( v0 )
  {
    v2 = v0 - 1;
    if ( (unsigned int)(v1 - 1) >= 0x14 )
    {
      v3 = (const char *)dword_DE2F0;
      qsnprintf(dword_DE2F0, 64, "tdb error %d");
    }
    else
    {
      v3 = off_D63E0[v2];
    }
    sub_1BBA0((int)"%s: %s\n", "td_thr_event_enable", v3);
  }
  return v1 == 0;
}
// D63E0: using guessed type char *off_D63E0[24];
// DE2F0: using guessed type int dword_DE2F0[16];
