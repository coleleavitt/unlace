/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91D30
// Address: 0x00091D30

//----- (00091D30) --------------------------------------------------------
_BYTE *__cdecl sub_91D30(_DWORD *a1, unsigned int *a2)
{
  int v2; // eax
  _DWORD *v3; // edx
  const char *v4; // edi
  _BYTE *result; // eax
  void **v7; // ecx
  _BYTE *v8; // esi
  void *v9; // eax
  _DWORD *v10; // edi
  const char *v11; // [esp-Ch] [ebp-28h]
  size_t v12; // [esp+8h] [ebp-14h]

  v2 = unpack_dd(a2, a2[1]);
  v3 = a1;
  a1[1] = v2;
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
  result = (_BYTE *)v10[2];
  result[v12] = 0;
  return result;
}
