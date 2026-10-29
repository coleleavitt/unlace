/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81F74
// Address: 0x00081F74

//----- (00081F74) --------------------------------------------------------
int __fastcall sub_81F74(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81F1C(a1, s, a3, v6);
}
