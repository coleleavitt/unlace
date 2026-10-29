__int64 __fastcall sub_5A3DD0(_QWORD *a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // rdi
  __int64 *tinfo_property; // rbp
  __int64 result; // rax
  const char *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r14
  const char *v13; // rsi
  size_t v14; // r12
  const char *v15; // rsi
  const char *v16; // rdx
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
    sub_3B90A0(a1, a3);
    sub_3573A0((char **)&src);
    v20 = nullptr;
    *(_OWORD *)v21 = 0;
    sub_3B90A0(a1, a4);
    v10 = "^%a";
    sub_3573A0((char **)&v20);
    v11 = *tinfo_property;
    v12 = *tinfo_property + (tinfo_property[1] << 7);
    if ( v12 != *tinfo_property )
    {
      do
      {
        v17 = n[0];
        v22 = nullptr;
        v23 = 0;
        if ( n[0] )
        {
          v22 = (void *)qalloc_or_throw(n[0], v10);
          *((_QWORD *)&v23 + 1) = v17;
          memcpy(v22, src, v17);
          *(_QWORD *)&v23 = v17;
        }
        v13 = haystack;
        if ( *(_QWORD *)(v11 + 24) )
          v13 = *(const char **)(v11 + 16);
        sub_69C0D0(&v22, v13);
        v14 = v21[0];
        ptr = nullptr;
        v25 = 0;
        if ( v21[0] )
        {
          ptr = (void *)qalloc_or_throw(v21[0], v13);
          *((_QWORD *)&v25 + 1) = v14;
          memcpy(ptr, v20, v14);
          *(_QWORD *)&v25 = v14;
        }
        v15 = haystack;
        if ( *(_QWORD *)(v11 + 24) )
          v15 = *(const char **)(v11 + 16);
        sub_69C0D0(&ptr, v15);
        v16 = haystack;
        if ( (_QWORD)v25 )
          v16 = (const char *)ptr;
        v10 = haystack;
        if ( (_QWORD)v23 )
          v10 = (const char *)v22;
        sub_69E970(a1, v10, v16, 0xFFFFFFFFLL);
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
        v11 += 128;
      }
      while ( v12 != v11 );
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

