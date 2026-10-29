/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_312D0
// Address: 0x000312D0

//----- (000312D0) --------------------------------------------------------
_DWORD *__cdecl sub_312D0(_DWORD *a1, char *s)
{
  _DWORD *result; // eax
  size_t v3; // eax
  _DWORD *v4; // ecx
  size_t v5; // edx
  int v6; // eax
  int v7; // esi
  unsigned int v8; // edi
  _BYTE *v9; // eax
  size_t v10; // [esp+4h] [ebp-18h]
  size_t v11; // [esp+8h] [ebp-14h]

  result = a1;
  if ( s )
  {
    v3 = strlen(s);
    v4 = a1;
    v5 = v3;
    v6 = a1[1];
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    v11 = v7 + v5;
    v8 = v7 + v5 + 1;
    if ( a1[2] >= v8 )
    {
      v9 = (_BYTE *)*a1;
    }
    else
    {
      v10 = v5;
      v9 = qvector_reserve((int)a1, (void *)*a1, v7 + v5 + 1, 1u);
      v5 = v10;
      v4 = a1;
      *a1 = v9;
    }
    v4[1] = v8;
    v9[v11] = 0;
    memmove((void *)(*v4 + v7), s, v5);
    return a1;
  }
  return result;
}
