/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42658
// Address: 0x00042658

//----- (00042658) --------------------------------------------------------
const char *__fastcall sub_42658(int a1, char *s)
{
  int v3; // r8
  size_t v4; // r10
  _DWORD *v5; // r5
  int v6; // r0
  const char *v7; // r4
  void *ptr; // [sp+0h] [bp-14h] BYREF
  size_t v10; // [sp+4h] [bp-10h]
  int v11; // [sp+8h] [bp-Ch]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v3 = *(_DWORD *)(a1 + 8);
  ptr = nullptr;
  v10 = 0;
  v11 = 0;
  if ( s )
  {
    v4 = strlen(s);
    ptr = sub_77EB0((int)&ptr, nullptr, v4 + 1, 1u);
    v10 = v4 + 1;
    memmove(ptr, s, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  v5 = sub_423AC(*(_DWORD **)(v3 + 8), (_DWORD *)(v3 + 4), (int)&ptr);
  if ( ptr )
  {
    v10 = 0;
    sub_77E08(ptr);
  }
  if ( v5 == *(_DWORD **)(v3 + 12) )
    return nullptr;
  v6 = sub_812D0(v5);
  v7 = *(_DWORD *)(v6 + 20) ? *(const char **)(v6 + 16) : (const char *)&dword_8DA5C;
  if ( strcmp(v7, s) >= 0 )
    return nullptr;
  return v7;
}
// 8DA5C: using guessed type int dword_8DA5C;
