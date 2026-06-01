/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90920
// Address: 0x00090920

//----- (00090920) --------------------------------------------------------
_BYTE *__cdecl sub_90920(int a1, unsigned int *a2)
{
  int v2; // eax
  int v3; // edx
  const char *v4; // esi
  _BYTE *result; // eax
  void **v7; // ecx
  _BYTE *v8; // edi
  void *v9; // eax
  int v10; // esi
  const char *v11; // [esp-Ch] [ebp-28h]
  size_t v12; // [esp+8h] [ebp-14h]

  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = unpack_dd(a2, a2[1]) != 0;
  v2 = unpack_dq((unsigned __int8 **)a2, a2[1]);
  v3 = a1;
  *(_DWORD *)(a1 + 8) = v2 - 1;
  v4 = (const char *)*a2;
  result = (_BYTE *)*a2;
  do
  {
    if ( (unsigned int)result >= a2[1] )
      goto LABEL_8;
  }
  while ( *result++ != 0 );
  *a2 = (unsigned int)result;
  if ( !v4 || (result = (_BYTE *)strlen(v4), v3 = a1, !result) )
  {
LABEL_8:
    *(_DWORD *)(v3 + 16) = 0;
    return result;
  }
  v7 = (void **)(a1 + 12);
  v12 = (size_t)result;
  v8 = result + 1;
  if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(result + 1) )
  {
    v9 = *v7;
  }
  else
  {
    v9 = qvector_reserve(a1 + 12, *v7, (unsigned int)(result + 1), 1u);
    v3 = a1;
    *(_DWORD *)(a1 + 12) = v9;
  }
  *(_DWORD *)(v3 + 16) = v8;
  v11 = v4;
  v10 = v3;
  memmove(v9, v11, v12);
  result = *(_BYTE **)(v10 + 12);
  result[v12] = 0;
  return result;
}
