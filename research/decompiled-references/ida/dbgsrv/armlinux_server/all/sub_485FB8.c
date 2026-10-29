/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485FB8
// Address: 0x0000000000485FB8

//----- (0000000000485FB8) ----------------------------------------------------
__int64 __fastcall sub_485FB8(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v4; // x1
  int v5; // w0
  __int64 result; // x0
  unsigned __int8 *v7; // [xsp+30h] [xbp-10h] BYREF

  v4 = *a1;
  v7 = *a1;
  if ( a2 )
  {
    do
    {
      v5 = sub_485C28(&v7);
      if ( !v5 )
      {
        v4 = v7;
        result = a2;
        goto LABEL_8;
      }
      if ( v5 == -1 )
        ++v7;
      --a2;
    }
    while ( a2 );
    result = 0;
    v4 = v7;
  }
  else
  {
    result = 0;
  }
LABEL_8:
  *a1 = v4;
  return result;
}
