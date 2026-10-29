/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59A90
// Address: 0x00059A90

//----- (00059A90) --------------------------------------------------------
unsigned int __fastcall sub_59A90(int a1, const char **a2, unsigned int *a3, unsigned int *a4, unsigned __int8 **a5)
{
  unsigned __int8 *v9; // r0
  unsigned __int8 *v10; // r5
  unsigned __int8 *v11; // r2
  unsigned int result; // r0

  v9 = a5[1];
  v10 = *a5;
  if ( v9 <= *a5 )
  {
LABEL_6:
    v10 = nullptr;
    goto LABEL_7;
  }
  v11 = v10 + 1;
  if ( *v10 )
  {
    while ( v9 != v11 )
    {
      if ( !*v11++ )
        goto LABEL_9;
    }
    goto LABEL_6;
  }
LABEL_9:
  *a5 = v11;
LABEL_7:
  *a2 = (const char *)v10;
  *a3 = sub_7617C(a5, (unsigned int)a5[1]);
  result = sub_7617C(a5, (unsigned int)a5[1]);
  *a4 = result;
  if ( *(_BYTE *)(a1 + 96) )
    return sub_1700C((int)"file_path = %s; arch = %d; is_be = %d.\n", *a2, *a3, result);
  return result;
}
