__int64 __fastcall sub_1DA60(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6, char *s1)
{
  unsigned int v11; // eax
  const char *v12; // rdi
  int v13; // r12d
  unsigned int v14; // eax
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 *v19; // r8
  size_t v20; // rax
  size_t v21; // rbx
  __int64 v22; // rax
  void *v23; // rdi
  size_t v24; // rdx
  __int64 v25; // rax
  __int64 *v27; // [rsp+10h] [rbp-48h]
  __int64 *v28; // [rsp+10h] [rbp-48h]
  size_t v29; // [rsp+18h] [rbp-40h]

  if ( strncmp(s1, "classes", 7u) )
    return 0;
  if ( !strcmp(s1 + 7, ".dex") )
  {
    v13 = 1;
  }
  else
  {
    v11 = s1[7];
    if ( v11 > 0x7F )
      return 0;
    v12 = s1 + 7;
    v13 = 0;
    do
    {
      v14 = v11 - 48;
      if ( v14 > 9 )
        break;
      ++v12;
      v13 = v14 + 10 * v13;
      v11 = *v12;
    }
    while ( v11 <= 0x7F );
    if ( v13 == 1 )
      return 0;
    v15 = strcmp(v12, ".dex");
    if ( !v13 || v15 )
      return 0;
  }
  v17 = a1[1];
  v18 = *a1;
  if ( a1[2] < (unsigned __int64)(v17 + 1) )
  {
    v22 = qvector_reserve(a1, v18, v17 + 1, 56);
    v17 = a1[1];
    *a1 = v22;
    v18 = v22;
  }
  v19 = (__int64 *)(v18 + 56 * v17);
  *v19 = 0;
  *(_OWORD *)(v19 + 1) = 0;
  ++a1[1];
  if ( s1 && (v27 = (__int64 *)(v18 + 56 * v17), v20 = strlen(s1), v19 = v27, (v21 = v20) != 0) )
  {
    v23 = (void *)*v27;
    v24 = v20 + 1;
    if ( v27[2] < v20 + 1 )
    {
      v29 = v20 + 1;
      v25 = qvector_reserve(v27, *v27, v24, 1);
      v19 = v27;
      v24 = v29;
      v23 = (void *)v25;
      *v27 = v25;
    }
    v19[1] = v24;
    v28 = v19;
    memmove(v23, s1, v21);
    v19 = v28;
    *(_BYTE *)(*v28 + v21) = 0;
  }
  else
  {
    v19[1] = 0;
  }
  v19[3] = a2;
  v19[4] = a4;
  v19[5] = a5;
  *((_DWORD *)v19 + 12) = a3;
  *((_DWORD *)v19 + 13) = v13;
  return 0;
}
