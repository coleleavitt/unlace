/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_errdesc
// Address: 0x000A3BD0

//----- (000A3BD0) --------------------------------------------------------
int __cdecl get_errdesc(char *s, unsigned int a2)
{
  size_t v2; // eax
  unsigned int v3; // esi
  _DWORD *address; // eax
  _DWORD *v5; // edi
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  void *v10; // edi
  _DWORD *v11; // eax
  const char *v12; // eax
  size_t v13; // edi
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // esi
  _BYTE *v17; // edi
  _DWORD *v18; // eax
  void *v20; // [esp+10h] [ebp-2Ch]
  size_t v21; // [esp+14h] [ebp-28h]
  unsigned int v22; // [esp+14h] [ebp-28h]
  const char *v23; // [esp+14h] [ebp-28h]
  _DWORD *v24; // [esp+18h] [ebp-24h]
  size_t v25; // [esp+18h] [ebp-24h]
  _DWORD *v26; // [esp+1Ch] [ebp-20h]
  _DWORD *v27; // [esp+1Ch] [ebp-20h]
  int v28; // [esp+20h] [ebp-1Ch]
  unsigned int v29; // [esp+20h] [ebp-1Ch]
  size_t v30; // [esp+24h] [ebp-18h]
  size_t v31; // [esp+24h] [ebp-18h]
  void *v32; // [esp+28h] [ebp-14h]

  if ( s && (v2 = strlen(s)) != 0 )
  {
    v21 = v2;
    v3 = v2 + 1;
    address = _emutls_get_address((unsigned int *)dword_13BC24);
    v20 = (void *)address[25];
    if ( address[27] < v3 )
    {
      v24 = _emutls_get_address((unsigned int *)dword_13BC24);
      v20 = qvector_reserve((int)(v24 + 25), v20, v3, 1u);
      v24[25] = v20;
    }
    v5 = _emutls_get_address((unsigned int *)dword_13BC24);
    v5[26] = v3;
    memmove(v20, s, v21);
    *(_BYTE *)(v5[25] + v21) = 0;
  }
  else
  {
    _emutls_get_address((unsigned int *)dword_13BC24)[26] = 0;
  }
  v6 = __strlen_chk(": ", 3);
  v7 = _emutls_get_address((unsigned int *)dword_13BC24);
  v8 = v7[26];
  v9 = v8 - 1;
  if ( !v8 )
    v9 = 0;
  v22 = v9 + v6 + 1;
  v30 = v6;
  v28 = v9 + v6;
  v10 = (void *)v7[25];
  if ( v7[27] < v22 )
  {
    v26 = _emutls_get_address((unsigned int *)dword_13BC24);
    v10 = qvector_reserve((int)(v26 + 25), v10, v22, 1u);
    v26[25] = v10;
  }
  v11 = _emutls_get_address((unsigned int *)dword_13BC24);
  v11[26] = v22;
  *((_BYTE *)v10 + v28) = 0;
  memmove((void *)(v11[25] + v9), ": ", v30);
  v12 = qstrerror(a2);
  if ( v12 )
  {
    v23 = v12;
    v13 = strlen(v12);
    v14 = _emutls_get_address((unsigned int *)dword_13BC24);
    v15 = v14[26];
    v16 = v15 - 1;
    if ( !v15 )
      v16 = 0;
    v25 = v13;
    v31 = v16 + v13;
    v29 = v16 + v13 + 1;
    if ( v14[27] >= v29 )
    {
      v17 = (_BYTE *)v14[25];
    }
    else
    {
      v32 = (void *)v14[25];
      v27 = _emutls_get_address((unsigned int *)dword_13BC24);
      v17 = qvector_reserve((int)(v27 + 25), v32, v16 + v13 + 1, 1u);
      v27[25] = v17;
    }
    v18 = _emutls_get_address((unsigned int *)dword_13BC24);
    v18[26] = v29;
    v17[v31] = 0;
    memmove((void *)(v18[25] + v16), v23, v25);
  }
  return _emutls_get_address((unsigned int *)dword_13BC24)[25];
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13BC24: using guessed type int dword_13BC24[4];
