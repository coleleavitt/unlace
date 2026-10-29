__int64 __fastcall sub_6DBE40(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rax
  unsigned int v5; // ebx
  __int64 lexer; // rax
  int v7; // ebx
  const char *v8; // rcx
  unsigned int v9; // ebx
  _QWORD *tinfo_property; // rax
  void *v12; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v13; // [rsp+8h] [rbp-D0h]
  void *v14; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+28h] [rbp-B0h]
  void *v16; // [rsp+40h] [rbp-98h] BYREF
  __int128 v17; // [rsp+48h] [rbp-90h]
  void *v18; // [rsp+60h] [rbp-78h] BYREF
  __int128 v19; // [rsp+68h] [rbp-70h]
  void *v20; // [rsp+78h] [rbp-60h]
  __int128 v21; // [rsp+80h] [rbp-58h]
  void *ptr; // [rsp+90h] [rbp-48h]
  __int128 v23; // [rsp+98h] [rbp-40h]
  __int64 v24; // [rsp+A8h] [rbp-30h] BYREF
  int v25; // [rsp+B0h] [rbp-28h]
  unsigned __int8 v26; // [rsp+B4h] [rbp-24h]
  unsigned __int64 v27; // [rsp+B8h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  v13 = 0;
  v12 = nullptr;
  sub_3573A0((char **)&v12);
  v14 = nullptr;
  v4 = (const char *)v12;
  v15 = 0;
  if ( !(_QWORD)v13 )
    v4 = haystack;
  print_tinfo((int)&v14, 0, 0, 0, 0, a3, (__int64)v4, 0);
  v16 = nullptr;
  v17 = 0;
  sub_3573A0((char **)&v16);
  v5 = (debug & 0x4000) == 0 ? 0xFFFFFFFE : 0;
  lexer = create_lexer(0, 0, 0, 0);
  v7 = v5 + 1058;
  v18 = nullptr;
  v8 = haystack;
  v20 = nullptr;
  ptr = nullptr;
  v24 = 0;
  v25 = 8;
  v26 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  if ( (_QWORD)v17 )
    v8 = (const char *)v16;
  if ( !(unsigned int)sub_5DAF40(
                        (__int64 *)a1,
                        *(void **)(a1 + 8),
                        lexer,
                        (__int64)v8,
                        v7,
                        0,
                        (__int64)sub_5EBFD0,
                        nullptr,
                        (__int64)&v18,
                        0)
    && (v9 = v26) != 0
    && (tinfo_property = (_QWORD *)get_tinfo_property(v24, 311)) != nullptr
    && tinfo_property[1] )
  {
    copy_argloc(a2, *tinfo_property);
  }
  else
  {
    v9 = 0;
  }
  clear_tinfo_t(&v24);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v9;
}

