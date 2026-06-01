/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BAF0
// Address: 0x0007BAF0

//----- (0007BAF0) --------------------------------------------------------
int __cdecl sub_7BAF0(int a1)
{
  unsigned int v1; // eax
  int v2; // edx
  int v3; // ecx
  bool v4; // al
  void *v6; // [esp+18h] [ebp-24h] BYREF
  int v7; // [esp+1Ch] [ebp-20h]
  int v8; // [esp+20h] [ebp-1Ch]
  unsigned int v9; // [esp+28h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 12);
  v2 = 0;
  if ( v1 <= 0x12 )
  {
    v3 = 265216;
    if ( _bittest(&v3, v1) )
    {
      v4 = sub_7BA60(a1 + 16, *(char **)a1, v1);
      LOBYTE(v2) = 1;
      if ( !v4 )
      {
        v6 = nullptr;
        v7 = 0;
        v8 = 0;
        sub_7AEC0((_DWORD *)a1, (int)&v6);
        if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
          sub_1C900();
        if ( v6 )
        {
          v7 = 0;
          qfree(v6);
          v6 = nullptr;
          v8 = 0;
        }
        return 0;
      }
    }
  }
  return v2;
}
// 7BBE9: variable 'v2' is possibly undefined
// 13BE90: using guessed type int dword_13BE90;
