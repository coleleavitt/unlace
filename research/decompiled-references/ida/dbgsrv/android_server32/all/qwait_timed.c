/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x00081D4C

//----- (00081D4C) --------------------------------------------------------
__pid_t __fastcall qwait_timed(__time_t *a1, int a2, int a3, int a4)
{
  int v8; // r0

  v8 = sub_80DC4();
  return sub_807A4(v8, a1, a2, a3, a4);
}
