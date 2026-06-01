/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084440
// Address: 0x08084440

//----- (08084440) --------------------------------------------------------
int *__cdecl sub_8084440(int a1, char *s)
{
  char *v2; // edx
  int v3; // eax
  size_t v4; // esi
  _DWORD *v5; // esi
  const char *v6; // ecx
  const char *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int *result; // eax
  _DWORD *v12; // [esp+0h] [ebp-3Ch]
  _DWORD *v13; // [esp+4h] [ebp-38h]
  char *src; // [esp+8h] [ebp-34h]
  int v15; // [esp+10h] [ebp-2Ch]
  size_t v16; // [esp+10h] [ebp-2Ch]
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  size_t v18; // [esp+18h] [ebp-24h]
  int v19; // [esp+1Ch] [ebp-20h]
  unsigned int v20; // [esp+20h] [ebp-1Ch]

  v20 = __readgsdword(0x14u);
  v2 = s;
  if ( !a1 || *(_BYTE *)a1 != 5 )
    goto LABEL_14;
  v3 = *(_DWORD *)(a1 + 4);
  ptr = nullptr;
  v18 = 0;
  v15 = v3;
  v19 = 0;
  if ( s )
  {
    v4 = strlen(s);
    ptr = sub_80CF920((int)&ptr, nullptr, v4 + 1, 1u);
    v18 = v4 + 1;
    memmove(ptr, s, v4);
    *((_BYTE *)ptr + v4) = 0;
    v2 = (char *)ptr;
    v5 = *(_DWORD **)(v15 + 8);
    v12 = (_DWORD *)(v15 + 4);
    if ( !v5 )
    {
      if ( ptr )
      {
        v18 = 0;
        sub_80CF780(ptr);
        result = nullptr;
        goto LABEL_21;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v5 = *(_DWORD **)(v3 + 8);
    v12 = (_DWORD *)(v3 + 4);
    if ( !v5 )
      goto LABEL_14;
  }
  src = v2;
  v13 = v12;
  v16 = v18;
  while ( v5[5] )
  {
    v6 = (const char *)v5[4];
    v7 = (const char *)&dword_80DDFD8;
    if ( v16 )
      goto LABEL_7;
LABEL_8:
    v8 = strcmp(v7, v6);
    v9 = v5[2];
    v10 = v5[3];
    if ( v8 >= 0 )
    {
      v5 = (_DWORD *)v5[3];
      if ( !v10 )
        goto LABEL_16;
    }
    else
    {
      v13 = v5;
      v5 = (_DWORD *)v5[2];
      if ( !v9 )
        goto LABEL_16;
    }
  }
  if ( v16 )
  {
    v6 = (const char *)&dword_80DDFD8;
LABEL_7:
    v7 = src;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v5 = (_DWORD *)v5[3];
    if ( !v5 )
      break;
    if ( v5[5] )
    {
      v16 = 0;
      v6 = (const char *)v5[4];
      v7 = (const char *)&dword_80DDFD8;
      goto LABEL_8;
    }
  }
LABEL_16:
  if ( src )
  {
    v18 = 0;
    sub_80CF780(src);
  }
  if ( v12 == v13 )
  {
LABEL_14:
    result = nullptr;
    goto LABEL_21;
  }
  result = &dword_80DDFD8;
  if ( v13[5] )
    result = (int *)v13[4];
LABEL_21:
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
