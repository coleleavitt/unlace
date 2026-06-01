/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80783E0
// Address: 0x080783E0

//----- (080783E0) --------------------------------------------------------
int __cdecl sub_80783E0(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax
  __int16 v4; // cx
  void **v6; // edi
  _BYTE *v7; // edx
  void *v8; // eax
  char v9; // [esp+0h] [ebp-20h]

  if ( dword_811D3C4[3] <= 0 )
    return 1612;
  v1 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -44;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v3 = sub_80CF920((int)v1, v3, (unsigned int)(v2 + 1), 1u);
    v2 = v1[1];
    *v1 = v3;
  }
  v2[(_DWORD)v3] = -44;
  v1[1] = (char *)v1[1] + 1;
  v4 = dword_811D3C4[3];
  ++*(_DWORD *)(a1 + 112);
  if ( (unsigned __int16)v4 <= 0xFu )
  {
    v6 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = v4;
    v7 = v6[1];
    v8 = *v6;
    if ( v6[2] < v7 + 1 )
    {
      v9 = v4;
      v8 = sub_80CF920((int)v6, v8, (unsigned int)(v7 + 1), 1u);
      v7 = v6[1];
      LOBYTE(v4) = v9;
      *v6 = v8;
    }
    v7[(_DWORD)v8] = v4;
    v6[1] = (char *)v6[1] + 1;
    ++*(_DWORD *)(a1 + 112);
  }
  else
  {
    sub_8078220(a1, 0, v4);
  }
  return 0;
}
// 811D3C4: using guessed type int dword_811D3C4[7];
