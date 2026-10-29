/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E380
// Address: 0x000000010000E380

//----- (000000010000E380) ----------------------------------------------------
__int64 __fastcall sub_10000E380(__int64 a1, __int64 a2)
{
  int v2; // w8
  __int64 result; // x0
  unsigned int v5; // w5
  __int64 v6; // x19

  if ( (*(_DWORD *)a1 & 0x80000000) == 0 )
    goto LABEL_6;
  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 24) != 2 || (unsigned int)(v2 - 85) < 0xFFFFFFEF )
    goto LABEL_6;
  if ( *(unsigned __int16 *)(a1 + 38) << 16 != 1114112 || *(unsigned __int16 *)(a1 + 50) << 16 != 1114112 )
  {
    result = 4294966996LL;
    goto LABEL_7;
  }
  v5 = *(_DWORD *)(a1 + 64);
  if ( v5 <= 2 && v5 <= (unsigned int)(v2 - 68) >> 3 && v2 == ((8 * v5) | 0x44) )
  {
    v6 = a2;
    result = sub_100001B3C(
               *(unsigned int *)(a1 + 12),
               *(_DWORD *)(a1 + 28),
               *(_DWORD *)(a1 + 40),
               *(_DWORD *)(a1 + 60),
               a1 + 68,
               v5);
    a2 = v6;
  }
  else
  {
LABEL_6:
    result = 4294966992LL;
  }
LABEL_7:
  *(_DWORD *)(a2 + 32) = result;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
