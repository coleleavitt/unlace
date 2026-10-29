/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D98C
// Address: 0x0005D98C

//----- (0005D98C) --------------------------------------------------------
void **__fastcall sub_5D98C(int *a1)
{
  unsigned int v1; // r2
  void **v3; // r6
  const char *v5; // r8
  const char *v6; // r1
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch]
  int v9; // [sp+8h] [bp-8h]

  v1 = a1[3];
  if ( v1 < 0xA || v1 > 0xB && v1 != 18 )
    return nullptr;
  v5 = (const char *)*a1;
  v3 = sub_5C6A0((int)(a1 + 4), *a1, v1);
  if ( !v3 )
  {
    ptr = nullptr;
    v8 = 0;
    v9 = 0;
    sub_5D900((int)a1, (int)&ptr);
    if ( dword_D4B38 && *(_BYTE *)(dword_D4B38 + 96) )
    {
      if ( v8 )
        v6 = (const char *)ptr;
      else
        v6 = (const char *)&dword_8DB98;
      sub_171B0((int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v6, v5);
    }
    if ( ptr )
    {
      v8 = 0;
      sub_77F70(ptr);
    }
  }
  return v3;
}
// 8DB98: using guessed type int dword_8DB98;
// D4B38: using guessed type int dword_D4B38;
