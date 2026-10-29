/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077680
// Address: 0x08077680

//----- (08077680) --------------------------------------------------------
char *__cdecl sub_8077680(char **a1, char *s)
{
  char *v2; // eax
  size_t v3; // edi
  char *v4; // edx
  char *v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  char *v8; // eax
  void *v9; // edx
  void *v11; // ebx
  __int64 v12; // xmm0_8
  char *v13; // eax
  void *v14; // eax
  __int64 v15; // [esp+0h] [ebp-40h]
  void *src; // [esp+8h] [ebp-38h]
  char *v17; // [esp+10h] [ebp-30h]
  void *p_ptr; // [esp+14h] [ebp-2Ch]
  void *ptr; // [esp+18h] [ebp-28h] BYREF
  __int64 v20; // [esp+1Ch] [ebp-24h]
  unsigned int v21; // [esp+24h] [ebp-1Ch]

  v2 = a1[1];
  v21 = __readgsdword(0x14u);
  v17 = v2;
  ptr = nullptr;
  v20 = 0;
  if ( s )
  {
    src = s;
    v3 = strlen(s);
    LODWORD(v15) = v3 + 1;
    p_ptr = &ptr;
    ptr = sub_80CF920((int)&ptr, nullptr, v3 + 1, 1u);
    LODWORD(v20) = v3 + 1;
    memmove(ptr, s, v3);
    *((_BYTE *)ptr + v3) = 0;
    v4 = a1[1];
  }
  else
  {
    v4 = v17;
    p_ptr = &ptr;
  }
  v5 = *a1;
  v6 = (unsigned int)a1[2];
  v7 = (unsigned int)(v4 + 1);
  if ( p_ptr >= *a1 && p_ptr < &v5[12 * v6] )
  {
    v11 = ptr;
    v12 = v20;
    ptr = nullptr;
    v20 = 0;
    p_ptr = v11;
    if ( v6 < v7 )
    {
      v15 = v12;
      v5 = (char *)sub_80CF920((int)a1, v5, (unsigned int)(v4 + 1), 0xCu);
      v4 = a1[1];
      *a1 = v5;
    }
    v13 = &v5[12 * (_DWORD)v4];
    *(_DWORD *)v13 = p_ptr;
    *(_QWORD *)(v13 + 4) = v12;
    v14 = ptr;
    ++a1[1];
    if ( v14 )
    {
      LODWORD(v20) = 0;
      sub_80CF780(v14);
    }
  }
  else
  {
    if ( v6 < v7 )
    {
      v5 = (char *)sub_80CF920((int)a1, v5, (unsigned int)(v4 + 1), 0xCu);
      v4 = a1[1];
      *a1 = v5;
    }
    v8 = &v5[12 * (_DWORD)v4];
    v9 = ptr;
    *(_QWORD *)(v8 + 4) = v20;
    *(_DWORD *)v8 = v9;
    ++a1[1];
  }
  if ( v21 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v17;
}
