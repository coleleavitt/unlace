/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_errdesc
// Address: 0x00075B74

//----- (00075B74) --------------------------------------------------------
int __fastcall get_errdesc(const void *a1, unsigned int a2)
{
  size_t v3; // r0
  size_t v4; // r6
  unsigned int v5; // r7
  _DWORD *address; // r0
  void *v7; // r4
  _DWORD *v8; // r7
  int v9; // r4
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r5
  int v13; // r4
  void *v14; // r7
  _DWORD *v15; // r0
  const char *v16; // r0
  const char *v17; // r4
  size_t v18; // r6
  _DWORD *v19; // r0
  int v20; // r1
  int v21; // r5
  size_t v22; // r1
  unsigned int v23; // r6
  void *v24; // r7
  _DWORD *v25; // r0
  _DWORD *v27; // [sp+4h] [bp-10h]
  _DWORD *v28; // [sp+8h] [bp-Ch]
  _DWORD *v29; // [sp+8h] [bp-Ch]
  size_t v30; // [sp+8h] [bp-Ch]
  unsigned int v31; // [sp+Ch] [bp-8h]
  size_t v32; // [sp+Ch] [bp-8h]
  size_t v33; // [sp+Ch] [bp-8h]

  if ( a1 && (v3 = strlen((const char *)a1)) != 0 )
  {
    v4 = v3;
    v5 = v3 + 1;
    address = _emutls_get_address((size_t *)dword_DE26C);
    v7 = (void *)address[25];
    v31 = v5;
    if ( address[27] < v5 )
    {
      v28 = _emutls_get_address((size_t *)dword_DE26C);
      v7 = qvector_reserve((int)(v28 + 25), v7, v5, 1u);
      v28[25] = v7;
    }
    v8 = _emutls_get_address((size_t *)dword_DE26C);
    v8[26] = v31;
    memmove(v7, a1, v4);
    *(_BYTE *)(v8[25] + v4) = 0;
  }
  else
  {
    _emutls_get_address((size_t *)dword_DE26C)[26] = 0;
  }
  v9 = _strlen_chk(": ", 3);
  v10 = _emutls_get_address((size_t *)dword_DE26C);
  v11 = v10[26];
  v12 = v11 - 1;
  if ( !v11 )
    v12 = 0;
  v32 = v9;
  v13 = v12 + v9;
  v14 = (void *)v10[25];
  if ( v10[27] < (unsigned int)(v13 + 1) )
  {
    v29 = _emutls_get_address((size_t *)dword_DE26C);
    v14 = qvector_reserve((int)(v29 + 25), v14, v13 + 1, 1u);
    v29[25] = v14;
  }
  v15 = _emutls_get_address((size_t *)dword_DE26C);
  v15[26] = v13 + 1;
  *((_BYTE *)v14 + v13) = 0;
  memmove((void *)(v15[25] + v12), ": ", v32);
  v16 = qstrerror(a2);
  if ( v16 )
  {
    v17 = v16;
    v18 = strlen(v16);
    v19 = _emutls_get_address((size_t *)dword_DE26C);
    v20 = v19[26];
    v21 = v20 - 1;
    if ( !v20 )
      v21 = 0;
    v33 = v18;
    v22 = v21 + v18;
    v23 = v21 + v18 + 1;
    v24 = (void *)v19[25];
    v30 = v22;
    if ( v19[27] < v23 )
    {
      v27 = _emutls_get_address((size_t *)dword_DE26C);
      v24 = qvector_reserve((int)(v27 + 25), v24, v23, 1u);
      v27[25] = v24;
    }
    v25 = _emutls_get_address((size_t *)dword_DE26C);
    v25[26] = v23;
    *((_BYTE *)v24 + v30) = 0;
    memmove((void *)(v25[25] + v21), v17, v33);
  }
  return _emutls_get_address((size_t *)dword_DE26C)[25];
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DE26C: using guessed type int dword_DE26C[4];
