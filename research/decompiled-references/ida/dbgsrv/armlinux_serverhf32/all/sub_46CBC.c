/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CBC
// Address: 0x00046CBC

//----- (00046CBC) --------------------------------------------------------
int __fastcall sub_46CBC(int a1, char *s)
{
  int v3; // r4
  size_t v6; // r9
  unsigned __int8 *v7; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  size_t v9; // [sp+4h] [bp-Ch]
  int v10; // [sp+8h] [bp-8h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return sub_70A2C(1532);
  ptr = nullptr;
  v9 = 0;
  v10 = 0;
  if ( s )
  {
    v6 = strlen(s);
    ptr = sub_77EB0((int)&ptr, nullptr, v6 + 1, 1u);
    v9 = v6 + 1;
    memmove(ptr, s, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = sub_46BAC(*(_DWORD **)(a1 + 8), &ptr);
  v3 = 0;
  if ( !v7 )
  {
    sub_70A98(0, s);
    v3 = sub_70A2C(1538);
  }
  if ( ptr )
  {
    v9 = 0;
    sub_77E08(ptr);
  }
  return v3;
}
