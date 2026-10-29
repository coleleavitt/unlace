/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_985F0
// Address: 0x000985F0

//----- (000985F0) --------------------------------------------------------
bool __fastcall sub_985F0(int a1, const struct sockaddr *a2, socklen_t salen, char a4)
{
  int v5; // eax
  unsigned int v6; // edi
  socklen_t v7; // ecx
  int v8; // eax
  size_t v9; // ecx
  int v10; // eax
  int v11; // edi
  _BYTE *v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // edx
  _BYTE *v17; // eax
  size_t v18; // ecx
  int v19; // eax
  int v20; // edi
  _BYTE *v21; // eax
  size_t v22; // ecx
  int v23; // eax
  int v24; // edi
  _BYTE *v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // ecx
  _BYTE *v29; // eax
  int v30; // eax
  unsigned int v31; // ecx
  const struct sockaddr *v33; // [esp+4h] [ebp-428h]
  size_t v34; // [esp+4h] [ebp-428h]
  size_t v35; // [esp+4h] [ebp-428h]
  unsigned int v36; // [esp+8h] [ebp-424h]
  size_t v37; // [esp+8h] [ebp-424h]
  size_t v38; // [esp+8h] [ebp-424h]
  size_t v39; // [esp+Ch] [ebp-420h]
  unsigned int v40; // [esp+Ch] [ebp-420h]
  unsigned int v41; // [esp+Ch] [ebp-420h]
  unsigned int v42; // [esp+10h] [ebp-41Ch]
  unsigned int v43; // [esp+10h] [ebp-41Ch]
  size_t v44; // [esp+14h] [ebp-418h]
  char host[1024]; // [esp+18h] [ebp-414h] BYREF
  unsigned int v46; // [esp+418h] [ebp-14h]

  v46 = __readgsdword(0x14u);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = v5 - 1;
  if ( !v5 )
    v6 = 0;
  v7 = salen;
  if ( a4 )
  {
    v33 = a2;
    v8 = getnameinfo(a2, salen, host, 0x400u, nullptr, 0, 4u);
    v7 = salen;
    a2 = v33;
    if ( !v8 )
    {
      v42 = v6;
      v9 = __strlen_chk(host, 1024);
      v10 = *(_DWORD *)(a1 + 4);
      v11 = v10 - 1;
      if ( !v10 )
        v11 = 0;
      v39 = v11 + v9;
      v36 = v11 + v9 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v36 )
      {
        v12 = *(_BYTE **)a1;
      }
      else
      {
        v44 = v9;
        v12 = qvector_reserve(a1, *(void **)a1, v11 + v9 + 1, 1u);
        v9 = v44;
        *(_DWORD *)a1 = v12;
      }
      *(_DWORD *)(a1 + 4) = v36;
      v12[v39] = 0;
      memmove((void *)(*(_DWORD *)a1 + v11), host, v9);
      v6 = v42;
      a2 = v33;
      v7 = salen;
    }
  }
  if ( !getnameinfo(a2, v7, host, 0x400u, nullptr, 0, 2u) )
  {
    v13 = *(_DWORD *)(a1 + 4);
    v14 = v6;
    v15 = v13 - 1;
    if ( !v13 )
      v15 = 0;
    v43 = v14;
    if ( v15 <= v14 )
    {
      v18 = __strlen_chk(host, 1024);
      v19 = *(_DWORD *)(a1 + 4);
      v20 = v19 - 1;
      if ( !v19 )
        v20 = 0;
      v34 = v20 + v18;
      v40 = v20 + v18 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v40 )
      {
        v21 = *(_BYTE **)a1;
      }
      else
      {
        v37 = v18;
        v21 = qvector_reserve(a1, *(void **)a1, v20 + v18 + 1, 1u);
        v18 = v37;
        *(_DWORD *)a1 = v21;
      }
      *(_DWORD *)(a1 + 4) = v40;
      v21[v34] = 0;
      memmove((void *)(*(_DWORD *)a1 + v20), host, v18);
    }
    else
    {
      v16 = v15 + 2;
      if ( *(_DWORD *)(a1 + 8) >= v15 + 2 )
      {
        v17 = *(_BYTE **)a1;
      }
      else
      {
        v17 = qvector_reserve(a1, *(void **)a1, v15 + 2, 1u);
        v16 = v15 + 2;
        *(_DWORD *)a1 = v17;
      }
      *(_DWORD *)(a1 + 4) = v16;
      v17[v15] = 40;
      *(_BYTE *)(*(_DWORD *)a1 + v15 + 1) = 0;
      v22 = __strlen_chk(host, 1024);
      v23 = *(_DWORD *)(a1 + 4);
      v24 = v23 - 1;
      if ( !v23 )
        v24 = 0;
      v35 = v24 + v22;
      v41 = v24 + v22 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v41 )
      {
        v25 = *(_BYTE **)a1;
      }
      else
      {
        v38 = v22;
        v25 = qvector_reserve(a1, *(void **)a1, v24 + v22 + 1, 1u);
        v22 = v38;
        *(_DWORD *)a1 = v25;
      }
      *(_DWORD *)(a1 + 4) = v41;
      v25[v35] = 0;
      memmove((void *)(*(_DWORD *)a1 + v24), host, v22);
      v26 = *(_DWORD *)(a1 + 4);
      v27 = v26 - 1;
      if ( !v26 )
        v27 = 0;
      v28 = v27 + 2;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v27 + 2) )
      {
        v29 = *(_BYTE **)a1;
      }
      else
      {
        v29 = qvector_reserve(a1, *(void **)a1, v27 + 2, 1u);
        v28 = v27 + 2;
        *(_DWORD *)a1 = v29;
      }
      *(_DWORD *)(a1 + 4) = v28;
      v29[v27] = 41;
      *(_BYTE *)(*(_DWORD *)a1 + v27 + 1) = 0;
    }
    v6 = v43;
  }
  v30 = *(_DWORD *)(a1 + 4);
  v31 = v30 - 1;
  if ( !v30 )
    v31 = 0;
  return v31 > v6;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
