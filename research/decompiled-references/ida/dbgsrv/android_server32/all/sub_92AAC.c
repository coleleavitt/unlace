/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92AAC
// Address: 0x00092AAC

//----- (00092AAC) --------------------------------------------------------
unsigned __int8 **__fastcall sub_92AAC(unsigned __int8 **result, unsigned __int8 **a2, int a3)
{
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // lr
  unsigned __int8 *v5; // r2
  unsigned __int8 *i; // r3

  v3 = *a2;
  if ( !a3 )
  {
    v4 = a2[1];
LABEL_6:
    v5 = *a2;
    goto LABEL_7;
  }
  v4 = a2[1];
  if ( v3 == v4 || *v3 != 110 )
    goto LABEL_6;
  v5 = v3 + 1;
  *a2 = v3 + 1;
LABEL_7:
  if ( v4 == v5 || (unsigned int)*v5 - 48 > 9 )
  {
    *result = nullptr;
    result[1] = nullptr;
  }
  else
  {
    for ( i = v5 + 1; v4 != v5 && (unsigned int)*(i - 1) - 48 <= 9; ++i )
    {
      *a2 = i;
      v5 = i;
    }
    *result = v3;
    result[1] = v5;
  }
  return result;
}
