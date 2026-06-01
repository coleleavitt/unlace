__int64 __fastcall sub_37ED70(_QWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf
  const char *v8; // rsi
  __int64 v9; // rsi
  const char *v10; // rcx
  char *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-70h] BYREF
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int128 v20; // [rsp+10h] [rbp-60h]
  __int128 v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int16 v23; // [rsp+38h] [rbp-38h]
  char v24; // [rsp+3Ah] [rbp-36h]
  bool v25; // [rsp+3Bh] [rbp-35h]
  unsigned __int64 v26; // [rsp+40h] [rbp-30h]

  v6 = a1[9] == 0;
  v26 = __readfsqword(0x28u);
  v25 = !v6;
  v6 = a1[6] == 0;
  v8 = haystack;
  ptr = nullptr;
  v22 = 0;
  v23 = 1;
  v24 = 0;
  v20 = 0;
  v21 = 0;
  if ( !v6 )
    v8 = (const char *)a1[5];
  if ( (unsigned __int8)sub_5EBCA0((unsigned int)&ptr, (_DWORD)v8, a3, a4, a5, a6) )
    HIDWORD(v22) |= 0x100u;
  v9 = 13;
  v18 = 0;
  if ( v25 )
    v9 = 29;
  create_tinfo(&v18, v9, 13, &ptr);
  v10 = haystack;
  if ( a1[6] )
    v10 = (const char *)a1[5];
  save_tinfo(&v18, 0, 0, v10, 1);
  *(_QWORD *)(a2 + 8) = get_tinfo_tid(&v18, 0);
  clear_tinfo_t(&v18);
  v11 = (char *)ptr;
  if ( ptr )
  {
    v12 = v20;
    if ( (_QWORD)v20 )
    {
      v13 = 0;
      do
      {
        v14 = &v11[144 * v13];
        clear_tinfo_t(v14 + 64);
        v15 = *((void **)v14 + 5);
        if ( v15 )
        {
          *((_QWORD *)v14 + 6) = 0;
          qfree(v15);
        }
        v16 = *((void **)v14 + 2);
        if ( v16 )
        {
          *((_QWORD *)v14 + 3) = 0;
          qfree(v16);
        }
        ++v13;
        v11 = (char *)ptr;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v20 = 0;
    qfree(v11);
  }
  return 0;
}
