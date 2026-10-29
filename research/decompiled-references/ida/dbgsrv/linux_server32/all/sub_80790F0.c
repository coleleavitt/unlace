/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80790F0
// Address: 0x080790F0

//----- (080790F0) --------------------------------------------------------
void *__cdecl sub_80790F0(int a1, char a2, __int16 a3)
{
  char v3; // dl
  char v4; // cl
  void **v5; // esi
  char v6; // cl
  _BYTE *v7; // edx
  void *v8; // eax
  void *result; // eax
  _BYTE *v10; // ebx
  void *v11; // eax
  void **v12; // esi
  _BYTE *v13; // ecx
  char v14; // [esp+4h] [ebp-24h]

  v3 = a3;
  v4 = a2;
  v5 = *(void ***)(a1 + 108);
  if ( (unsigned __int8)a3 == a3 )
  {
    *(_BYTE *)(a1 + 116) = a2;
    v10 = v5[1];
    v11 = *v5;
    if ( v5[2] < v10 + 1 )
    {
      v11 = sub_80CF920((int)v5, v11, (unsigned int)(v10 + 1), 1u);
      v10 = v5[1];
      v3 = a3;
      *v5 = v11;
      v4 = a2;
    }
    v10[(_DWORD)v11] = v4;
    v5[1] = (char *)v5[1] + 1;
    v12 = *(void ***)(a1 + 108);
    ++*(_DWORD *)(a1 + 112);
    v13 = v12[1];
    result = *v12;
    if ( v12[2] < v13 + 1 )
    {
      v14 = v3;
      result = sub_80CF920((int)v12, result, (unsigned int)(v13 + 1), 1u);
      v13 = v12[1];
      v3 = v14;
      *v12 = result;
    }
    v13[(_DWORD)result] = v3;
    v12[1] = (char *)v12[1] + 1;
    ++*(_DWORD *)(a1 + 112);
  }
  else
  {
    v6 = a2 + 1;
    *(_BYTE *)(a1 + 116) = a2 + 1;
    v7 = v5[1];
    v8 = *v5;
    if ( v5[2] < v7 + 1 )
    {
      v8 = sub_80CF920((int)v5, v8, (unsigned int)(v7 + 1), 1u);
      v7 = v5[1];
      v6 = a2 + 1;
      *v5 = v8;
    }
    v7[(_DWORD)v8] = v6;
    v5[1] = (char *)v5[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    return sub_8078190(a1, a3);
  }
  return result;
}
