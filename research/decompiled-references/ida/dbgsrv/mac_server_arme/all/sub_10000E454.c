/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E454
// Address: 0x000000010000E454

//----- (000000010000E454) ----------------------------------------------------
_DWORD *__fastcall sub_10000E454(_DWORD *result, __int64 a2)
{
  unsigned int v2; // w8
  unsigned int v3; // w9
  unsigned int v4; // w10
  bool v5; // cf
  _DWORD *v6; // x9
  unsigned int v7; // w11
  unsigned int v8; // w8
  bool v9; // zf
  _DWORD *v10; // x19
  __int64 v12; // x21

  if ( (*result & 0x80000000) == 0
    && (v2 = result[1], v2 - 5249 >= 0xFFFFEBAF)
    && (v3 = result[9], v3 <= 2)
    && ((v4 = 2 * v3, v3 <= (v2 - 48) >> 3) ? (v5 = v2 >= 8 * v3 + 48) : (v5 = 0),
        v5
     && (v6 = &result[v4], v7 = v6[11], v7 <= 0x510)
     && ((v8 = v2 - v4 * 4, v7 <= (v8 - 48) >> 2) ? (v9 = v8 == 4 * v7 + 48) : (v9 = 0), v9)) )
  {
    v10 = v6 - 4;
    *(_DWORD *)(a2 + 40) = 1296;
    v12 = a2 + 40;
    result = (_DWORD *)sub_100001B2C();
    *(_DWORD *)(v12 - 8) = (_DWORD)result;
    *(NDR_record_t *)(v12 - 16) = NDR_record;
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a2 + 36) = v10[14];
      *(_DWORD *)(a2 + 4) = 4 * *(_DWORD *)(a2 + 40) + 44;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = -304;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
  }
  return result;
}
