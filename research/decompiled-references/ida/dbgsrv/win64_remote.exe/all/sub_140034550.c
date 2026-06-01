/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034550
// Address: 0x0000000140034550

//----- (0000000140034550) ----------------------------------------------------
void *__fastcall sub_140034550(__int64 a1, unsigned __int64 a2)
{
  if ( a2 <= 0xF )
    return sub_1400347C0(a1, (unsigned __int8)a2 - 32);
  if ( (char)a2 == a2 )
  {
    sub_1400347C0(a1, 160);
    return (void *)sub_1400344E0(a1, a2);
  }
  else
  {
    sub_1400347C0(a1, 211);
    return (void *)sub_140034490(a1, a2);
  }
}
