/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73A40
// Address: 0x00073A40

//----- (00073A40) --------------------------------------------------------
int __fastcall sub_73A40(int a1)
{
  unsigned int v2; // r6
  const void *v3; // r8
  void *v4; // r0
  unsigned int v5; // r9
  int v6; // r6
  _DWORD *v7; // r8
  int *v8; // r0
  const char *v9; // r3
  const char *v10; // t1
  size_t v12; // r0
  size_t v13; // r8
  unsigned int v14; // r10
  void *v15; // r0
  pthread_mutex_t *v16; // [sp+8h] [bp-1010h] BYREF
  _DWORD v17[2]; // [sp+Ch] [bp-100Ch] BYREF
  char v18[4]; // [sp+14h] [bp-1004h] BYREF

  sub_7A110(&v16);
  v2 = dword_D3BC4;
  if ( (unsigned int)dword_D3BC4 > 1 )
    goto LABEL_2;
  v7 = v17;
  v17[1] = 0;
  v17[0] = ".idapro";
  v8 = sub_73938();
  sub_79524(v18, (unsigned __int8 *)v8, 4096);
  if ( v18[0] )
  {
    v9 = ".idapro";
    do
    {
      sub_76A30(v18, 4096, (unsigned __int8 *)v18, v9, 0);
      if ( !sub_77404((int)v18) )
        sub_772FC(v18, 0x1FFu);
      v10 = (const char *)v7[1];
      ++v7;
      v9 = v10;
    }
    while ( v10 );
    v12 = strlen(v18);
    v13 = v12;
    if ( !v12 )
    {
      v6 = 0;
      dword_D3BC4 = 0;
      goto LABEL_12;
    }
    v14 = v12 + 1;
    v15 = (void *)dword_D3BC0;
    if ( v14 > dword_D3BC8 )
    {
      v15 = sub_77EB0((int)&dword_D3BC0, (void *)dword_D3BC0, v14, 1u);
      dword_D3BC0 = (int)v15;
    }
    dword_D3BC4 = v14;
    memmove(v15, v18, v13);
    *(_BYTE *)(dword_D3BC0 + v13) = 0;
    v2 = dword_D3BC4;
  }
  else
  {
    v2 = dword_D3BC4;
  }
  if ( v2 > 1 )
  {
LABEL_2:
    if ( (int *)a1 == &dword_D3BC0 )
    {
      v6 = 1;
    }
    else
    {
      v3 = (const void *)dword_D3BC0;
      v4 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < v2 )
      {
        v4 = sub_77EB0(a1, *(void **)a1, v2, 1u);
        *(_DWORD *)a1 = v4;
      }
      v5 = v2 - 1;
      *(_DWORD *)(a1 + 4) = v2;
      memmove(v4, v3, v2 - 1);
      v6 = 1;
      *(_BYTE *)(*(_DWORD *)a1 + v5) = 0;
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_12:
  sub_7A128(v16);
  return v6;
}
// D3BC0: using guessed type int dword_D3BC0;
// D3BC4: using guessed type int dword_D3BC4;
// D3BC8: using guessed type int dword_D3BC8;
