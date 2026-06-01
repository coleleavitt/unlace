/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077A20
// Address: 0x08077A20

//----- (08077A20) --------------------------------------------------------
unsigned int __cdecl sub_8077A20(int a1, char *s, int a3)
{
  unsigned int result; // eax
  __int64 v4; // [esp-18h] [ebp-54h]
  size_t n; // [esp+Ch] [ebp-30h]
  _DWORD *v6; // [esp+10h] [ebp-2Ch]
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  size_t v8; // [esp+18h] [ebp-24h]
  int v9; // [esp+1Ch] [ebp-20h]
  unsigned int v10; // [esp+20h] [ebp-1Ch]

  v10 = __readgsdword(0x14u);
  v6 = *(_DWORD **)(a1 + 104);
  if ( v6 )
  {
    ptr = nullptr;
    v8 = 0;
    v9 = 0;
    if ( s )
    {
      n = strlen(s);
      ptr = sub_80CF920((int)&ptr, nullptr, n + 1, 1u);
      v8 = n + 1;
      memmove(ptr, s, n);
      *((_BYTE *)ptr + n) = 0;
    }
    sub_8080040(v6, *(_DWORD *)(a1 + 112), (int)&ptr);
    if ( ptr )
    {
      v8 = 0;
      sub_80CF780(ptr);
    }
    HIDWORD(v4) = a3;
    LODWORD(v4) = *(_DWORD *)(a1 + 112);
    sub_8080400(*(_DWORD **)(a1 + 104), v4);
  }
  result = v10 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
