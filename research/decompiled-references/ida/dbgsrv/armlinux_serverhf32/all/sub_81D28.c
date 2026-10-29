/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81D28
// Address: 0x00081D28

//----- (00081D28) --------------------------------------------------------
unsigned int __fastcall sub_81D28(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81CDC(a1, s, a3, v6);
}
