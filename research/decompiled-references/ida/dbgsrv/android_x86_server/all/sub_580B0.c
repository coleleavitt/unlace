/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_580B0
// Address: 0x000580B0

//----- (000580B0) --------------------------------------------------------
void __cdecl sub_580B0(int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  int v3; // esi
  int v4; // ecx
  char v5; // dl
  void (*v6)(void); // eax
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // esi
  void *v10; // eax

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = 0;
    v3 = 12;
    do
    {
      v4 = *(_DWORD *)(a1 + 12);
      v5 = *(_BYTE *)(v4 + v3);
      if ( v5 == 5 || v5 == 6 && (unsigned int)off_13B614 <= -*(_DWORD *)(v4 + v3 + 4) )
      {
        free_idcv((char *)(v3 + v4));
        v1 = *(_DWORD *)(a1 + 16);
      }
      ++v2;
      v3 += 32;
    }
    while ( v2 < v1 );
  }
  v6 = *((void (**)(void))&qword_13ACD8 + 596);
  if ( v6 )
    v6();
  v7 = *(_DWORD **)a1;
  v8 = *(_DWORD *)(a1 + 4);
  while ( --v8 >= 0 )
  {
    v9 = v7[v8];
    if ( v9 )
    {
      v10 = *(void **)(v9 + 20);
      if ( v10 )
      {
        *(_DWORD *)(v9 + 24) = 0;
        qfree(v10);
        *(_DWORD *)(v9 + 20) = 0;
        *(_DWORD *)(v9 + 28) = 0;
      }
      sub_67C10(v9, *(void ***)(v9 + 4));
      operator delete((void *)v9);
      v7 = *(_DWORD **)a1;
    }
  }
  if ( v7 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v7);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13B614: using guessed type int *off_13B614;
