/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4259C
// Address: 0x0004259C

//----- (0004259C) --------------------------------------------------------
int *__fastcall sub_4259C(int a1, char *s)
{
  int v3; // r8
  size_t v4; // r10
  _DWORD *v5; // r5
  void *ptr; // [sp+0h] [bp-14h] BYREF
  size_t v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v3 = *(_DWORD *)(a1 + 8);
  ptr = nullptr;
  v8 = 0;
  v9 = 0;
  if ( s )
  {
    v4 = strlen(s);
    ptr = sub_77EB0((int)&ptr, nullptr, v4 + 1, 1u);
    v8 = v4 + 1;
    memmove(ptr, s, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  v5 = sub_423FC(*(_DWORD **)(v3 + 8), (_DWORD *)(v3 + 4), (int)&ptr);
  if ( ptr )
  {
    v8 = 0;
    sub_77E08(ptr);
  }
  if ( (_DWORD *)(v3 + 4) == v5 )
    return nullptr;
  if ( v5[5] )
    return (int *)v5[4];
  return &dword_8DA5C;
}
// 8DA5C: using guessed type int dword_8DA5C;
