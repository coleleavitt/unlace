/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1AD70
// Address: 0x0001AD70

//----- (0001AD70) --------------------------------------------------------
void __cdecl sub_1AD70(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void **v9; // esi
  void **v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  void *v14; // eax
  void *v15; // eax
  void **v16; // [esp+8h] [ebp-14h]

  *(_DWORD *)a1 = &off_13851C;
  sub_8A470((int *)a1);
  v1 = *(void **)(a1 + 372);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 376) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 372) = 0;
    *(_DWORD *)(a1 + 380) = 0;
  }
  v2 = *(void **)(a1 + 360);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 364) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 360) = 0;
    *(_DWORD *)(a1 + 368) = 0;
  }
  sub_1BB80((char **)(a1 + 316));
  v3 = *(void **)(a1 + 304);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 308) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 304) = 0;
    *(_DWORD *)(a1 + 312) = 0;
  }
  sub_1BC40((char **)(a1 + 292));
  v4 = *(void **)(a1 + 280);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 284) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 288) = 0;
  }
  sub_1BD00(a1 + 260, *(void ***)(a1 + 264));
  v5 = *(void **)(a1 + 248);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 252) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 248) = 0;
    *(_DWORD *)(a1 + 256) = 0;
  }
  sub_1B6D0((char **)(a1 + 236));
  sub_1BD50(a1 + 224, *(void ***)(a1 + 228));
  v6 = *(void **)(a1 + 212);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 216) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 212) = 0;
    *(_DWORD *)(a1 + 220) = 0;
  }
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_1BDA0((int *)(a1 + 196), 0);
    qfree(*(void **)(a1 + 196));
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 204) = 0;
  }
  v7 = *(void **)(a1 + 184);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 188) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = 0;
  }
  sub_1BE70(a1 + 172, *(void ***)(a1 + 176));
  sub_1BF10(a1 + 160, *(void ***)(a1 + 164));
  if ( *(_DWORD *)(a1 + 148) )
  {
    sub_1C180((int *)(a1 + 148), 0);
    qfree(*(void **)(a1 + 148));
    *(_DWORD *)(a1 + 148) = 0;
    *(_DWORD *)(a1 + 156) = 0;
  }
  v8 = *(void **)(a1 + 132);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    qfree(v8);
    *(_DWORD *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 140) = 0;
  }
  free_debug_event((_DWORD *)(a1 + 80));
  v16 = (void **)(a1 + 56);
  sub_1C250((_DWORD *)(a1 + 56));
  v9 = *(void ***)(a1 + 60);
  v10 = *(void ***)(a1 + 64);
  if ( v9 != v10 )
  {
    do
      operator delete(*v9++);
    while ( v10 != v9 );
    v11 = *(_DWORD *)(a1 + 60);
    v12 = *(_DWORD *)(a1 + 64);
    if ( v12 != v11 )
    {
      v13 = v11 - v12;
      do
        v13 += 4;
      while ( v13 );
      *(_DWORD *)(a1 + 64) = v11;
    }
  }
  if ( *v16 )
    operator delete(*v16);
  v14 = *(void **)(a1 + 44);
  if ( v14 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    qfree(v14);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 52) = 0;
  }
  v15 = *(void **)(a1 + 32);
  if ( v15 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    qfree(v15);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    sub_1C390((int *)(a1 + 20), 0);
    qfree(*(void **)(a1 + 20));
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 28) = 0;
  }
}
// 1B9D0: using guessed type _DWORD __cdecl sub_1B9D0(_DWORD);
// 13851C: using guessed type int (__cdecl *off_13851C)(int, int);
