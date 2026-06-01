/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450720
// Address: 0x0000000000450720

//----- (0000000000450720) ----------------------------------------------------
char *__fastcall sub_450720(char *a1, __int64 a2, char *a3, __int64 a4, unsigned __int8 a5)
{
  int v8; // w23
  char *v9; // x0
  char *v10; // x20
  int v11; // w0
  unsigned __int8 v13[4096]; // [xsp+48h] [xbp-1008h] BYREF

  v8 = a5;
  if ( a3 )
    sub_48F310((char *)v13, 0x1000u, a3);
  else
    sub_48F950((char *)v13, 0x1000u);
  v9 = sub_48F278(a1, a2, v13, a4, 0);
  v10 = v9;
  if ( v8 )
    v11 = (unsigned __int8)sub_4504C0(a1, a2);
  else
    v11 = (unsigned __int8)sub_490268(v9);
  if ( v11 )
    return v10;
  else
    return nullptr;
}
