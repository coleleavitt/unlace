/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078190
// Address: 0x08078190

//----- (08078190) --------------------------------------------------------
void *__cdecl sub_8078190(int a1, __int16 a2)
{
  void **v2; // edi
  _BYTE *v3; // edx
  void *v4; // eax
  void **v5; // edi
  _BYTE *v6; // edx
  void *result; // eax

  v2 = *(void ***)(a1 + 108);
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
    v3 = v2[1];
    *v2 = v4;
  }
  v3[(_DWORD)v4] = a2;
  v2[1] = (char *)v2[1] + 1;
  v5 = *(void ***)(a1 + 108);
  ++*(_DWORD *)(a1 + 112);
  v6 = v5[1];
  result = *v5;
  if ( v5[2] < v6 + 1 )
  {
    result = sub_80CF920((int)v5, result, (unsigned int)(v6 + 1), 1u);
    v6 = v5[1];
    *v5 = result;
  }
  v6[(_DWORD)result] = HIBYTE(a2);
  v5[1] = (char *)v5[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return result;
}
