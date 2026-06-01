/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD470
// Address: 0x00000000000AD470

//----- (00000000000AD470) ----------------------------------------------------
__int64 sub_AD470(char *a1, ...)
{
  FILE *p_pad1; // rbx
  unsigned int v2; // ebp
  gcc_va_list arg; // [rsp+B0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+D0h] [rbp-18h]

  va_start(arg, a1);
  v5 = __readfsqword(0x28u);
  p_pad1 = (FILE *)&_sF.__pad1;
  if ( stream )
    p_pad1 = stream;
  v2 = qvfprintf(p_pad1, a1, arg);
  fflush(p_pad1);
  return v2;
}
// 1597E0: using guessed type FILE _sF;
