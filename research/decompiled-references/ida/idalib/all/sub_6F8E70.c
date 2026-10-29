__int64 __fastcall sub_6F8E70(__int64 a1, __int64 a2, __int64 a3, void (*a4)(const char *, ...))
{
  unsigned int v5; // ebx
  char *v6; // rbp
  char *v7; // r15
  char *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  char *v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  const char *v15; // r9
  const char *v16; // r8
  const char *v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h]
  __int128 v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v20 = 0;
  v18 = 256;
  ptr = nullptr;
  v21 = 0;
  declaration_compiler_t__ctor((unsigned __int64)&v18);
  v5 = declaration_compiler_t__parse_decls((__int64)&v18);
  if ( v5 )
  {
    v6 = (char *)ptr + 64 * (_QWORD)v20;
    if ( v6 == ptr )
    {
      v5 = 0;
    }
    else
    {
      v7 = (char *)ptr;
      v5 = 0;
      if ( a4 )
      {
        do
        {
          while ( 1 )
          {
            v15 = haystack;
            if ( *((_QWORD *)v7 + 5) )
              v15 = *((const char **)v7 + 4);
            v16 = "warning";
            v17 = haystack;
            if ( !v7[56] )
              v16 = "error";
            if ( *((_QWORD *)v7 + 2) )
              v17 = *((const char **)v7 + 1);
            a4("%s:%d:%d %s %s\n", v17, *(_DWORD *)v7, *((_DWORD *)v7 + 1), v16, v15);
            if ( v7[56] )
              break;
            v7 += 64;
            ++v5;
            if ( v6 == v7 )
              goto LABEL_5;
          }
          v7 += 64;
        }
        while ( v6 != v7 );
      }
      else
      {
        do
        {
          v5 += v7[56] == 0;
          v7 += 64;
        }
        while ( v6 != v7 );
      }
    }
  }
LABEL_5:
  declaration_compiler_t__dtor((__int64)&v18);
  v8 = (char *)ptr;
  if ( ptr )
  {
    v9 = v20;
    if ( (_QWORD)v20 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[64 * v10];
        v12 = *((void **)v11 + 4);
        if ( v12 )
        {
          *((_QWORD *)v11 + 5) = 0;
          qfree(v12);
        }
        v13 = *((void **)v11 + 1);
        if ( v13 )
        {
          *((_QWORD *)v11 + 2) = 0;
          qfree(v13);
        }
        ++v10;
        v8 = (char *)ptr;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v20 = 0;
    qfree(v8);
  }
  return v5;
}
