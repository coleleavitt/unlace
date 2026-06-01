/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_debug_event
// Address: 0x000A1770

//----- (000A1770) --------------------------------------------------------
void __cdecl free_debug_event(_DWORD *a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  int v3; // ecx
  void *v4; // eax
  void *v5; // eax

  v1 = a1[4] & 0xFFFFFFF;
  if ( v1 <= 0xB )
  {
    v2 = 1544;
    if ( _bittest(&v2, v1) )
    {
      v4 = (void *)a1[5];
      if ( v4 )
      {
LABEL_7:
        a1[6] = 0;
        qfree(v4);
        a1[5] = 0;
        a1[7] = 0;
      }
    }
    else
    {
      v3 = 2306;
      if ( _bittest(&v3, v1) )
      {
        v4 = (void *)a1[5];
        if ( v4 )
          goto LABEL_7;
      }
      else if ( v1 == 7 )
      {
        v5 = (void *)a1[8];
        if ( v5 )
        {
          a1[9] = 0;
          qfree(v5);
          a1[8] = 0;
          a1[10] = 0;
        }
      }
    }
  }
  a1[4] = 0;
}
