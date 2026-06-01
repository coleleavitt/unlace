__int64 __fastcall sub_5BE4E0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 *tinfo_property; // rbp
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  const char *v12; // rsi
  size_t v13; // r12
  const char *v14; // rsi
  const char *v15; // rdx
  const char *v16; // rsi
  size_t v17; // r12
  void *src; // [rsp+0h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-A0h]
  void *v20; // [rsp+20h] [rbp-88h] BYREF
  size_t v21[3]; // [rsp+28h] [rbp-80h]
  void *v22; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+48h] [rbp-60h]
  void *ptr; // [rsp+60h] [rbp-48h] BYREF
  __int128 v25; // [rsp+68h] [rbp-40h]
  unsigned __int64 v26; // [rsp+78h] [rbp-30h]

  v6 = *a2;
  v26 = __readfsqword(0x28u);
  tinfo_property = (__int64 *)get_tinfo_property(v6, 309);
  result = 0;
  if ( tinfo_property )
  {
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_3BDD60(a1, a3);
    sub_35A790((char **)&src);
    v20 = nullptr;
    *(_OWORD *)v21 = 0;
    sub_3BDD60(a1, a4);
    sub_35A790((char **)&v20);
    v10 = *tinfo_property;
    v11 = *tinfo_property + 144 * tinfo_property[1];
    if ( v11 != *tinfo_property )
    {
      do
      {
        v17 = n[0];
        v22 = nullptr;
        v23 = 0;
        if ( n[0] )
        {
          v22 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v23 + 1) = v17;
          memcpy(v22, src, v17);
          *(_QWORD *)&v23 = v17;
        }
        v12 = haystack;
        if ( *(_QWORD *)(v10 + 24) )
          v12 = *(const char **)(v10 + 16);
        sub_6BCB20(&v22, v12);
        v13 = v21[0];
        ptr = nullptr;
        v25 = 0;
        if ( v21[0] )
        {
          ptr = (void *)qalloc_or_throw(v21[0]);
          *((_QWORD *)&v25 + 1) = v13;
          memcpy(ptr, v20, v13);
          *(_QWORD *)&v25 = v13;
        }
        v14 = haystack;
        if ( *(_QWORD *)(v10 + 24) )
          v14 = *(const char **)(v10 + 16);
        sub_6BCB20(&ptr, v14);
        v15 = haystack;
        if ( (_QWORD)v25 )
          v15 = (const char *)ptr;
        v16 = haystack;
        if ( (_QWORD)v23 )
          v16 = (const char *)v22;
        sub_6BF450(a1, v16, v15, -1);
        if ( ptr )
        {
          *(_QWORD *)&v25 = 0;
          qfree(ptr);
        }
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v22);
        }
        v10 += 144;
      }
      while ( v11 != v10 );
    }
    if ( v20 )
    {
      v21[0] = 0;
      qfree(v20);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    return 1;
  }
  return result;
}
