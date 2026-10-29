/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91790
// Address: 0x00091790

//----- (00091790) --------------------------------------------------------
unsigned int __cdecl sub_91790(unsigned int *a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  size_t v6; // edx
  unsigned int v7; // ecx
  char *v8; // eax
  size_t v9; // edi
  const void *v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // esi
  char *v13; // eax
  unsigned int v14; // eax
  size_t v15; // esi
  void **v16; // edx
  unsigned int v17; // ecx
  char *v18; // eax
  const void *v19; // eax
  unsigned int v20; // ecx
  void *v21; // edx
  size_t v23; // [esp+0h] [ebp-1Ch]
  char v24; // [esp+6h] [ebp-16h] BYREF
  char v25; // [esp+7h] [ebp-15h] BYREF
  unsigned int v26; // [esp+8h] [ebp-14h]

  v26 = __readgsdword(0x14u);
  sub_91510(a1, 1, a4);
  v4 = unpack_dd(a4, a4[1]);
  v5 = v4;
  v6 = v4;
  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 >= v4 )
  {
    if ( v7 != v4 )
    {
      v24 = 0;
      v9 = v4;
      sub_43860((char **)a2, v4, &v24);
      v6 = v9;
    }
  }
  else
  {
    v23 = v4;
    if ( *(_DWORD *)(a2 + 8) >= v4 )
    {
      v8 = *(char **)a2;
    }
    else
    {
      v8 = (char *)qvector_reserve(a2, *(void **)a2, v4, 1u);
      *(_DWORD *)a2 = v8;
      v7 = *(_DWORD *)(a2 + 4);
    }
    memset(&v8[v7], 0, v5 - v7);
    *(_DWORD *)(a2 + 4) = v23;
    v6 = v23;
  }
  v10 = (const void *)*a4;
  v11 = a4[1];
  v12 = *a4 + v5;
  if ( v12 >= *a4 && v12 <= v11 )
  {
    v13 = *(char **)a2;
    *a4 = v12;
    memcpy(v13, v10, v6);
    v11 = a4[1];
  }
  *(_DWORD *)(a2 + 12) = unpack_dq((unsigned __int8 **)a4, v11) - 1;
  v14 = unpack_dd(a4, a4[1]);
  v15 = v14;
  v16 = (void **)(a2 + 16);
  v17 = *(_DWORD *)(a2 + 20);
  if ( v17 >= v14 )
  {
    if ( v17 != v14 )
    {
      v25 = 0;
      sub_43860((char **)(a2 + 16), v14, &v25);
      v16 = (void **)(a2 + 16);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) >= v14 )
    {
      v18 = (char *)*v16;
    }
    else
    {
      v18 = (char *)qvector_reserve(a2 + 16, *(void **)(a2 + 16), v14, 1u);
      *(_DWORD *)(a2 + 16) = v18;
      v17 = *(_DWORD *)(a2 + 20);
    }
    memset(&v18[v17], 0, v15 - v17);
    *(_DWORD *)(a2 + 20) = v15;
    v16 = (void **)(a2 + 16);
  }
  v19 = (const void *)*a4;
  v20 = *a4 + v15;
  if ( v20 >= *a4 && v20 <= a4[1] )
  {
    v21 = *v16;
    *a4 = v20;
    memcpy(v21, v19, v15);
  }
  if ( a3 )
    sub_91510(a3, 0, a4);
  return __readgsdword(0x14u);
}
