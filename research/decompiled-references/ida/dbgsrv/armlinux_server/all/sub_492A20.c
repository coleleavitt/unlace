/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492A20
// Address: 0x0000000000492A20

//----- (0000000000492A20) ----------------------------------------------------
size_t __fastcall sub_492A20(char *a1, size_t a2, const char *a3, time_t a4)
{
  char v7; // w0
  __int64 v8; // x1
  struct tm tp; // [xsp+30h] [xbp-40h] BYREF

  v7 = sub_4927E0(&tp, a4);
  v8 = 0;
  if ( v7 )
    return strftime(a1, a2, a3, &tp);
  return v8;
}
