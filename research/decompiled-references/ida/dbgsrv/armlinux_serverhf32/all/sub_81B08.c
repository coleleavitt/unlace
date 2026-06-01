/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81B08
// Address: 0x00081B08

//----- (00081B08) --------------------------------------------------------
int __fastcall sub_81B08(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81A8C(a1, (unsigned __int8 *)s, a3, v6);
}
