unsigned __int64 __fastcall sub_620B60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r12
  char *v6; // rdi
  int v7; // r14d
  const char **v8; // r13
  const char **v9; // rbx
  const char *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rbx
  char *v13; // rdx
  void *v14; // rax
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  ptr = nullptr;
  sub_6208E0(a2, (__int64 *)&ptr, a3);
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = (char *)ptr;
  v7 = *(_DWORD *)(a1 + 40);
  v8 = (const char **)((char *)ptr + 24 * v17);
  if ( v8 != ptr )
  {
    v9 = (const char **)ptr;
    do
    {
      v10 = haystack;
      if ( v9[1] )
        v10 = *v9;
      sub_620070(*(__int64 **)(v5 + 1480), a3, v7, v10);
      v9 += 3;
      ++v7;
    }
    while ( v8 != v9 );
    v6 = (char *)ptr;
  }
  if ( v6 )
  {
    v11 = v17;
    if ( (_QWORD)v17 )
    {
      v12 = 0;
      do
      {
        v13 = &v6[24 * v12];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          qfree(v14);
          v6 = (char *)ptr;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v6);
  }
  return v18 - __readfsqword(0x28u);
}

