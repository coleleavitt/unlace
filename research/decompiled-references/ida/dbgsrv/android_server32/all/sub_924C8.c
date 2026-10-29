/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_924C8
// Address: 0x000924C8

//----- (000924C8) --------------------------------------------------------
int __fastcall sub_924C8(__int64 *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  __int64 v6; // kr00_8
  __int64 v8; // [sp+4h] [bp-24h] BYREF

  v6 = *a1;
  v8 = *a1;
  if ( !sub_93370((unsigned __int8 **)&v8, a2, a3) )
    return 0;
  *(_DWORD *)a1 = a3 - a2 + v6;
  return 1;
}
