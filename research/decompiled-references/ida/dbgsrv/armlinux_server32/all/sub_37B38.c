/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37B38
// Address: 0x00037B38

//----- (00037B38) --------------------------------------------------------
int __fastcall sub_37B38(_DWORD *a1)
{
  const char *v2; // r0

  if ( a1[7] )
    v2 = (const char *)a1[6];
  else
    v2 = (const char *)&dword_8DB98;
  a1[26] = sub_3F50C(v2, 0);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
