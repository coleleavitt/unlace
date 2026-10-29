/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8076160
// Address: 0x08076160

//----- (08076160) --------------------------------------------------------
int __cdecl sub_8076160(void **a1)
{
  void **v1; // ecx
  char *v2; // edx
  const char **v3; // esi
  const char *v4; // eax
  int result; // eax
  size_t v6; // esi
  void **v7; // edx
  unsigned int v8; // esi
  unsigned int v9; // ebx
  void **v10; // eax
  __int64 v11; // xmm0_8
  void **v12; // eax
  void **v13; // edx
  void *v14; // eax
  void **v15; // eax
  void *v16; // edx
  void **v17; // eax
  void **v18; // eax
  char *s1[2]; // [esp+0h] [ebp-40h]
  void **v20; // [esp+8h] [ebp-38h]
  char *s2; // [esp+Ch] [ebp-34h]
  size_t v22; // [esp+10h] [ebp-30h]
  void **p_ptr; // [esp+14h] [ebp-2Ch]
  void *ptr; // [esp+18h] [ebp-28h] BYREF
  __int64 v25; // [esp+1Ch] [ebp-24h]
  unsigned int v26; // [esp+24h] [ebp-1Ch]

  v26 = __readgsdword(0x14u);
  v1 = a1;
  v2 = (char *)&dword_80DDFD8;
  if ( a1[6] )
    v2 = (char *)a1[5];
  v22 = (size_t)a1[20];
  if ( v22 )
  {
    s2 = v2;
    v3 = (const char **)a1[19];
    s1[0] = (char *)&dword_80DDFD8;
    p_ptr = nullptr;
    v20 = a1;
    do
    {
      v4 = s1[0];
      if ( v3[1] )
        v4 = *v3;
      if ( !strcmp(v4, s2) )
      {
        sub_80C7910(0, s2);
        result = sub_80C7880(52);
        goto LABEL_20;
      }
      p_ptr = (void **)((char *)p_ptr + 1);
      v3 += 3;
    }
    while ( p_ptr != (void **)v22 );
    v2 = s2;
    v1 = v20;
  }
  ptr = nullptr;
  s2 = (char *)(v1 + 19);
  v25 = 0;
  if ( v2 )
  {
    v20 = v1;
    s1[0] = v2;
    v6 = strlen(v2);
    v22 = v6 + 1;
    p_ptr = &ptr;
    ptr = sub_80CF920((int)&ptr, nullptr, v6 + 1, 1u);
    LODWORD(v25) = v6 + 1;
    memmove(ptr, s1[0], v6);
    v1 = v20;
    *((_BYTE *)ptr + v6) = 0;
    v22 = (size_t)v1[20];
  }
  else
  {
    p_ptr = &ptr;
  }
  v7 = (void **)v1[19];
  v8 = (unsigned int)v1[21];
  v9 = v22 + 1;
  if ( p_ptr < v7 || p_ptr >= &v7[3 * v8] )
  {
    if ( v8 < v9 )
    {
      p_ptr = v1;
      v17 = (void **)sub_80CF920((int)s2, v7, v22 + 1, 0xCu);
      v1 = p_ptr;
      v7 = v17;
      p_ptr[19] = v17;
      v22 = (size_t)v1[20];
    }
    v15 = &v7[3 * v22];
    v16 = ptr;
    *(_QWORD *)(v15 + 1) = v25;
    *v15 = v16;
    v1[20] = (char *)v1[20] + 1;
  }
  else
  {
    v10 = (void **)ptr;
    v11 = v25;
    ptr = nullptr;
    v25 = 0;
    p_ptr = v10;
    if ( v8 < v9 )
    {
      v22 = (size_t)v1;
      *(_QWORD *)s1 = v11;
      v18 = (void **)sub_80CF920((int)s2, v7, v9, 0xCu);
      v1 = (void **)v22;
      v7 = v18;
      *(_DWORD *)(v22 + 76) = v18;
      v22 = (size_t)v1[20];
    }
    v12 = &v7[3 * v22];
    v13 = p_ptr;
    *(_QWORD *)(v12 + 1) = v11;
    *v12 = v13;
    v14 = ptr;
    v1[20] = (char *)v1[20] + 1;
    if ( v14 )
    {
      LODWORD(v25) = 0;
      sub_80CF780(v14);
    }
  }
  result = 0;
LABEL_20:
  if ( v26 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
