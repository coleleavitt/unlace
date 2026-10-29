/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8058B70
// Address: 0x08058B70

//----- (08058B70) --------------------------------------------------------
int __cdecl sub_8058B70(int a1, const void *a2, unsigned int a3, int a4)
{
  void *v4; // eax
  char *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp-38h] [ebp-38h]
  int v9; // [esp-34h] [ebp-34h]
  int v10; // [esp-30h] [ebp-30h]

  if ( *(int *)a1 >= -1 )
  {
    v4 = *(void **)(a1 + 4);
    if ( v4 )
    {
      *(_DWORD *)(a1 + 8) = 0;
      sub_80CF780(v4);
    }
    *(_DWORD *)a1 = -2;
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  if ( a3 )
  {
    v5 = (char *)sub_80CF920(a1 + 4, nullptr, a3, 1u);
    v6 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) = v5;
    memset(&v5[v6], 0, a3 - v6);
    *(_DWORD *)(a1 + 8) = a3;
    memcpy(*(void **)(a1 + 4), a2, a3);
  }
  result = a4;
  *(_DWORD *)a1 = a4;
  if ( a4 < -1 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(3214, v8, v9, v10);
    BUG();
  }
  return result;
}
// 8058C35: variable 'v8' is possibly undefined
// 8058C35: variable 'v9' is possibly undefined
// 8058C35: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
