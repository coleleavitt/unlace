/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4810B4
// Address: 0x004810B4

//----- (004810B4) --------------------------------------------------------
int __cdecl sub_4810B4(_DWORD *a1, int a2, DWORD dwCmpFlags, CHAR *a4, int a5, const CHAR *a6, int a7, UINT CodePage)
{
  int result; // eax
  int v9; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+4h] [ebp-Ch] BYREF
  char v11; // [esp+Ch] [ebp-4h]

  sub_467FF8((int)&v9, a1);
  result = sub_480E29((int)&v10, a2, dwCmpFlags, a4, a5, a6, a7, CodePage);
  if ( v11 )
    *(_DWORD *)(v9 + 848) &= ~2u;
  return result;
}
