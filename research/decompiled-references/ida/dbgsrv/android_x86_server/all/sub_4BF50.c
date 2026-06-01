/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BF50
// Address: 0x0004BF50

//----- (0004BF50) --------------------------------------------------------
_DWORD *__userpurge sub_4BF50@<eax>(_DWORD *a1, int *a2)
{
  _DWORD *v2; // edx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  size_t v6; // edi
  void *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // esi
  void *v11; // eax
  int v13; // [esp+18h] [ebp-14h]

  v2 = a1;
  v3 = *a2;
  v4 = a2[1];
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = 3 * (v4 - 1);
  v13 = v3;
  v6 = *(_DWORD *)(v3 + 12 * (v4 - 1) + 4);
  if ( v6 )
  {
    v7 = qalloc_or_throw(v6);
    *a1 = v7;
    a1[2] = v6;
    memcpy(v7, *(const void **)(v13 + 4 * v5), v6);
    v2 = a1;
    a1[1] = v6;
    v4 = a2[1];
  }
  if ( v4 )
  {
    v8 = *a2;
    v9 = v4 - 1;
    a2[1] = v9;
    v10 = 3 * v9;
    v11 = *(void **)(v8 + 12 * v9);
    if ( v11 )
    {
      *(_DWORD *)(v8 + 4 * v10 + 4) = 0;
      qfree(v11);
      *(_DWORD *)(v8 + 4 * v10) = 0;
      *(_DWORD *)(v8 + 4 * v10 + 8) = 0;
      return a1;
    }
  }
  return v2;
}
