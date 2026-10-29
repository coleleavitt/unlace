/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5CC0
// Address: 0x00000000000A5CC0

//----- (00000000000A5CC0) ----------------------------------------------------
__int64 __fastcall sub_A5CC0(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x10
  unsigned int *v4; // x8

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v3 = 0;
    v4 = (unsigned int *)(*(_QWORD *)(a1 + 48) + 4LL);
    while ( *((unsigned __int8 *)v4 - 4) != a2 )
    {
      ++v3;
      v4 += 2;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v4 = (unsigned int *)(a1 + 64);
  }
  return *v4;
}
