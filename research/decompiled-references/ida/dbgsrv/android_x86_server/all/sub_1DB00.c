/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DB00
// Address: 0x0001DB00

//----- (0001DB00) --------------------------------------------------------
bool sub_1DB00()
{
  int v0; // esi

  v0 = sub_19CD0();
  if ( v0 )
  {
    if ( (unsigned int)(v0 - 1) >= 0x14 )
      qsnprintf(dword_13BCE0, 64, "tdb error %d", v0);
    sub_1C900();
  }
  return v0 == 0;
}
// 13BCE0: using guessed type int dword_13BCE0[10];
