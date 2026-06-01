/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AFE0
// Address: 0x0007AFE0

//----- (0007AFE0) --------------------------------------------------------
int __cdecl sub_7AFE0(int a1)
{
  char *v1; // eax
  _DWORD *v2; // eax
  int v3; // edi
  _DWORD *v5; // [esp+1Ch] [ebp-260h]
  int (__cdecl **v6)(int, int, int); // [esp+20h] [ebp-25Ch] BYREF
  void *v7; // [esp+24h] [ebp-258h]
  int v8; // [esp+28h] [ebp-254h]
  int v9; // [esp+2Ch] [ebp-250h]
  int v10; // [esp+258h] [ebp-24h]
  unsigned int v11; // [esp+268h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 4) )
    v1 = *(char **)a1;
  else
    v1 = byte_EF875;
  v2 = open_linput(v1, 0);
  v3 = 0;
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 12) == 11 )
    {
      v6 = &off_13839C;
      v7 = nullptr;
      v8 = 0;
      v9 = 0;
      v5 = v2;
      v3 = 0;
      if ( sub_7A850((int)&v6, (int)v2, 1, 1u) )
        v3 = v10;
      v6 = &off_13839C;
      if ( v7 )
      {
        v8 = 0;
        qfree(v7);
        v7 = nullptr;
        v9 = 0;
      }
      v2 = v5;
    }
    close_linput(v2);
  }
  return v3;
}
// 13839C: using guessed type int (__cdecl *off_13839C)(int, int, int off);
