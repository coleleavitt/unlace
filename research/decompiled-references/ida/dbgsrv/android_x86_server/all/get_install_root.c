/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_install_root
// Address: 0x000A9F80

//----- (000A9F80) --------------------------------------------------------
unsigned int __cdecl get_install_root(int a1)
{
  char *v1; // eax
  void *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v6; // [esp+8h] [ebp-24h] BYREF
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+10h] [ebp-1Ch]
  unsigned int v9; // [esp+18h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v1 = idadir(nullptr);
  sub_1B530((int)&v6, v1);
  v2 = *(void **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v8;
  v6 = (int)v2;
  v7 = v3;
  v8 = v4;
  if ( v2 )
  {
    v7 = 0;
    qfree(v2);
    v6 = 0;
    v8 = 0;
  }
  return __readgsdword(0x14u);
}
