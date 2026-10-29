/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E578
// Address: 0x000000010000E578

//----- (000000010000E578) ----------------------------------------------------
__int64 __fastcall sub_10000E578(__int64 result, __int64 a2)
{
  unsigned int v2; // w9
  int v4; // w8
  unsigned int v5; // w10
  unsigned int v6; // w10
  __int64 v7; // x8
  unsigned int v8; // w11
  unsigned int v9; // w9
  __int64 v10; // x19
  __int64 v12; // x21

  if ( (*(_DWORD *)result & 0x80000000) == 0 )
    goto LABEL_6;
  v2 = *(_DWORD *)(result + 4);
  if ( *(_DWORD *)(result + 24) != 2 || v2 - 5277 < 0xFFFFEBAF )
    goto LABEL_6;
  if ( *(unsigned __int16 *)(result + 38) << 16 != 1114112 || *(unsigned __int16 *)(result + 50) << 16 != 1114112 )
  {
    v4 = -300;
    goto LABEL_7;
  }
  v5 = *(_DWORD *)(result + 64);
  if ( v5 > 2 )
    goto LABEL_6;
  v4 = -304;
  if ( v5 > (v2 - 76) >> 3 )
    goto LABEL_7;
  v6 = 8 * v5;
  if ( v2 < v6 + 76 )
    goto LABEL_7;
  v7 = result + v6;
  v8 = *(_DWORD *)(v7 + 72);
  if ( v8 > 0x510 || (v9 = v2 - v6, v8 > (v9 - 76) >> 2) || v9 != 4 * v8 + 76 )
  {
LABEL_6:
    v4 = -304;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v4;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v10 = v7 - 16;
  *(_DWORD *)(a2 + 40) = 1296;
  v12 = a2 + 40;
  result = sub_100001B34();
  *(_DWORD *)(v12 - 8) = result;
  *(NDR_record_t *)(v12 - 16) = NDR_record;
  if ( !(_DWORD)result )
  {
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(v10 + 84);
    *(_DWORD *)(a2 + 4) = 4 * *(_DWORD *)(a2 + 40) + 44;
  }
  return result;
}
