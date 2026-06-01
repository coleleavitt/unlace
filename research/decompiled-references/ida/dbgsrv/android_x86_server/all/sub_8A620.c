/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A620
// Address: 0x0008A620

//----- (0008A620) --------------------------------------------------------
void __cdecl sub_8A620(_DWORD *a1)
{
  void **v1; // edi
  int v2; // esi
  int v3; // esi
  _DWORD *v4; // esi
  void *v5; // eax

  if ( a1[9] )
  {
    v1 = (void **)a1[11];
    v2 = a1[12];
    if ( (v2 & 0x3FFFFFFF) != 0 )
    {
      v3 = 4 * v2;
      do
      {
        qfree(*v1++);
        v3 -= 4;
      }
      while ( v3 );
      v4 = a1;
      v1 = (void **)a1[11];
      if ( !v1 )
        goto LABEL_7;
    }
    else
    {
      v4 = a1;
      if ( !v1 )
      {
LABEL_7:
        v5 = (void *)v4[8];
        if ( v5 )
        {
          v4[9] = 0;
          qfree(v5);
          v4[8] = 0;
          v4[10] = 0;
        }
        return;
      }
    }
    v4[12] = 0;
    qfree(v1);
    v4[11] = 0;
    v4[13] = 0;
    goto LABEL_7;
  }
}
