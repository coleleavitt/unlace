__int64 *__fastcall sub_4B2390(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  char *v7; // rsi
  unsigned __int64 *v8; // r12
  char *v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // rsi
  _QWORD *v12; // rsi
  size_t v13; // r15
  char *v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  char *v17; // rax
  void *v18; // rdi
  void *v20; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v20 = nullptr;
  v21 = 0;
  if ( (unsigned __int8)sub_485E30((unsigned __int64 *)a2, a3) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v6 = v21;
    v7 = (char *)v20;
    v8 = (unsigned __int64 *)(**(_QWORD **)(a2 + 40) + 16 * a3);
    if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
    {
      v20 = (void *)qvector_reserve(&v20, v20, v21 + 1, 24);
      v6 = v21;
      v7 = (char *)v20;
    }
    v9 = &v7[24 * v6];
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)&v21 = v21 + 1;
    sub_35A790((char **)v9);
    for ( i = sub_4B1D30(a2, *v8, *(_QWORD **)(a2 + 56));
          i != (_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL * *(_QWORD *)(a2 + 64)) && *i < v8[1];
          i += 18 )
    {
      ptr = nullptr;
      v23 = 0;
      v13 = i[3];
      if ( !v13
        || (ptr = (void *)qalloc_or_throw(i[3]),
            *((_QWORD *)&v23 + 1) = v13,
            memcpy(ptr, (const void *)i[2], v13),
            *(_QWORD *)&v23 = v13,
            v13 == 1) )
      {
        v11 = i[8];
        if ( (v11 & 0x100) == 0 || (get_tinfo_pdata(&ptr, v11, 0), (unsigned __int64)v23 <= 1) )
        {
          v12 = ptr;
          if ( *((_QWORD *)&v23 + 1) <= 8u )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, 9, 1);
            v12 = ptr;
          }
          *(_QWORD *)&v23 = 9;
          *v12 = 0x3E454D414E4F4E3CLL;
          *((_BYTE *)ptr + 8) = 0;
        }
      }
      sub_4790E0((__int64 *)&v20, (unsigned __int64)&ptr);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
    }
  }
  sub_421D60(a1, (__int64 *)&v20, ",");
  v14 = (char *)v20;
  if ( v20 )
  {
    v15 = v21;
    if ( (_QWORD)v21 )
    {
      v16 = 0;
      do
      {
        v17 = &v14[24 * v16];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
          v14 = (char *)v20;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v14);
  }
  return a1;
}
