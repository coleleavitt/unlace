/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808AE30
// Address: 0x0808AE30

//----- (0808AE30) --------------------------------------------------------
void __cdecl sub_808AE30(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax
  int v4; // ebp
  int i; // esi
  int v6; // edx
  pthread_mutex_t *v7; // esi
  int v8; // edx
  int v9; // eax

  if ( *(_BYTE *)(a1 + 77) )
  {
    v7 = (pthread_mutex_t *)dword_811E6F8;
    sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
    v8 = *(_DWORD *)(a1 + 4);
    v9 = *(_DWORD *)(v8 + 64) - 1;
    *(_DWORD *)(v8 + 64) = v9;
    if ( !v9 && off_811D3AC )
      off_811D3AC();
    sub_80D1600(v7);
  }
  v1 = *(void **)(a1 + 36);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    sub_80CF780(v1);
  }
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_80CF780(v2);
  }
  v3 = *(void **)(a1 + 12);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = 5 * i;
        sub_8089430((int)v3 + 4 * v6);
        v3 = *(void **)(a1 + 12);
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_80CF780(v3);
  }
}
// 811D3AC: using guessed type int (*off_811D3AC)();
// 811E6F8: using guessed type int dword_811E6F8;
