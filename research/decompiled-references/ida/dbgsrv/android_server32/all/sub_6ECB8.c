/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ECB8
// Address: 0x0006ECB8

//----- (0006ECB8) --------------------------------------------------------
bool __fastcall sub_6ECB8(int a1, const struct sockaddr *a2, socklen_t a3, int a4)
{
  int v6; // r0
  unsigned int v7; // r1
  size_t v8; // r3
  int v9; // r0
  int v10; // r1
  size_t v11; // r2
  unsigned int v12; // r7
  _BYTE *v13; // r0
  int v14; // r0
  unsigned int v15; // r6
  _BYTE *v16; // r0
  size_t v17; // r2
  int v18; // r0
  int v19; // r7
  size_t v20; // r4
  unsigned int v21; // r6
  _BYTE *v22; // r0
  size_t v23; // r2
  int v24; // r0
  int v25; // r7
  size_t v26; // r4
  unsigned int v27; // r6
  _BYTE *v28; // r0
  int v29; // r0
  int v30; // r6
  _BYTE *v31; // r0
  int v32; // r1
  unsigned int v33; // r0
  size_t v35; // [sp+14h] [bp-42Ch]
  size_t v36; // [sp+18h] [bp-428h]
  int v37; // [sp+1Ch] [bp-424h]
  size_t v38; // [sp+1Ch] [bp-424h]
  size_t v39; // [sp+20h] [bp-420h]
  unsigned int v40; // [sp+30h] [bp-410h]
  char host[1028]; // [sp+3Ch] [bp-404h] BYREF

  v6 = *(_DWORD *)(a1 + 4);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  v40 = v7;
  if ( a4 && !getnameinfo(a2, a3, host, 0x400u, nullptr, 0, 4u) )
  {
    v8 = _strlen_chk(host, 1024);
    v9 = *(_DWORD *)(a1 + 4);
    v10 = v9 - 1;
    if ( !v9 )
      v10 = 0;
    v11 = v10 + v8;
    v12 = v10 + v8 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v12 )
    {
      v13 = *(_BYTE **)a1;
    }
    else
    {
      v37 = v10;
      v35 = v8;
      v36 = v10 + v8;
      v13 = qvector_reserve(a1, *(void **)a1, v12, 1u);
      v8 = v35;
      v11 = v36;
      v10 = v37;
      *(_DWORD *)a1 = v13;
    }
    *(_DWORD *)(a1 + 4) = v12;
    v13[v11] = 0;
    memmove((void *)(*(_DWORD *)a1 + v10), host, v8);
  }
  if ( !getnameinfo(a2, a3, host, 0x400u, nullptr, 0, 2u) )
  {
    v14 = *(_DWORD *)(a1 + 4);
    v15 = v14 - 1;
    if ( !v14 )
      v15 = 0;
    if ( v15 <= v40 )
    {
      v17 = _strlen_chk(host, 1024);
      v18 = *(_DWORD *)(a1 + 4);
      v19 = v18 - 1;
      if ( !v18 )
        v19 = 0;
      v20 = v19 + v17;
      v21 = v19 + v17 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v21 )
      {
        v22 = *(_BYTE **)a1;
      }
      else
      {
        v39 = v17;
        v22 = qvector_reserve(a1, *(void **)a1, v19 + v17 + 1, 1u);
        v17 = v39;
        *(_DWORD *)a1 = v22;
      }
      *(_DWORD *)(a1 + 4) = v21;
      v22[v20] = 0;
      memmove((void *)(*(_DWORD *)a1 + v19), host, v17);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) >= v15 + 2 )
      {
        v16 = *(_BYTE **)a1;
      }
      else
      {
        v16 = qvector_reserve(a1, *(void **)a1, v15 + 2, 1u);
        *(_DWORD *)a1 = v16;
      }
      *(_DWORD *)(a1 + 4) = v15 + 2;
      v16[v15] = 40;
      *(_BYTE *)(*(_DWORD *)a1 + v15 + 1) = 0;
      v23 = _strlen_chk(host, 1024);
      v24 = *(_DWORD *)(a1 + 4);
      v25 = v24 - 1;
      if ( !v24 )
        v25 = 0;
      v26 = v25 + v23;
      v27 = v25 + v23 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v27 )
      {
        v28 = *(_BYTE **)a1;
      }
      else
      {
        v38 = v23;
        v28 = qvector_reserve(a1, *(void **)a1, v25 + v23 + 1, 1u);
        v23 = v38;
        *(_DWORD *)a1 = v28;
      }
      *(_DWORD *)(a1 + 4) = v27;
      v28[v26] = 0;
      memmove((void *)(*(_DWORD *)a1 + v25), host, v23);
      v29 = *(_DWORD *)(a1 + 4);
      v30 = v29 - 1;
      if ( !v29 )
        v30 = 0;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v30 + 2) )
      {
        v31 = *(_BYTE **)a1;
      }
      else
      {
        v31 = qvector_reserve(a1, *(void **)a1, v30 + 2, 1u);
        *(_DWORD *)a1 = v31;
      }
      *(_DWORD *)(a1 + 4) = v30 + 2;
      v31[v30] = 41;
      *(_BYTE *)(*(_DWORD *)a1 + v30 + 1) = 0;
    }
  }
  v32 = *(_DWORD *)(a1 + 4);
  v33 = v32 - 1;
  if ( !v32 )
    v33 = 0;
  return v33 > v40;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
