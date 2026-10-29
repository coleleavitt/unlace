/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90280
// Address: 0x00090280

//----- (00090280) --------------------------------------------------------
unsigned __int8 *__cdecl sub_90280(_DWORD *a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // edx
  unsigned __int8 *v4; // esi
  unsigned __int8 *result; // eax
  void **v7; // ecx
  unsigned __int8 *v8; // edi
  void *v9; // eax
  _DWORD *v10; // esi
  unsigned __int8 *v11; // [esp-Ch] [ebp-28h]
  size_t v12; // [esp+8h] [ebp-14h]

  *a1 = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  v2 = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v3 = a1;
  a1[1] = v2 - 1;
  v4 = *(unsigned __int8 **)a2;
  result = *(unsigned __int8 **)a2;
  do
  {
    if ( (unsigned int)result >= *(_DWORD *)(a2 + 4) )
      goto LABEL_8;
  }
  while ( *result++ != 0 );
  *(_DWORD *)a2 = result;
  if ( !v4 || (result = (unsigned __int8 *)strlen((const char *)v4), v3 = a1, !result) )
  {
LABEL_8:
    v3[3] = 0;
    return result;
  }
  v7 = (void **)(a1 + 2);
  v12 = (size_t)result;
  v8 = result + 1;
  if ( a1[4] >= (unsigned int)(result + 1) )
  {
    v9 = *v7;
  }
  else
  {
    v9 = qvector_reserve((int)(a1 + 2), *v7, (unsigned int)(result + 1), 1u);
    v3 = a1;
    a1[2] = v9;
  }
  v3[3] = v8;
  v11 = v4;
  v10 = v3;
  memmove(v9, v11, v12);
  result = (unsigned __int8 *)v10[2];
  result[v12] = 0;
  return result;
}
