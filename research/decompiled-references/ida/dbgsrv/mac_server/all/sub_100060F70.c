/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060F70
// Address: 0x0000000100060F70

//----- (0000000100060F70) ----------------------------------------------------
void __fastcall sub_100060F70(unsigned int a1, __int64 a2, char *a3, __int64 a4, __int64 a5, int a6)
{
  if ( a2 && *(_BYTE *)(a2 + 68) != 1 )
    sub_10006AE70(a1, a2);
  else
    sub_10006D900(a1, a3, a4, a4, a5, a6);
}
