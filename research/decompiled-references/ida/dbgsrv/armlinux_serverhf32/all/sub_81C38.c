/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81C38
// Address: 0x00081C38

//----- (00081C38) --------------------------------------------------------
unsigned int __fastcall sub_81C38(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81BE4(a1, s, a3, v6);
}
