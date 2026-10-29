__int64 __fastcall sub_7477F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 lexer; // rbp
  __int64 idp_name; // rax
  unsigned __int8 *v7; // r15
  char *v8; // rbx
  int v9; // edi
  char *v10; // r15
  __int16 *v11; // rbx
  int v12; // edi
  __int64 i; // rbx
  size_t v14; // r14
  __int64 v15; // rdx
  unsigned __int8 *v16; // rsi
  const char *v17; // r15
  void *ptr; // [rsp+10h] [rbp-1478h] BYREF
  __int128 v20; // [rsp+18h] [rbp-1470h]
  _BYTE v21[16]; // [rsp+30h] [rbp-1458h] BYREF
  __int16 v22; // [rsp+40h] [rbp-1448h] BYREF
  char v23[1022]; // [rsp+42h] [rbp-1446h] BYREF
  char s[3074]; // [rsp+440h] [rbp-1048h] BYREF
  char v25; // [rsp+1042h] [rbp-446h] BYREF
  unsigned __int64 v26; // [rsp+1448h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = operator new(0x50u);
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 72) = -1;
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  lexer = create_lexer(&off_2B38720, 6, v4, 1);
  idp_name = get_idp_name(s);
  if ( idp_name )
  {
    v7 = (unsigned __int8 *)idp_name;
    v22 = 24415;
    v8 = v23;
    do
    {
      v9 = *v7;
      if ( !(_BYTE)v9 )
        break;
      ++v8;
      ++v7;
      *(v8 - 1) = toupper(v9);
    }
    while ( v8 != &v25 );
    strcpy(v8, "__");
    if ( (debug & 0x80u) != 0 )
      sub_3879F0();
    lex_define_macro(lexer, &v22, &byte_22F0C30, 0, 0);
    getinf_buf(1, v21, 16);
    v10 = v23;
    v11 = (__int16 *)v21;
    v22 = 24415;
    do
    {
      v12 = *(unsigned __int8 *)v11;
      v11 = (__int16 *)((char *)v11 + 1);
      if ( !(_BYTE)v12 )
        break;
      *v10++ = toupper(v12);
    }
    while ( v11 != &v22 );
    strcpy(v10, "__");
    if ( (debug & 0x80u) != 0 )
      sub_3879F0();
    lex_define_macro(lexer, &v22, &byte_22F0C30, 0, 0);
  }
  if ( a2 )
  {
    for ( i = 0; i != a2; ++i )
    {
      v17 = *(const char **)(a1 + 8 * i);
      ptr = nullptr;
      v20 = 0;
      if ( !v17
        || (v14 = strlen(v17),
            ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1),
            *(_QWORD *)&v20 = v14 + 1,
            memmove(ptr, v17, v14),
            *((_BYTE *)ptr + v14) = 0,
            v15 = v20,
            v16 = (unsigned __int8 *)ptr,
            !(_QWORD)v20) )
      {
        v15 = 1;
        v16 = (unsigned __int8 *)haystack;
      }
      sub_7475B0(lexer, v16, v15);
      if ( ptr )
      {
        *(_QWORD *)&v20 = 0;
        qfree(ptr);
      }
    }
  }
  return lexer;
}
