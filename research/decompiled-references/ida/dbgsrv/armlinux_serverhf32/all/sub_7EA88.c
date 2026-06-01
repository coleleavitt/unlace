/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EA88
// Address: 0x0007EA88

//----- (0007EA88) --------------------------------------------------------
int sub_7EA88(const char *a1, int a2, char *a3, ...)
{
  char *v5; // r0
  va_list varg_r3; // [sp+24h] [bp+1Ch] BYREF

  va_start(varg_r3, a3);
  v5 = (char *)&a1[strlen(a1)];
  if ( a2 - (int)v5 > 0 )
    return sub_7E7C4(v5, a2 - (_DWORD)v5, a3, (int)varg_r3);
  else
    return 0;
}
