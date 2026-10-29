unsigned __int64 __fastcall sub_1B5C0(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v5; // rdi
  char *v6; // rdi
  const char **v7; // r12
  const char **v8; // rbx
  const char *v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbx
  char *v12; // rdx
  void *v13; // rax
  void *ptr; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+20h] [rbp-98h]
  __int128 v18; // [rsp+38h] [rbp-80h] BYREF
  void (__fastcall *v19)(__int128 *, __int128 *, __int64); // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h]
  __int128 v21; // [rsp+58h] [rbp-60h] BYREF
  void (__fastcall *v22)(__int128 *, __int128 *, __int64); // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  unsigned __int64 v24; // [rsp+80h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 32);
  v24 = __readfsqword(0x28u);
  v17 = 0;
  ptr = nullptr;
  v19 = nullptr;
  v20 = 0;
  v22 = nullptr;
  v23 = 0;
  v18 = 0;
  v21 = 0;
  sub_61B30(v5, a2, (unsigned int)&ptr, a3, a4, (unsigned int)&v21, a5);
  if ( v22 )
    v22(&v21, &v21, 3);
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (char *)ptr;
  if ( !*(_BYTE *)(a1 + 211) )
  {
    v7 = (const char **)((char *)ptr + 24 * v17);
    if ( v7 != ptr )
    {
      v8 = (const char **)ptr;
      do
      {
        v9 = haystack;
        if ( v8[1] )
          v9 = *v8;
        sub_19CE0(a1, (__int64)"%s\n", v9);
        v8 += 3;
      }
      while ( v7 != v8 );
      v6 = (char *)ptr;
    }
  }
  if ( v6 )
  {
    v10 = v17;
    if ( (_QWORD)v17 )
    {
      v11 = 0;
      do
      {
        v12 = &v6[24 * v11];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          j__free(v13);
          v6 = (char *)ptr;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v17 = 0;
    j__free(v6);
  }
  return v24 - __readfsqword(0x28u);
}

