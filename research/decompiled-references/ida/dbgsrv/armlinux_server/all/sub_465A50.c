/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465A50
// Address: 0x0000000000465A50

//----- (0000000000465A50) ----------------------------------------------------
__int64 __fastcall sub_465A50(__int64 a1, unsigned __int8 **a2, unsigned int *a3, _DWORD *a4, unsigned __int8 **a5)
{
  unsigned __int8 *v10; // x4
  unsigned __int8 *v11; // x2
  unsigned __int8 *v12; // x0
  __int64 result; // x0

  v10 = *a5;
  v11 = a5[1];
  if ( v11 <= v10 )
  {
LABEL_6:
    v10 = nullptr;
    goto LABEL_7;
  }
  v12 = v10 + 1;
  if ( *v10 )
  {
    while ( v11 != v12 )
    {
      if ( !*v12++ )
        goto LABEL_9;
    }
    goto LABEL_6;
  }
LABEL_9:
  *a5 = v12;
LABEL_7:
  *a2 = v10;
  *a3 = sub_48E5A8(a5, (unsigned __int64)a5[1]);
  result = sub_48E5A8(a5, (unsigned __int64)a5[1]);
  *a4 = result;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_40A690((int)"file_path = %s; arch = %d; is_be = %d.\n", *a2, *a3, (unsigned int)result);
  return result;
}
