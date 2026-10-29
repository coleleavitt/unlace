/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_debug_event
// Address: 0x00074470

//----- (00074470) --------------------------------------------------------
int __fastcall free_debug_event(_DWORD *a1)
{
  unsigned int v2; // r0
  void *v3; // r0
  void *v5; // r0

  v2 = a1[4] & 0xFFFFFFF;
  if ( v2 <= 0xB )
  {
    if ( ((1 << v2) & 0x608) != 0 )
    {
      v3 = (void *)a1[5];
      if ( v3 )
      {
LABEL_7:
        a1[6] = 0;
        qfree(v3);
        a1[7] = 0;
        a1[5] = 0;
      }
    }
    else if ( ((1 << v2) & 0x902) != 0 )
    {
      v3 = (void *)a1[5];
      if ( v3 )
        goto LABEL_7;
    }
    else if ( v2 == 7 )
    {
      v5 = (void *)a1[8];
      if ( v5 )
      {
        a1[9] = 0;
        qfree(v5);
        a1[10] = 0;
        a1[8] = 0;
      }
    }
  }
  a1[4] = 0;
  return 0;
}
