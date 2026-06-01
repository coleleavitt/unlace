/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078350
// Address: 0x08078350

//----- (08078350) --------------------------------------------------------
int __cdecl sub_8078350(int a1)
{
  __int16 v1; // cx
  void **v3; // ebp
  char v4; // di
  _BYTE *v5; // edx
  void *v6; // eax

  v1 = *(_WORD *)(a1 + 68) - 1;
  if ( (unsigned __int16)v1 <= 0xFu )
  {
    v3 = *(void ***)(a1 + 108);
    v4 = v1 + 64;
    *(_BYTE *)(a1 + 116) = v1 + 64;
    v5 = v3[1];
    v6 = *v3;
    if ( v3[2] < v5 + 1 )
    {
      v6 = sub_80CF920((int)v3, v6, (unsigned int)(v5 + 1), 1u);
      v5 = v3[1];
      *v3 = v6;
    }
    v5[(_DWORD)v6] = v4;
    v3[1] = (char *)v3[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    return 0;
  }
  else
  {
    sub_8078220(a1, 0x40u, v1);
    return 0;
  }
}
