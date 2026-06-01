/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E4D0
// Address: 0x000000000008E4D0

//----- (000000000008E4D0) ----------------------------------------------------
__int64 __fastcall sub_8E4D0(__int64 a1, const char **a2, _DWORD *a3, _DWORD *a4, unsigned __int64 *a5)
{
  unsigned __int64 v5; // x8
  unsigned __int8 *v11; // x10
  __int64 result; // x0

  v5 = *a5;
  v11 = (unsigned __int8 *)*a5;
  while ( (unsigned __int64)v11 < a5[1] )
  {
    if ( !*v11++ )
    {
      *a5 = (unsigned __int64)v11;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_6:
  *a2 = (const char *)v5;
  *a3 = unpack_dd(a5, a5[1]);
  result = unpack_dd(a5, a5[1]);
  *a4 = result;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_39FA0((__int64)"file_path = %s; arch = %d; is_be = %d.\n", *a2, *a3, result);
  return result;
}
