/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000593DC
// Address: 0x00000001000593DC

//----- (00000001000593DC) ----------------------------------------------------
__int64 __fastcall sub_1000593DC(__int64 a1, __int64 a2, char *a3, va_list a4)
{
  if ( a2 && *(_BYTE *)(a2 + 68) != 1 )
    return sub_100062A34(a1, a2);
  else
    return sub_1000655B4(a1, a3, a4);
}
