/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F1A8
// Address: 0x0008F1A8

//----- (0008F1A8) --------------------------------------------------------
FILE *(__fastcall **__fastcall sub_8F1A8(
        FILE *(__fastcall **result)(int a1, char *filename, int a3)))(int a1, char *filename, int a3)
{
  *result = sub_8F200;
  result[1] = (FILE *(__fastcall *)(int, char *, int))sub_8F244;
  result[2] = (FILE *(__fastcall *)(int, char *, int))sub_8F256;
  result[3] = (FILE *(__fastcall *)(int, char *, int))sub_8F268;
  result[4] = (FILE *(__fastcall *)(int, char *, int))sub_8F272;
  result[5] = (FILE *(__fastcall *)(int, char *, int))sub_8F292;
  result[6] = (FILE *(__fastcall *)(int, char *, int))sub_8F29C;
  result[7] = nullptr;
  return result;
}
