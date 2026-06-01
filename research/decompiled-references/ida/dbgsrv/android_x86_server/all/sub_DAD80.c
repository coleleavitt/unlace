/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DAD80
// Address: 0x000DAD80

//----- (000DAD80) --------------------------------------------------------
int __usercall sub_DAD80@<eax>(int a1@<eax>, int (__cdecl *a2)(int, int, int, int)@<edx>, int a3)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // ecx
  int i; // edi
  int j; // esi
  int v8; // eax
  int v9; // [esp-Ch] [ebp-24h]
  int v10; // [esp-8h] [ebp-20h]
  int v11; // [esp+4h] [ebp-14h]
  int v12; // [esp+4h] [ebp-14h]

  result = a3;
  v4 = *(_DWORD *)(a3 + 4);
  v5 = a3 + 8;
  for ( i = (v4 >> 1) - 1; i != -1; --i )
  {
    v9 = i;
    v11 = v5;
    result = sub_DACF3(a1, a2, v5, v9, v4);
    v5 = v11;
  }
  for ( j = v4 - 1; j > 0; --j )
  {
    v8 = *(_DWORD *)(a3 + 8);
    v12 = v5;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(v5 + 4 * j);
    *(_DWORD *)(v5 + 4 * j) = v8;
    v10 = j;
    result = sub_DACF3(a1, a2, v5, 0, v10);
    v5 = v12;
  }
  return result;
}
