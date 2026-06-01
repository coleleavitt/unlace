__int64 __fastcall sub_60B8C0(__int64 *a1, void *a2, __int64 a3, __int64 (*a4)(), unsigned int a5)
{
  void *v7; // r12
  __int64 v10; // rdi
  const char *v11; // rdi
  const char *v12; // r15
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // ebx
  __int64 lexer; // [rsp+0h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-50h] BYREF
  __int128 v19; // [rsp+18h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]

  v7 = a2;
  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_6F8BA0(a1) )
    return sub_6F8E70(a1, a2, a3, a4, a5);
  v10 = *a1;
  ptr = nullptr;
  v19 = 0;
  sub_631490(v10, &ptr, 71);
  v11 = haystack;
  if ( (_QWORD)v19 )
    v11 = (const char *)ptr;
  set_header_path(v11, 0);
  lexer = create_lexer(0, 0, 0, 0);
  sub_631490(*a1, &ptr, 72);
  sub_60A2D0((__int64)a1, (__int64 *)&ptr);
  v12 = haystack;
  if ( (_QWORD)v19 )
    v12 = (const char *)ptr;
  lex_term_file(lexer, 1);
  if ( v12 && *v12 )
    sub_605B60(lexer, (__int64)v12);
  v13 = a5;
  v14 = a5 | 0x40A;
  if ( (debug & 0x4000) == 0 )
  {
    BYTE1(v13) = BYTE1(a5) | 4;
    v14 = v13;
  }
  if ( !a2 )
    v7 = (void *)a1[1];
  v15 = sub_5F6DE0(a1, v7, lexer, a3, v14, 0, (__int64)sub_6196D0, a4, 0, 0);
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return v15;
}
