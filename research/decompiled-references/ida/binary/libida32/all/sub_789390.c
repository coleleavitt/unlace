__int64 __fastcall sub_789390(__int64 a1)
{
  const char *v1; // rsi
  __int64 lexer; // rax
  void *v3; // rbx
  unsigned int inited; // ebp
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  int v8; // r9d
  char *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  void *v13; // rdi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int128 v16; // [rsp+8h] [rbp-80h]
  void *v17; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+28h] [rbp-60h]
  void *v19; // [rsp+40h] [rbp-48h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h]
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  ptr = nullptr;
  v16 = 0;
  sub_8935A0(&ptr);
  v17 = nullptr;
  v1 = haystack;
  v18 = 0;
  if ( (_QWORD)v16 )
    v1 = (const char *)ptr;
  if ( (unsigned __int8)sub_811EA0(&v17, v1) )
  {
    v20 = 0;
    v19 = nullptr;
    lexer = create_lexer(0, 0, 0, 0);
    v3 = (void *)lexer;
    if ( lexer )
    {
      inited = lex_init_file(lexer);
      if ( !inited )
      {
        inited = sub_7891F0((__int64)&v19, (__int64)v3, 0);
        if ( !inited )
          sub_788930((__int64 *)&v19, a1, v5, v6, v7, v8);
      }
      destroy_lexer(v3);
    }
    else
    {
      inited = 2019;
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
  }
  else
  {
    inited = 2019;
  }
  v9 = (char *)v17;
  if ( v17 )
  {
    v10 = v18;
    if ( (_QWORD)v18 )
    {
      v11 = 0;
      do
      {
        v12 = &v9[24 * v11];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
          v9 = (char *)v17;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v9);
  }
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return inited;
}

