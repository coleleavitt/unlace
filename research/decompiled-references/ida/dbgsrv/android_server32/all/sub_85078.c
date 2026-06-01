/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85078
// Address: 0x00085078

//----- (00085078) --------------------------------------------------------
int __fastcall sub_85078(int result)
{
  unsigned int v1; // r1
  int v2; // r4
  int v3; // r5
  unsigned int i; // r6

  v1 = *(_DWORD *)(result + 4);
  if ( v1 )
  {
    v2 = result;
    v3 = 0;
    for ( i = 0; i < v1; ++i )
    {
      result = *(_DWORD *)(*(_DWORD *)(v2 + 12) + v3);
      if ( result != -1 )
      {
        close(result);
        result = -1;
        *(_DWORD *)(*(_DWORD *)(v2 + 12) + v3) = -1;
        v1 = *(_DWORD *)(v2 + 4);
      }
      v3 += 4;
    }
  }
  return result;
}
