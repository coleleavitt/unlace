/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81CA8
// Address: 0x00081CA8

//----- (00081CA8) --------------------------------------------------------
int __fastcall sub_81CA8(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81C2C(a1, (unsigned __int8 *)s, a3, v6);
}
