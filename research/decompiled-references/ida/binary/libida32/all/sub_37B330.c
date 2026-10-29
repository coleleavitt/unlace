__int64 __fastcall sub_37B330(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // edx
  const char *v8; // rsi
  bool v9; // zf
  __int64 v10; // rsi
  const char *v11; // rcx
  char *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  char *v15; // rbx
  void *v16; // rdi
  void *v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-70h] BYREF
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int128 v21; // [rsp+10h] [rbp-60h]
  __int128 v22; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-40h]
  __int16 v24; // [rsp+38h] [rbp-38h]
  char v25; // [rsp+3Ah] [rbp-36h]
  bool v26; // [rsp+3Bh] [rbp-35h]
  unsigned __int64 v27; // [rsp+40h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 72);
  v27 = __readfsqword(0x28u);
  v24 = 1;
  v8 = haystack;
  v25 = 0;
  v26 = v6 != 0;
  v9 = *(_QWORD *)(a1 + 48) == 0;
  ptr = nullptr;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  if ( !v9 )
    v8 = *(const char **)(a1 + 40);
  if ( (unsigned __int8)sub_5CFEC0((unsigned int)&ptr, (_DWORD)v8, v6, a4, a5, a6) )
    HIDWORD(v23) |= 0x100u;
  v10 = 13;
  v19 = 0;
  if ( v26 )
    v10 = 29;
  create_tinfo(&v19, v10, 13, &ptr);
  v11 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v11 = *(const char **)(a1 + 40);
  save_tinfo(&v19, 0, 0, v11, 1);
  *(_DWORD *)(a2 + 8) = get_tinfo_tid(&v19, 0);
  clear_tinfo_t(&v19);
  v12 = (char *)ptr;
  if ( ptr )
  {
    v13 = v21;
    if ( (_QWORD)v21 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[128 * v14];
        clear_tinfo_t(v15 + 64);
        v16 = *((void **)v15 + 5);
        if ( v16 )
        {
          *((_QWORD *)v15 + 6) = 0;
          qfree(v16);
        }
        v17 = *((void **)v15 + 2);
        if ( v17 )
        {
          *((_QWORD *)v15 + 3) = 0;
          qfree(v17);
        }
        ++v14;
        v12 = (char *)ptr;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v12);
  }
  return 0;
}

