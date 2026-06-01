/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AB48
// Address: 0x000000000042AB48

//----- (000000000042AB48) ----------------------------------------------------
__int64 __fastcall sub_42AB48(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x3
  unsigned __int64 v5; // x2
  __int64 result; // x0

  if ( !*(_BYTE *)(a1 + 168) )
    sub_4068C0();
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a1 + 40) )
    return 0;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned __int64)a3 << 6;
  if ( !(v4 + v5) || *(__int64 *)(a1 + 176) <= 0 )
    return 0;
  result = 0;
  if ( *(_QWORD *)(a1 + 192) )
    return sub_42AA98(*(_QWORD *)(a1 + 160), a2, (__int64 *)(a1 + 176), *(_DWORD *)(v4 + v5));
  return result;
}
