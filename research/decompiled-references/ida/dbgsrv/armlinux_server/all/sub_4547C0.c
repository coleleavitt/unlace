/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4547C0
// Address: 0x00000000004547C0

//----- (00000000004547C0) ----------------------------------------------------
__int64 __fastcall sub_4547C0(__int64 a1, char **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8)
{
  char **v8; // x19
  char *v9; // x1
  char *v11; // t1
  char v13; // [xsp+0h] [xbp-20h]

  v8 = a2;
  v9 = *a2;
  if ( !v9 )
    return 1;
  while ( !(unsigned int)sub_454558(a1, v9, v8[1], 0, 0, nullptr, a7, a8, v13) )
  {
    v11 = v8[2];
    v8 += 2;
    v9 = v11;
    if ( !v11 )
      return 1;
  }
  return 0;
}
// 4547F8: variable 'a7' is possibly undefined
// 4547F8: variable 'a8' is possibly undefined
// 4547F8: variable 'v13' is possibly undefined
