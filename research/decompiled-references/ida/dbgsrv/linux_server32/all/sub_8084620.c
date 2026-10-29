/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084620
// Address: 0x08084620

//----- (08084620) --------------------------------------------------------
const char *__cdecl sub_8084620(int a1, const char *a2)
{
  int v2; // eax
  size_t v3; // esi
  char *v4; // edx
  char *v5; // esi
  bool v6; // al
  bool v7; // zf
  int *v8; // eax
  const char *v9; // ecx
  const char *v10; // eax
  int v11; // eax
  char *v12; // ecx
  int v13; // eax
  int v14; // edx
  const char *v15; // esi
  int v16; // eax
  int v18; // [esp+8h] [ebp-40h]
  char *s2; // [esp+Ch] [ebp-3Ch]
  int *v20; // [esp+10h] [ebp-38h]
  char *v21; // [esp+14h] [ebp-34h]
  size_t v22; // [esp+18h] [ebp-30h]
  char *s; // [esp+1Ch] [ebp-2Ch]
  char *sa; // [esp+1Ch] [ebp-2Ch]
  void *ptr; // [esp+20h] [ebp-28h] BYREF
  size_t v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  unsigned int v28; // [esp+2Ch] [ebp-1Ch]

  s = (char *)a2;
  v28 = __readgsdword(0x14u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    goto LABEL_26;
  v2 = *(_DWORD *)(a1 + 4);
  ptr = nullptr;
  v26 = 0;
  v18 = v2;
  v27 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    ptr = sub_80CF920((int)&ptr, nullptr, v3 + 1, 1u);
    v26 = v3 + 1;
    memmove(ptr, a2, v3);
    *((_BYTE *)ptr + v3) = 0;
    v4 = (char *)ptr;
    v5 = *(char **)(v18 + 8);
    v21 = (char *)(v18 + 4);
    if ( !v5 )
      goto LABEL_20;
    v22 = v26;
    v6 = v26 == 0;
  }
  else
  {
    v22 = 0;
    v4 = nullptr;
    v5 = *(char **)(v2 + 8);
    v6 = 1;
    v21 = (char *)(v18 + 4);
    if ( !v5 )
      goto LABEL_22;
  }
  v7 = !v6;
  s2 = v4;
  v8 = &dword_80DDFD8;
  if ( v7 )
    v8 = (int *)v4;
  v20 = v8;
  while ( 1 )
  {
    v13 = *((_DWORD *)v5 + 5);
    if ( !v22 )
      break;
    if ( v13 )
      goto LABEL_18;
    v9 = s2;
    v10 = (const char *)&dword_80DDFD8;
    sa = v5;
LABEL_11:
    v11 = strcmp(v10, v9);
    v12 = *((char **)v5 + 2);
    v5 = *((char **)v5 + 3);
    if ( v11 >= 0 )
    {
      v5 = v12;
      v21 = sa;
    }
    if ( !v5 )
    {
      v4 = s2;
      s = (char *)a2;
      goto LABEL_20;
    }
  }
  if ( v13 )
  {
LABEL_18:
    v10 = *((const char **)v5 + 4);
    v9 = (const char *)v20;
    sa = v5;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v14 = *((_DWORD *)v5 + 2);
    if ( !v14 )
      break;
    v21 = v5;
    v5 = *((char **)v5 + 2);
    if ( *(_DWORD *)(v14 + 20) )
      goto LABEL_18;
  }
  v4 = s2;
  v21 = v5;
  s = (char *)a2;
LABEL_20:
  if ( v4 )
  {
    v26 = 0;
    sub_80CF780(v4);
  }
LABEL_22:
  if ( *(char **)(v18 + 12) == v21 )
    goto LABEL_26;
  v15 = (const char *)&dword_80DDFD8;
  v16 = std::_Rb_tree_decrement(v21);
  if ( *(_DWORD *)(v16 + 20) )
    v15 = *(const char **)(v16 + 16);
  if ( strcmp(v15, s) >= 0 )
LABEL_26:
    v15 = nullptr;
  if ( v28 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v15;
}
// 804B410: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
