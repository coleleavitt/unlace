/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x0000000100074910

//----- (0000000100074910) ----------------------------------------------------
__int64 set_interr_throws()
{
  __int64 v0; // rax
  unsigned int v1; // edx
  char v2; // cl

  off_1000ACFB0();
  v1 = *(unsigned __int8 *)(v0 + 252);
  *(_BYTE *)(v0 + 252) = v2;
  return v1;
}
// 10007491F: variable 'v0' is possibly undefined
// 100074926: variable 'v2' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
