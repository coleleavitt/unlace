/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427E8
// Address: 0x000427E8

//----- (000427E8) --------------------------------------------------------
const char *__fastcall sub_427E8(int a1, char *s)
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
    ptr = sub_78018((int)&ptr, nullptr, v4 + 1, 1u);
    v10 = v4 + 1;
    memmove(ptr, s, v4);
    *((_BYTE *)ptr + v4) = 0;
  }
  v5 = sub_4253C(*(_DWORD **)(v3 + 8), (_DWORD *)(v3 + 4), (int)&ptr);
  if ( ptr )
  {
    v10 = 0;
    sub_77F70(ptr);
  }
  if ( v5 == *(_DWORD **)(v3 + 12) )
    return nullptr;
  v6 = sub_81480(v5);
  v7 = *(_DWORD *)(v6 + 20) ? *(const char **)(v6 + 16) : (const char *)&dword_8DB98;
  if ( strcmp(v7, s) >= 0 )
    return nullptr;
  return v7;
}
// 8DB98: using guessed type int dword_8DB98;
