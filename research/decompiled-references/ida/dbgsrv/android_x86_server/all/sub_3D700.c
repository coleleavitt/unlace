/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D700
// Address: 0x0003D700

//----- (0003D700) --------------------------------------------------------
unsigned int __cdecl sub_3D700(int a1, unsigned int *a2, int *a3, char a4)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned __int32 v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned __int32 v12; // edx
  unsigned int v13; // esi
  unsigned int v15; // eax
  unsigned __int32 v16; // edi
  unsigned int v17; // esi
  unsigned int *v18; // eax
  int v19; // edx
  unsigned int v20; // esi
  size_t v21; // ecx
  void *v22; // eax
  void **v23; // esi
  unsigned int v24; // edi
  size_t v25; // ecx
  void *v26; // eax
  int v27; // esi
  size_t v28; // [esp+4h] [ebp-48h]
  unsigned int v29; // [esp+4h] [ebp-48h]
  size_t v30; // [esp+8h] [ebp-44h]
  size_t v31; // [esp+8h] [ebp-44h]
  const void *v32; // [esp+Ch] [ebp-40h]
  char *v33; // [esp+Ch] [ebp-40h]
  size_t v34; // [esp+10h] [ebp-3Ch]
  unsigned __int32 v35; // [esp+14h] [ebp-38h]
  char *v36; // [esp+18h] [ebp-34h] BYREF
  unsigned int v37; // [esp+1Ch] [ebp-30h]
  int v38; // [esp+20h] [ebp-2Ch]
  int v39; // [esp+28h] [ebp-24h] BYREF
  unsigned int v40; // [esp+2Ch] [ebp-20h]
  int v41; // [esp+30h] [ebp-1Ch]
  char v42; // [esp+37h] [ebp-15h] BYREF
  unsigned int v43; // [esp+38h] [ebp-14h]

  v43 = __readgsdword(0x14u);
  v4 = *a2;
  if ( *a2 > 0xFFFFFFFB )
    return 0;
  v5 = v4 + 4;
  v6 = a3[1];
  if ( v4 + 4 > v6 )
    return 0;
  v8 = *a3;
  v9 = _byteswap_ulong(*(_DWORD *)(*a3 + v4));
  if ( !a4 )
    v9 = *(_DWORD *)(*a3 + v4);
  v28 = v9;
  if ( v5 > 0xFFFFFFFB )
    return 0;
  v10 = v4 + 8;
  if ( v4 + 8 > v6 )
    return 0;
  v11 = *(_DWORD *)(v8 + v5);
  v12 = _byteswap_ulong(v11);
  if ( !a4 )
    v12 = v11;
  if ( v10 > 0xFFFFFFFB )
    return 0;
  v13 = v4 + 12;
  if ( v13 > v6 )
    return 0;
  v34 = v12;
  v15 = *(_DWORD *)(v8 + v10);
  v16 = _byteswap_ulong(v15);
  if ( !a4 )
    v16 = v15;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( sub_3D570((int)&v39, a3, v13, v28, 1)
    && (v36 = nullptr, v37 = 0, v38 = 0, v34 <= ~(v13 + ((v28 + 3) & 0xFFFFFFFC)))
    && v34 + v13 + ((v28 + 3) & 0xFFFFFFFC) <= a3[1] )
  {
    v35 = v16;
    v29 = v13 + ((v28 + 3) & 0xFFFFFFFC);
    v37 = 0;
    v42 = 0;
    sub_44400(&v36, v34 + 1, &v42);
    v36[v34] = 0;
    memcpy(v36, (const void *)(v29 + *a3), v34);
    v18 = a2;
    if ( a1 )
    {
      v19 = a1;
      if ( (int *)a1 != &v39 )
      {
        v20 = v40;
        if ( !v40 || (v21 = v40 - 1, v40 == 1) )
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
        else
        {
          v32 = (const void *)v39;
          if ( *(_DWORD *)(a1 + 8) >= v40 )
          {
            v22 = *(void **)a1;
          }
          else
          {
            v30 = v40 - 1;
            v22 = qvector_reserve(a1, *(void **)a1, v40, 1u);
            v19 = a1;
            *(_DWORD *)a1 = v22;
            v21 = v30;
          }
          *(_DWORD *)(v19 + 4) = v20;
          memmove(v22, v32, v21);
          v19 = a1;
          *(_BYTE *)(*(_DWORD *)a1 + v20 - 1) = 0;
          v18 = a2;
        }
      }
      v23 = (void **)(v19 + 12);
      if ( (char **)(v19 + 12) != &v36 )
      {
        v24 = v37;
        if ( !v37 || (v25 = v37 - 1, v37 == 1) )
        {
          *(_DWORD *)(v19 + 16) = 0;
        }
        else
        {
          v33 = v36;
          if ( *(_DWORD *)(v19 + 20) >= v37 )
          {
            v26 = *v23;
          }
          else
          {
            v31 = v37 - 1;
            v26 = qvector_reserve(v19 + 12, *v23, v37, 1u);
            *v23 = v26;
            v19 = a1;
            v25 = v31;
          }
          *(_DWORD *)(v19 + 16) = v24;
          v27 = v19;
          memmove(v26, v33, v25);
          v19 = v27;
          *(_BYTE *)(*(_DWORD *)(v27 + 12) + v24 - 1) = 0;
          v18 = a2;
        }
      }
      *(_DWORD *)(v19 + 24) = v35;
    }
    v7 = v29 + ((v34 + 3) & 0xFFFFFFFC);
    *v18 = v7;
    LOBYTE(v7) = 1;
    if ( v36 )
    {
      v37 = 0;
      qfree(v36);
      v36 = nullptr;
      v38 = 0;
      LOBYTE(v7) = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v39 )
  {
    v17 = v7;
    v40 = 0;
    qfree((void *)v39);
    v39 = 0;
    v41 = 0;
    return v17;
  }
  return v7;
}
// 3D78F: variable 'v7' is possibly undefined
