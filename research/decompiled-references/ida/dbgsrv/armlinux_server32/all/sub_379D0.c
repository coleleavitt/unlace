/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_379D0
// Address: 0x000379D0

//----- (000379D0) --------------------------------------------------------
int __fastcall sub_379D0(int a1, int a2)
{
  int v3; // r1
  const char *v4; // r1
  const char *v5; // r1
  int v6; // r4
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+4h] [bp-Ch]
  int v10; // [sp+8h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 12);
  ptr = nullptr;
  v9 = 0;
  v10 = 0;
  if ( v3 )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = (const char *)&dword_8DB98;
  if ( sub_3FFE0(nullptr, v4, &ptr, 0) )
  {
    v6 = 0;
    *(_DWORD *)(a2 + 8) = 1;
  }
  else
  {
    if ( v9 )
      v5 = (const char *)ptr;
    else
      v5 = (const char *)&dword_8DB98;
    v6 = sub_378E4((_BYTE *)a2, v5);
  }
  if ( ptr )
  {
    v9 = 0;
    sub_77F70(ptr);
  }
  return v6;
}
// 8DB98: using guessed type int dword_8DB98;
