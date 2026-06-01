/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69580
// Address: 0x00069580

//----- (00069580) --------------------------------------------------------
int __fastcall sub_69580(void *ptr, size_t a2)
{
  FILE *v2; // r3

  v2 = (FILE *)dword_D4B6C;
  if ( !dword_D4B6C )
    v2 = stdout;
  return sub_777F4(v2, ptr, a2);
}
// D4B6C: using guessed type int dword_D4B6C;
