/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DACF3
// Address: 0x000DACF3

//----- (000DACF3) --------------------------------------------------------
int __usercall sub_DACF3@<eax>(int result@<eax>, int (__cdecl *a2)(int, int, int, int)@<edx>, int a3, int a4, int a5)
{
  int v5; // edx
  int v6; // esi
  int *v7; // edx
  int v8; // [esp+0h] [ebp-18h]
  int *v9; // [esp+0h] [ebp-18h]
  int *v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+4h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-Ch]

  v5 = a4;
  v13 = result;
  v6 = 2 * a4 + 1;
  while ( v6 < a5 )
  {
    if ( v6 + 1 < a5 )
    {
      v8 = v5;
      result = a2(v13, *(_DWORD *)(a3 + 4 * (v6 + 1) - 4), *(_DWORD *)(a3 + 4 * (v6 + 1)), v5);
      v5 = v8;
      if ( result < 0 )
        ++v6;
    }
    v9 = (int *)(a3 + 4 * v6);
    v10 = (int *)(a3 + 4 * v5);
    result = a2(v13, *v10, *v9, result);
    if ( result >= 0 )
      break;
    v7 = v10;
    v11 = *v10;
    *v7 = *v9;
    v5 = v6;
    result = v11;
    v6 = 2 * v6 + 1;
    *v9 = v11;
  }
  return result;
}
