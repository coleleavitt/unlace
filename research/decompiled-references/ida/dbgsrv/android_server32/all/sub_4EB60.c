/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EB60
// Address: 0x0004EB60

//----- (0004EB60) --------------------------------------------------------
int __fastcall sub_4EB60(int a1)
{
  char **v2; // r0
  int v3; // r5
  int v4; // r5
  int v5; // r6

  v2 = *(char ***)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 )
    {
      sub_1B3BC(v2);
      if ( v3 != 1 )
      {
        v4 = v3 - 1;
        v5 = 28;
        do
        {
          sub_1B3BC((char **)(*(_DWORD *)a1 + v5));
          --v4;
          v5 += 28;
        }
        while ( v4 );
      }
      v2 = *(char ***)a1;
    }
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
