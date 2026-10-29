__int64 __fastcall sub_6DC0E0(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 lexer; // rax
  int v6; // ebx
  const char *v7; // rcx
  int v8; // r8d
  unsigned int v9; // ebx
  __int64 v11; // rdx
  void *v12; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+8h] [rbp-B0h]
  void *v14; // [rsp+20h] [rbp-98h] BYREF
  __int128 v15; // [rsp+28h] [rbp-90h]
  void *v16; // [rsp+40h] [rbp-78h] BYREF
  __int128 v17; // [rsp+48h] [rbp-70h]
  void *v18; // [rsp+58h] [rbp-60h]
  __int128 v19; // [rsp+60h] [rbp-58h]
  void *ptr; // [rsp+70h] [rbp-48h]
  __int128 v21; // [rsp+78h] [rbp-40h]
  __int64 v22; // [rsp+88h] [rbp-30h] BYREF
  int v23; // [rsp+90h] [rbp-28h]
  unsigned __int8 v24; // [rsp+94h] [rbp-24h]
  unsigned __int64 v25; // [rsp+98h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  v13 = 0;
  v12 = nullptr;
  print_tinfo((int)&v12, 0, 0, 0, 0, a4, 0, 0);
  v14 = nullptr;
  v15 = 0;
  sub_3573A0((char **)&v14);
  v4 = (debug & 0x4000) == 0 ? 0xFFFFFFFE : 0;
  lexer = create_lexer(0, 0, 0, 0);
  v6 = v4 + 1058;
  v16 = nullptr;
  v7 = haystack;
  v18 = nullptr;
  ptr = nullptr;
  v22 = 0;
  v23 = 8;
  v24 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  if ( (_QWORD)v15 )
    v7 = (const char *)v14;
  v8 = v6;
  v9 = 0;
  if ( !(unsigned int)sub_5DAF40(
                        (__int64 *)a1,
                        *(void **)(a1 + 8),
                        lexer,
                        (__int64)v7,
                        v8,
                        0,
                        (__int64)sub_5EBFD0,
                        nullptr,
                        (__int64)&v16,
                        0) )
  {
    v9 = v24;
    if ( v24 )
    {
      v11 = v22;
      v22 = *a2;
      *a2 = v11;
    }
  }
  clear_tinfo_t(&v22);
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
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

