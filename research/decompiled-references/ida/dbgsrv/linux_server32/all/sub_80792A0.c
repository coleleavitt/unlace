/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80792A0
// Address: 0x080792A0

//----- (080792A0) --------------------------------------------------------
void *__cdecl sub_80792A0(int a1, unsigned int a2)
{
  char v2; // si
  void **v3; // edi
  _BYTE *v4; // edx
  void *v5; // eax
  void *result; // eax
  _BYTE *v7; // edx
  _BYTE *v8; // edx
  void *v9; // eax

  v2 = a2;
  v3 = *(void ***)(a1 + 108);
  if ( a2 <= 0xF )
  {
    v2 = a2 - 32;
    *(_BYTE *)(a1 + 116) = a2 - 32;
  }
  else
  {
    if ( (char)a2 != a2 )
    {
      *(_BYTE *)(a1 + 116) = -89;
      v4 = v3[1];
      v5 = *v3;
      if ( v3[2] < v4 + 1 )
      {
        v5 = sub_80CF920((int)v3, v5, (unsigned int)(v4 + 1), 1u);
        v4 = v3[1];
        *v3 = v5;
      }
      v4[(_DWORD)v5] = -89;
      v3[1] = (char *)v3[1] + 1;
      ++*(_DWORD *)(a1 + 112);
      sub_8078190(a1, a2);
      return sub_8078190(a1, SHIWORD(a2));
    }
    *(_BYTE *)(a1 + 116) = -96;
    v8 = v3[1];
    v9 = *v3;
    if ( v3[2] < v8 + 1 )
    {
      v9 = sub_80CF920((int)v3, v9, (unsigned int)(v8 + 1), 1u);
      v8 = v3[1];
      *v3 = v9;
    }
    v8[(_DWORD)v9] = -96;
    v3[1] = (char *)v3[1] + 1;
    v3 = *(void ***)(a1 + 108);
    ++*(_DWORD *)(a1 + 112);
  }
  v7 = v3[1];
  result = *v3;
  if ( v3[2] < v7 + 1 )
  {
    result = sub_80CF920((int)v3, result, (unsigned int)(v7 + 1), 1u);
    v7 = v3[1];
    *v3 = result;
  }
  v7[(_DWORD)result] = v2;
  v3[1] = (char *)v3[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return result;
}
