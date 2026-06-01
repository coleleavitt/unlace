/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8074920
// Address: 0x08074920

//----- (08074920) --------------------------------------------------------
char *__cdecl sub_8074920(int a1, int a2)
{
  int v2; // ebx
  const char *v3; // eax
  const char *v4; // eax
  char *v5; // edi
  void *ptr; // [esp+0h] [ebp-28h] BYREF
  int v8; // [esp+4h] [ebp-24h]
  int v9; // [esp+8h] [ebp-20h]
  unsigned int v10; // [esp+Ch] [ebp-1Ch]

  v10 = __readgsdword(0x14u);
  ptr = nullptr;
  v2 = *(_DWORD *)(a1 + 8);
  v8 = 0;
  v9 = 0;
  v3 = (const char *)&dword_80DDFD8;
  if ( v2 )
    v3 = *(const char **)(a1 + 4);
  if ( (unsigned __int8)sub_8081BC0(nullptr, v3, &ptr, 0) )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v5 = nullptr;
  }
  else
  {
    v4 = (const char *)&dword_80DDFD8;
    if ( v8 )
      v4 = (const char *)ptr;
    v5 = sub_80747C0(a2, v4);
  }
  if ( ptr )
  {
    v8 = 0;
    sub_80CF780(ptr);
  }
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
