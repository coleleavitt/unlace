/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_370E4
// Address: 0x000370E4

//----- (000370E4) --------------------------------------------------------
int __fastcall sub_370E4(int a1, int a2)
{
  const char *v3; // r6
  char *v4; // r0
  char *v5; // r5
  size_t v6; // r9
  const char *v7; // r0
  const char *v8; // r0
  void *v9; // r3
  void *v11; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  size_t v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h]

  if ( *(_DWORD *)(a1 + 12) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = (const char *)&dword_8DA5C;
  v4 = strchr(v3, 61);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 - v3;
    ptr = nullptr;
    v13 = 0;
    v14 = 0;
    if ( v4 == v3
      || (v6 != -1 ? (v11 = sub_77EB0((int)&ptr, nullptr, v6 + 1, 1u), ptr = v11) : (v11 = nullptr),
          v13 = v6 + 1,
          memmove(v11, v3, v6),
          *((_BYTE *)ptr + v6) = 0,
          v7 = (const char *)ptr,
          !v13) )
    {
      v7 = (const char *)&dword_8DA5C;
    }
    v8 = sub_7A6DC(v7, v5 + 1);
    v9 = ptr;
    *(_DWORD *)(a2 + 8) = v8;
    if ( v9 )
    {
      v13 = 0;
      sub_77E08(v9);
    }
  }
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
