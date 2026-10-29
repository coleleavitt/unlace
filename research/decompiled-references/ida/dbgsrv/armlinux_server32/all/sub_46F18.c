/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F18
// Address: 0x00046F18

//----- (00046F18) --------------------------------------------------------
int __fastcall sub_46F18(int a1)
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
    v9 = (pthread_mutex_t *)dword_D4AB0;
    sub_7A268((pthread_mutex_t *)dword_D4AB0);
    v10 = *(_DWORD *)(a1 + 4);
    v11 = *(_DWORD *)(v10 + 68) - 1;
    *(_DWORD *)(v10 + 68) = v11;
    if ( !v11 && off_D3CF4 )
      ((void (__fastcall *)())off_D3CF4)();
    sub_7A290(v9);
  }
  v2 = *(void **)(a1 + 36);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    sub_77F70(v2);
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_77F70(v3);
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
        sub_45758(&v4[8 * v7]);
        v4 = *(unsigned __int8 **)(a1 + 12);
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_77F70(v4);
  }
  return a1;
}
// D3CF4: using guessed type _UNKNOWN *off_D3CF4;
// D4AB0: using guessed type int dword_D4AB0;
