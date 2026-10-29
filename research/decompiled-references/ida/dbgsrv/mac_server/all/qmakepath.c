/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakepath
// Address: 0x000000010007B9E0

//----- (000000010007B9E0) ----------------------------------------------------
char *qmakepath(char *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+B0h] [rbp-30h] BYREF

  va_start(va, a3);
  vqmakepath(a1, a2, a3, &va[0].gp_offset);
  return a1;
}
