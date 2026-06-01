unsigned __int64 __fastcall sub_E230(
        int a1,
        _QWORD *a2,
        void (*a3)(const char *, ...),
        __int64 a4,
        __int64 a5,
        __int32 a6)
{
  char *v7; // rdi
  const char **v8; // r12
  const char **v9; // rbx
  const char *v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbx
  char *v13; // rdx
  void *v14; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  int v17[4]; // [rsp+8h] [rbp-50h]
  int v18[2]; // [rsp+18h] [rbp-40h]

  *(_QWORD *)v18 = __readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)v17 = 0;
  sub_D180(a1, (__int64 *)&ptr, a2, a4, a5, a6);
  v7 = (char *)ptr;
  v8 = (const char **)((char *)ptr + 24 * *(_QWORD *)v17);
  if ( v8 != ptr )
  {
    v9 = (const char **)ptr;
    do
    {
      v10 = s1;
      if ( v9[1] )
        v10 = *v9;
      a3("%s\n", v10);
      v9 += 3;
    }
    while ( v8 != v9 );
    v7 = (char *)ptr;
  }
  if ( v7 )
  {
    v11 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 )
    {
      v12 = 0;
      do
      {
        v13 = &v7[24 * v12];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          j__free(v14);
          v7 = (char *)ptr;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)v17 = 0;
    j__free(v7);
  }
  return *(_QWORD *)v18 - __readfsqword(0x28u);
}

