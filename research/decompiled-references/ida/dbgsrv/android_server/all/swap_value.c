/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_value
// Address: 0x00000000000C5D4C

//----- (00000000000C5D4C) ----------------------------------------------------
__int64 *__fastcall swap_value(__int64 *result, __int64 *a2, int a3)
{
  _QWORD *v3; // x19
  __int64 v4; // x9

  v3 = result;
  switch ( a3 )
  {
    case 1:
      *(_BYTE *)result = *(_BYTE *)a2;
      break;
    case 2:
      *(_WORD *)result = bswap32(*(unsigned __int16 *)a2) >> 16;
      break;
    case 4:
      *(_DWORD *)result = bswap32(*(_DWORD *)a2);
      break;
    case 8:
      result = (__int64 *)swap64(*a2);
      *v3 = result;
      break;
    case 16:
      if ( result != a2 )
      {
        v4 = a2[1];
        *result = *a2;
        result[1] = v4;
      }
      result = (__int64 *)swap128(result);
      break;
    default:
      return result;
  }
  return result;
}
