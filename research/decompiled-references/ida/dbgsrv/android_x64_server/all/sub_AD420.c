/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD420
// Address: 0x00000000000AD420

//----- (00000000000AD420) ----------------------------------------------------
__int64 __fastcall sub_AD420(char *a1, __gnuc_va_list arg)
{
  FILE *p_pad1; // rbx
  unsigned int v3; // ebp

  p_pad1 = (FILE *)&_sF.__pad1;
  if ( stream )
    p_pad1 = stream;
  v3 = qvfprintf(p_pad1, a1, arg);
  fflush(p_pad1);
  return v3;
}
// AD420: using guessed type __int64 __fastcall sub_AD420(char *a1, __gnuc_va_list arg);
// 1597E0: using guessed type FILE _sF;
