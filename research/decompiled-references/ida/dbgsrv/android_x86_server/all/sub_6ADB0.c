/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ADB0
// Address: 0x0006ADB0

//----- (0006ADB0) --------------------------------------------------------
int __cdecl sub_6ADB0(int a1, char *s, char *a3, unsigned int a4, char a5, bool *a6)
{
  _DWORD *v6; // edi
  char *v7; // edi
  int v8; // esi
  size_t v9; // eax
  size_t v10; // ecx
  char *v11; // esi
  size_t v13; // edi
  size_t v14; // esi
  char *v15; // eax
  size_t v16; // edi
  char *v17; // edi
  const char *v18; // edx
  bool *v19; // esi
  const char *v20; // esi
  size_t v21; // eax
  unsigned int v22; // edi
  int v23; // ecx
  void *v24; // eax
  char *v25; // [esp+4h] [ebp-48h]
  int v26; // [esp+1Ch] [ebp-30h]
  int v27; // [esp+20h] [ebp-2Ch]
  bool v28; // [esp+20h] [ebp-2Ch]
  int v29; // [esp+24h] [ebp-28h]
  size_t v30; // [esp+24h] [ebp-28h]
  int v31; // [esp+28h] [ebp-24h] BYREF
  size_t v32; // [esp+2Ch] [ebp-20h]
  void *v33; // [esp+30h] [ebp-1Ch]
  unsigned int v34; // [esp+38h] [ebp-14h]

  v34 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 272) )
  {
    *(_BYTE *)(a1 + 272) = 0;
    v6 = operator new(0x14u);
    sub_6B010(v6, *(unsigned int **)(a1 + 248));
    *(_DWORD *)(a1 + 248) = v6;
  }
  v7 = s;
  if ( !s || a4 > 0x7F || !*s )
    return set_qerrno(38);
  v27 = *(_DWORD *)(a1 + 248);
  v8 = *(_DWORD *)(v27 + 12);
  v32 = 0;
  v31 = 0;
  v33 = nullptr;
  v9 = strlen(s);
  if ( v9 >= 0xFFFFFFF0 )
    sub_758B0();
  v10 = v9;
  v29 = v8;
  if ( v9 >= 0xB )
  {
    v13 = (v9 + 16) & 0xFFFFFFF0;
    v14 = v9;
    v15 = (char *)operator new(v13);
    v10 = v14;
    v11 = v15;
    v33 = v15;
    v31 = v13 | 1;
    v7 = s;
    v32 = v10;
  }
  else
  {
    LOBYTE(v31) = 2 * v9;
    v11 = (char *)&v31 + 1;
    if ( !v9 )
      goto LABEL_13;
  }
  v25 = v7;
  v16 = v10;
  memcpy(v11, v25, v10);
  v10 = v16;
LABEL_13:
  v11[v10] = 0;
  v17 = sub_6B560(v27, (unsigned __int8 *)&v31);
  v18 = a3;
  v26 = (int)v17;
  if ( (v31 & 1) != 0 )
  {
    operator delete(v33);
    v18 = a3;
  }
  v19 = a6;
  v28 = *(_DWORD *)(v27 + 12) != v29;
  if ( v18 && *v18 )
  {
    v20 = v18;
    v21 = strlen(v18);
    if ( v21 )
    {
      v30 = v21;
      v22 = v21 + 1;
      v23 = v26;
      if ( *(_DWORD *)(v26 + 8) >= v21 + 1 )
      {
        v24 = *(void **)v26;
      }
      else
      {
        v24 = qvector_reserve(v26, *(void **)v26, v22, 1u);
        v23 = v26;
        *(_DWORD *)v26 = v24;
      }
      *(_DWORD *)(v23 + 4) = v22;
      memmove(v24, v20, v30);
      v17 = (char *)v26;
      *(_BYTE *)(*(_DWORD *)v26 + v30) = 0;
    }
    else
    {
      *((_DWORD *)v17 + 1) = 0;
    }
    v19 = a6;
  }
  else
  {
    *((_DWORD *)v17 + 1) = 0;
  }
  v17[12] = a4;
  v17[13] = a5;
  if ( v19 )
    *v19 = v28;
  return 0;
}
