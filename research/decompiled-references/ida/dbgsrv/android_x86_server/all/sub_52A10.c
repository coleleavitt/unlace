/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52A10
// Address: 0x00052A10

//----- (00052A10) --------------------------------------------------------
unsigned int __cdecl sub_52A10(int a1, int a2, int a3)
{
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD v6[7]; // [esp+0h] [ebp-1Ch] BYREF

  v6[2] = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 60);
  v4 = (_DWORD *)(a1 + 56);
  if ( v3 && *(_DWORD *)(*v4 + 8 * v3 - 8) == a2 )
  {
    *(_DWORD *)(*v4 + 8 * v3 - 4) = a3;
  }
  else
  {
    v6[0] = a2;
    v6[1] = a3;
    sub_52A90((unsigned int *)(a1 + 56), (unsigned int)v6);
  }
  return __readgsdword(0x14u);
}
