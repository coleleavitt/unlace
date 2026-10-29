/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EFD34
// Address: 0x00000000000EFD34

//----- (00000000000EFD34) ----------------------------------------------------
__int64 __fastcall sub_EFD34(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // w19
  char *v7; // x21
  __int64 result; // x0
  unsigned __int64 v9; // [xsp+40h] [xbp+40h] BYREF
  unsigned __int64 v10; // [xsp+48h] [xbp+48h] BYREF

  v5 = (unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3;
  v7 = (char *)sub_EFB84(v5, a1);
  sub_EFC44(v5, v7, (char *)(a2 + 8), &v9);
  sub_EFC44((unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3, v7, (char *)(a3 + 8), &v10);
  if ( v9 >= v10 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v9 > v10 )
    return 1;
  else
    return (unsigned int)result;
}
