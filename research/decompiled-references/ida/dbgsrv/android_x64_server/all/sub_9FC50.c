/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FC50
// Address: 0x000000000009FC50

//----- (000000000009FC50) ----------------------------------------------------
__int64 __fastcall sub_9FC50(unsigned int a1, __int64 a2, char *a3, void *a4, __int64 a5, int a6)
{
  if ( a2 && !*(_BYTE *)(a2 + 68) )
    return sub_AA1A0(a1, a2);
  else
    return sub_AD580(a1, a3, a4, (__int64)a4, a5, a6);
}
