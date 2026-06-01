/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FFC0
// Address: 0x0008FFC0

//----- (0008FFC0) --------------------------------------------------------
const char *__cdecl sub_8FFC0(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // eax
  int v4; // edx
  unsigned __int8 *v5; // esi
  unsigned __int8 *v6; // eax
  bool v7; // zf
  size_t v8; // eax
  void **v9; // edx
  size_t v10; // ecx
  void *v11; // eax
  const char *v12; // esi
  const char *result; // eax
  void **v14; // edx
  _BYTE *v15; // edi
  void *v16; // eax
  int v17; // [esp+0h] [ebp-1Ch]
  size_t v18; // [esp+0h] [ebp-1Ch]
  size_t v19; // [esp+0h] [ebp-1Ch]
  size_t v20; // [esp+4h] [ebp-18h]

  v2 = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 32) = v2 - 1;
  v17 = 16 * (v2 - 1) + unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)a1 = v17 - 1;
  *(_DWORD *)(a1 + 4) = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) + v17 - 2;
  v3 = unpack_dd((unsigned int *)a2, *(_DWORD *)(a2 + 4));
  v4 = a2;
  *(_BYTE *)(a1 + 37) = v3 & 7;
  *(_BYTE *)(a1 + 36) = v3 >> 4;
  v5 = *(unsigned __int8 **)a2;
  v6 = *(unsigned __int8 **)a2;
  do
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 4) )
      goto LABEL_8;
    v7 = *v6++ == 0;
  }
  while ( !v7 );
  *(_DWORD *)a2 = v6;
  if ( !v5 || (v8 = strlen((const char *)v5), v4 = a2, !v8) )
  {
LABEL_8:
    *(_DWORD *)(a1 + 12) = 0;
    goto LABEL_9;
  }
  v9 = (void **)(a1 + 8);
  v18 = v8;
  v10 = v8 + 1;
  if ( *(_DWORD *)(a1 + 16) >= v8 + 1 )
  {
    v11 = *v9;
  }
  else
  {
    v20 = v8 + 1;
    v11 = qvector_reserve(a1 + 8, *v9, v8 + 1, 1u);
    v10 = v20;
    *(_DWORD *)(a1 + 8) = v11;
  }
  *(_DWORD *)(a1 + 12) = v10;
  memmove(v11, v5, v18);
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + v18) = 0;
  v4 = a2;
LABEL_9:
  v12 = *(const char **)v4;
  result = *(const char **)v4;
  do
  {
    if ( (unsigned int)result >= *(_DWORD *)(v4 + 4) )
      goto LABEL_16;
    v7 = *result++ == 0;
  }
  while ( !v7 );
  *(_DWORD *)v4 = result;
  if ( !v12 || (result = (const char *)strlen(v12)) == nullptr )
  {
LABEL_16:
    *(_DWORD *)(a1 + 24) = 0;
    return result;
  }
  v14 = (void **)(a1 + 20);
  v19 = (size_t)result;
  v15 = result + 1;
  if ( *(_DWORD *)(a1 + 28) >= (unsigned int)(result + 1) )
  {
    v16 = *v14;
  }
  else
  {
    v16 = qvector_reserve((int)v14, *v14, (unsigned int)(result + 1), 1u);
    *(_DWORD *)(a1 + 20) = v16;
  }
  *(_DWORD *)(a1 + 24) = v15;
  memmove(v16, v12, v19);
  result = *(const char **)(a1 + 20);
  result[v19] = 0;
  return result;
}
