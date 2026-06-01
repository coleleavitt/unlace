/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4563A0
// Address: 0x00000000004563A0

//----- (00000000004563A0) ----------------------------------------------------
__int64 __fastcall sub_4563A0(unsigned int a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  if ( a2 && !*(_BYTE *)(a2 + 68) )
    return sub_46F4C0(a1, a2);
  else
    return sub_4725C0(a1, a3, a4, a4, a5, a6);
}
