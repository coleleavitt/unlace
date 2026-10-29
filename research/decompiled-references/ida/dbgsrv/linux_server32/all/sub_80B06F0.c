/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B06F0
// Address: 0x080B06F0

//----- (080B06F0) --------------------------------------------------------
int __cdecl sub_80B06F0(int a1, int a2, int a3)
{
  int v3; // ecx
  unsigned int v5; // ebp
  size_t v6; // edx
  const void *v7; // ecx
  void *v8; // eax
  int v9; // [esp-14h] [ebp-38h]
  int v10; // [esp-10h] [ebp-34h]
  int v11; // [esp-Ch] [ebp-30h]
  const void *v12; // [esp+4h] [ebp-20h]

  if ( *(_BYTE *)(a2 + 17) )
  {
    if ( a1 && a2 != a1 )
    {
      v5 = *(_DWORD *)(a2 + 4);
      if ( v5 && (v6 = v5 - 1, v5 != 1) )
      {
        v7 = *(const void **)a2;
        v8 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v5 )
        {
          v12 = *(const void **)a2;
          v8 = sub_80CF920(a1, v8, v5, 1u);
          v7 = v12;
          v6 = v5 - 1;
          *(_DWORD *)a1 = v8;
        }
        *(_DWORD *)(a1 + 4) = v5;
        memmove(v8, v7, v6);
        *(_BYTE *)(*(_DWORD *)a1 + v5 - 1) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
    }
    return 0;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
    if ( (unsigned int)(v3 - 10) > 1 && v3 != 18 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(30222, v9, v10, v11);
      JUMPOUT(0x8050B84);
    }
    return sub_80B0340((void **)a1, a2, a3);
  }
}
// 80B079E: control flows out of bounds to 8050B84
// 80B07AE: variable 'v9' is possibly undefined
// 80B07AE: variable 'v10' is possibly undefined
// 80B07AE: variable 'v11' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
