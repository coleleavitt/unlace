/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805A2D0
// Address: 0x0805A2D0

//----- (0805A2D0) --------------------------------------------------------
void __cdecl sub_805A2D0(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax
  int v3; // esi
  _DWORD *v4; // edi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax

  v1 = (void *)a1[17];
  if ( v1 )
  {
    a1[18] = 0;
    sub_80CF780(v1);
  }
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    sub_80CF780(v2);
  }
  v3 = a1[10];
  while ( v3 )
  {
    v4 = (_DWORD *)v3;
    sub_8057050(*(_DWORD **)(v3 + 12));
    v5 = *(void **)(v3 + 20);
    v3 = *(_DWORD *)(v3 + 8);
    if ( v5 )
    {
      v4[6] = 0;
      sub_80CF780(v5);
    }
    operator delete(v4, 0x20u);
  }
  v6 = (void *)a1[5];
  if ( v6 )
  {
    a1[6] = 0;
    sub_80CF780(v6);
  }
  v7 = (void *)a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    sub_80CF780(v7);
  }
}
