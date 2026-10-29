__int64 __fastcall sub_3B8310(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  bool v6; // cc
  __int64 v8; // rcx
  void **p_src; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  void *v14; // r14
  size_t n; // [rsp+10h] [rbp-120h]
  __int64 v19; // [rsp+38h] [rbp-F8h] BYREF
  void *src; // [rsp+40h] [rbp-F0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-E8h]
  void *v22; // [rsp+60h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+68h] [rbp-C8h]
  _BYTE *v24; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+88h] [rbp-A8h]
  _BYTE *v26; // [rsp+A0h] [rbp-90h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-88h]
  _BYTE *v28; // [rsp+C0h] [rbp-70h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-68h]
  _BYTE *v30; // [rsp+E0h] [rbp-50h] BYREF
  __int128 v31; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v32; // [rsp+F8h] [rbp-38h]

  v6 = (unsigned __int64)a1[1] <= 1;
  v32 = __readfsqword(0x28u);
  if ( v6 )
  {
    set_tinfo(a4, 0);
    v13 = 1;
    if ( a2[1] )
      del_named_type(0, *a2, 0);
    else
      del_named_type(0, &s1, 0);
    return v13;
  }
  v8 = *a1;
  p_src = &src;
  v21 = 0;
  v19 = 0;
  src = nullptr;
  v13 = parse_decl(&v19, &src, 0, v8, 49422);
  if ( (_BYTE)v13 )
  {
    if ( a5 )
      copy_tinfo_t(a5, &v19, v12);
    v30 = nullptr;
    v31 = 0;
    v30 = (_BYTE *)qvector_reserve(&v30, 0, 1, 1);
    *(_QWORD *)&v31 = 1;
    *v30 = 0;
    v28 = nullptr;
    v29 = 0;
    v28 = (_BYTE *)qvector_reserve(&v28, 0, 1, 1);
    *(_QWORD *)&v29 = 1;
    *v28 = 0;
    v26 = nullptr;
    v27 = 0;
    v26 = (_BYTE *)qvector_reserve(&v26, 0, 1, 1);
    *(_QWORD *)&v27 = 1;
    *v26 = 0;
    v24 = nullptr;
    v25 = 0;
    v24 = (_BYTE *)qvector_reserve(&v24, 0, 1, 1);
    *(_QWORD *)&v25 = 1;
    *v24 = 0;
    if ( a6 )
    {
      v23 = 0;
    }
    else
    {
      v23 = 0;
      if ( (_QWORD)v21 )
      {
        n = v21;
        v14 = (void *)qalloc_or_throw(v21);
        *((_QWORD *)&v23 + 1) = n;
        memcpy(v14, src, n);
        *(_QWORD *)&v23 = n;
        goto LABEL_8;
      }
    }
    v14 = nullptr;
LABEL_8:
    v22 = v14;
    p_src = &v22;
    v13 = sub_3B7DD0(
            (__int64)a2,
            (__int64)&v22,
            a3,
            &v19,
            (__int64)&v24,
            (__int64)&v26,
            (__int64)&v28,
            (__int64)&v30,
            a4);
    if ( v14 )
      qfree(v14, (const char *)&v22);
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24, (const char *)&v22);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, (const char *)&v22);
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, (const char *)&v22);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30, (const char *)&v22);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v21 = 0;
    qfree(src, (const char *)p_src);
  }
  clear_tinfo_t(&v19);
  return v13;
}
