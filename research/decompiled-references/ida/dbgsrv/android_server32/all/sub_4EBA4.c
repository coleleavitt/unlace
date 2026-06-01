/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EBA4
// Address: 0x0004EBA4

//----- (0004EBA4) --------------------------------------------------------
int __fastcall sub_4EBA4(int a1)
{
  char *v2; // r5
  char *v3; // r6
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void **v7; // r5
  void **v8; // r7
  void *v9; // r0
  char **v10; // r0
  int v11; // r5
  int v12; // r5
  int v13; // r7
  void *v14; // r0

  sub_4ED02(a1, 1);
  sub_4EDEC(a1);
  v2 = *(char **)(a1 + 476);
  if ( v2 )
  {
    do
    {
      v3 = *(char **)v2;
      sub_55EE0((char **)v2 + 5);
      if ( (unsigned __int8)v2[8] << 31 )
        operator delete(*((void **)v2 + 4));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)(a1 + 468);
  *(_DWORD *)(a1 + 468) = 0;
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(a1 + 152);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 156) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 152) = 0;
    *(_DWORD *)(a1 + 160) = 0;
  }
  v6 = *(void **)(a1 + 128);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 132) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 136) = 0;
  }
  sub_1B3BC((char **)(a1 + 116));
  v7 = *(void ***)(a1 + 56);
  if ( v7 )
  {
    do
    {
      v8 = (void **)*v7;
      if ( *((unsigned __int8 *)v7 + 8) << 31 )
        operator delete(v7[4]);
      operator delete(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  v9 = *(void **)(a1 + 48);
  *(_DWORD *)(a1 + 48) = 0;
  if ( v9 )
    operator delete(v9);
  v10 = *(char ***)(a1 + 28);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 32);
    if ( v11 )
    {
      sub_1B3BC(v10);
      if ( v11 != 1 )
      {
        v12 = v11 - 1;
        v13 = 28;
        do
        {
          sub_1B3BC((char **)(*(_DWORD *)(a1 + 28) + v13));
          --v12;
          v13 += 28;
        }
        while ( v12 );
      }
      v10 = *(char ***)(a1 + 28);
    }
    *(_DWORD *)(a1 + 32) = 0;
    qfree(v10);
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 28) = 0;
  }
  v14 = *(void **)(a1 + 16);
  if ( v14 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    qfree(v14);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return a1;
}
