/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B880
// Address: 0x0041B880

//----- (0041B880) --------------------------------------------------------
int __stdcall sub_41B880(int a1, int a2)
{
  char *v2; // eax
  int v3; // eax
  void *v5; // [esp+4h] [ebp-18h] BYREF
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+18h] [ebp-4h]

  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = (char *)MultiByteStr;
  sub_4560B0(v2, &v5);
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v6;
  v3 = v7;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 16) = v3;
  return 0;
}
