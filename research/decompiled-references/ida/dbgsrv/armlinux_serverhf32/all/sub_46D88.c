/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D88
// Address: 0x00046D88

//----- (00046D88) --------------------------------------------------------
int __fastcall sub_46D88(int a1)
{
  void *v2; // r0
  void *v3; // r0
  unsigned __int8 *v4; // r0
  int v5; // r6
  int i; // r4
  int v7; // r3
  pthread_mutex_t *v9; // r6
  int v10; // r2
  int v11; // r3

  if ( *(_BYTE *)(a1 + 77) )
  {
    v9 = (pthread_mutex_t *)dword_D3A90;
    sub_7A100((pthread_mutex_t *)dword_D3A90);
    v10 = *(_DWORD *)(a1 + 4);
    v11 = *(_DWORD *)(v10 + 68) - 1;
    *(_DWORD *)(v10 + 68) = v11;
    if ( !v11 && off_D2CD4 )
      ((void (__fastcall *)())off_D2CD4)();
    sub_7A128(v9);
  }
  v2 = *(void **)(a1 + 36);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    sub_77E08(v2);
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_77E08(v3);
  }
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = 3 * i;
        sub_455C8(&v4[8 * v7]);
        v4 = *(unsigned __int8 **)(a1 + 12);
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_77E08(v4);
  }
  return a1;
}
// D2CD4: using guessed type _UNKNOWN *off_D2CD4;
// D3A90: using guessed type int dword_D3A90;
