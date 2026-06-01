/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079930
// Address: 0x08079930

//----- (08079930) --------------------------------------------------------
int __cdecl sub_8079930(int a1, char *s)
{
  void **v2; // edi
  _BYTE *v3; // edx
  void *v4; // eax
  char v5; // cl
  void **v7; // edi
  _BYTE *v8; // edx
  void *v9; // eax
  char v10; // [esp+0h] [ebp-20h]

  if ( dword_811D3C4[1] <= 0 )
    return 1611;
  v2 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -44;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
    v3 = v2[1];
    *v2 = v4;
  }
  v3[(_DWORD)v4] = -44;
  v2[1] = (char *)v2[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  sub_8078F10(a1, s, 0);
  v5 = dword_811D3C4[1];
  if ( LOWORD(dword_811D3C4[1]) <= 0xFu )
  {
    v7 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = dword_811D3C4[1];
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < v8 + 1 )
    {
      v10 = v5;
      v9 = sub_80CF920((int)v7, v9, (unsigned int)(v8 + 1), 1u);
      v8 = v7[1];
      v5 = v10;
      *v7 = v9;
    }
    v8[(_DWORD)v9] = v5;
    v7[1] = (char *)v7[1] + 1;
    ++*(_DWORD *)(a1 + 112);
  }
  else
  {
    sub_8078220(a1, 0, dword_811D3C4[1]);
  }
  return 0;
}
// 811D3C4: using guessed type int dword_811D3C4[7];
