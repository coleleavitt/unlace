/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C6F0
// Address: 0x0009C6F0

//----- (0009C6F0) --------------------------------------------------------
void __cdecl sub_9C6F0(_DWORD *a1)
{
  _DWORD *v1; // eax
  unsigned int i; // esi
  void **v3; // edi
  void *v4; // eax
  unsigned int v5; // [esp+8h] [ebp-14h]

  v1 = (_DWORD *)a1[34];
  v5 = a1[35];
  if ( v5 )
  {
    for ( i = 0; i < v5; ++i )
    {
      v3 = (void **)v1[i];
      if ( v3 )
      {
        v4 = *v3;
        if ( *v3 )
        {
          v3[1] = nullptr;
          qfree(v4);
          *v3 = nullptr;
          v3[2] = nullptr;
        }
        qfree(v3);
        v1 = (_DWORD *)a1[34];
      }
    }
  }
  if ( v1 )
  {
    a1[35] = 0;
    qfree(v1);
    a1[34] = 0;
    a1[36] = 0;
  }
}
