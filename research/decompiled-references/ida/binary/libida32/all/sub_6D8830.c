__int64 __fastcall sub_6D8830(__int64 a1, __int64 a2, __int64 a3, void (*a4)(const char *, ...), unsigned int a5)
{
  unsigned int v8; // ebx
  char *v9; // rbp
  char *v10; // r15
  char *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  char *v14; // rbp
  void *v15; // rdi
  void *v16; // rdi
  const char *v18; // r9
  const char *v19; // r8
  const char *v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h]
  __int128 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+20h] [rbp-48h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v23 = 0;
  v21 = 256;
  ptr = nullptr;
  v24 = 0;
  declaration_compiler_t__ctor(&v21);
  v8 = declaration_compiler_t__parse_decls(&v21, a2, a3, a5);
  if ( v8 )
  {
    v9 = (char *)ptr + 64 * (_QWORD)v23;
    if ( v9 == ptr )
    {
      v8 = 0;
    }
    else
    {
      v10 = (char *)ptr;
      v8 = 0;
      if ( a4 )
      {
        do
        {
          while ( 1 )
          {
            v18 = haystack;
            if ( *((_QWORD *)v10 + 5) )
              v18 = *((const char **)v10 + 4);
            v19 = "warning";
            v20 = haystack;
            if ( !v10[56] )
              v19 = "error";
            if ( *((_QWORD *)v10 + 2) )
              v20 = *((const char **)v10 + 1);
            a4("%s:%d:%d %s %s\n", v20, *(_DWORD *)v10, *((_DWORD *)v10 + 1), v19, v18);
            if ( v10[56] )
              break;
            v10 += 64;
            ++v8;
            if ( v9 == v10 )
              goto LABEL_5;
          }
          v10 += 64;
        }
        while ( v9 != v10 );
      }
      else
      {
        do
        {
          v8 += v10[56] == 0;
          v10 += 64;
        }
        while ( v9 != v10 );
      }
    }
  }
LABEL_5:
  declaration_compiler_t__dtor(&v21);
  v11 = (char *)ptr;
  if ( ptr )
  {
    v12 = v23;
    if ( (_QWORD)v23 )
    {
      v13 = 0;
      do
      {
        v14 = &v11[64 * v13];
        v15 = *((void **)v14 + 4);
        if ( v15 )
        {
          *((_QWORD *)v14 + 5) = 0;
          qfree(v15);
        }
        v16 = *((void **)v14 + 1);
        if ( v16 )
        {
          *((_QWORD *)v14 + 2) = 0;
          qfree(v16);
        }
        ++v13;
        v11 = (char *)ptr;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v11);
  }
  return v8;
}

