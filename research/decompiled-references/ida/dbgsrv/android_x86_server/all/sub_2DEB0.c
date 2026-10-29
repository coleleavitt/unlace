/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DEB0
// Address: 0x0002DEB0

//----- (0002DEB0) --------------------------------------------------------
_DWORD *__cdecl sub_2DEB0(_DWORD *a1, int a2)
{
  _DWORD *v2; // edx
  int v3; // esi
  void *v4; // edi
  void *v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  int v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch]

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = qalloc_or_throw(4 * v3);
    memcpy(v4, *(const void **)a2, 4 * v3);
    v2 = a1;
  }
  else
  {
    v4 = nullptr;
  }
  v9 = v3;
  v10 = v3;
  v5 = (void *)*v2;
  v6 = v3;
  if ( *v2 )
  {
    v2[1] = 0;
    v7 = v2;
    qfree(v5);
    *v7 = 0;
    v7[2] = 0;
    v6 = v9;
    v2 = v7;
    v3 = v10;
  }
  *v2 = v4;
  v2[1] = v6;
  v2[2] = v3;
  return v2;
}
