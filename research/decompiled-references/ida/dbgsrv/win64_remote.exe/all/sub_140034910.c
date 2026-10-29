/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034910
// Address: 0x0000000140034910

//----- (0000000140034910) ----------------------------------------------------
void *__fastcall sub_140034910(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  char v6; // dl

  if ( a3 < 0x10u )
    return sub_1400347C0(a1, (unsigned __int8)a3 + a2);
  v6 = a2 >> 3;
  if ( (unsigned __int8)a3 == a3 )
  {
    sub_1400347C0(a1, v6 + 0x80);
    return (void *)sub_1400344E0(a1, a3);
  }
  else
  {
    sub_1400347C0(a1, v6 - 127);
    return (void *)sub_1400343E0(a1, a3);
  }
}
