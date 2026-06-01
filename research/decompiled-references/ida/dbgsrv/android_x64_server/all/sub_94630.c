/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94630
// Address: 0x0000000000094630

//----- (0000000000094630) ----------------------------------------------------
__int64 __fastcall sub_94630(__int64 a1, unsigned __int64 *a2, unsigned int *a3, _DWORD *a4, unsigned __int64 *a5)
{
  unsigned __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 result; // rax

  v8 = *a5;
  v9 = (_BYTE *)*a5;
  while ( (unsigned __int64)v9 < a5[1] )
  {
    if ( *v9++ == 0 )
    {
      *a5 = (unsigned __int64)v9;
      goto LABEL_6;
    }
  }
  v8 = 0;
LABEL_6:
  *a2 = v8;
  *a3 = unpack_dd(a5, a5[1]);
  result = unpack_dd(a5, a5[1]);
  *a4 = result;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_390A0((int)"file_path = %s; arch = %d; is_be = %d.\n", *a2, *a3, (unsigned int)result);
  return result;
}
