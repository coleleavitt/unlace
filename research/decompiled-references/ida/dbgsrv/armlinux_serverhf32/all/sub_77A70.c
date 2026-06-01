/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77A70
// Address: 0x00077A70

//----- (00077A70) --------------------------------------------------------
int __fastcall sub_77A70(FILE *a1, char *a2, size_t a3, int a4)
{
  char *v5; // r3
  _BYTE *v6; // r2
  char v7; // t1
  int result; // r0
  char *v9; // r6
  _BYTE *v10; // r3
  char v11; // t1
  _BYTE ptr[32]; // [sp+4h] [bp-28h] BYREF

  if ( a3 > 0x20 )
    return -1;
  if ( a4 )
  {
    v5 = &a2[a3];
    v6 = ptr;
    if ( a3 )
    {
      do
      {
        v7 = *--v5;
        *v6++ = v7;
      }
      while ( a2 != v5 );
    }
  }
  else
  {
    v9 = &a2[a3];
    v10 = ptr;
    if ( a3 )
    {
      do
      {
        v11 = *a2++;
        *v10++ = v11;
      }
      while ( a2 != v9 );
    }
  }
  result = a3 - sub_7768C(a1, ptr, a3);
  if ( result )
    return -1;
  return result;
}
