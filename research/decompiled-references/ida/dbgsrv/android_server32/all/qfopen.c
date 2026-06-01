/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfopen
// Address: 0x0007C49C

//----- (0007C49C) --------------------------------------------------------
FILE *__fastcall qfopen(const char *a1, unsigned __int8 *a2)
{
  FILE *v3; // r4
  char v5[20]; // [sp+4h] [bp-18h] BYREF

  qstrncpy((unsigned int)v5, a2, 20);
  qstrncat(v5, "e", 20);
  v3 = sub_7C4F4(a1, v5, 8);
  if ( !v3 )
    set_qerrno(1);
  return v3;
}
