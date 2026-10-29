__int64 *__fastcall sub_49CF10(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  char *v7; // rsi
  unsigned int *v8; // r13
  char *v9; // rdi
  void **p_ptr; // rsi
  _QWORD *i; // rbx
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  size_t v14; // r15
  char *v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  char *v18; // rax
  void *v19; // rdi
  void *v21; // [rsp+0h] [rbp-78h] BYREF
  __int128 v22; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v21 = nullptr;
  v22 = 0;
  if ( (unsigned __int8)sub_471630((unsigned __int64 *)a2, a3) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v6 = v22;
    v7 = (char *)v21;
    v8 = (unsigned int *)(**(_QWORD **)(a2 + 40) + 8 * a3);
    if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
    {
      v21 = (void *)qvector_reserve(&v21, v21, v22 + 1, 24);
      v6 = v22;
      v7 = (char *)v21;
    }
    v9 = &v7[24 * v6];
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)&v22 = v22 + 1;
    sub_3573A0((char **)v9);
    p_ptr = (void **)*v8;
    for ( i = sub_49C910(a2, (unsigned int)p_ptr, *(_QWORD **)(a2 + 56));
          i != (_QWORD *)(*(_QWORD *)(a2 + 56) + (*(_QWORD *)(a2 + 64) << 7)) && *i < (unsigned __int64)v8[1];
          i += 16 )
    {
      ptr = nullptr;
      v24 = 0;
      v14 = i[3];
      if ( !v14
        || (ptr = (void *)qalloc_or_throw(i[3], (const char *)p_ptr),
            *((_QWORD *)&v24 + 1) = v14,
            memcpy(ptr, (const void *)i[2], v14),
            *(_QWORD *)&v24 = v14,
            v14 == 1) )
      {
        v12 = i[8];
        if ( (v12 & 0x100) == 0 || (get_tinfo_pdata(&ptr, v12, 0), (unsigned __int64)v24 <= 1) )
        {
          v13 = ptr;
          if ( *((_QWORD *)&v24 + 1) <= 8u )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, 9, 1);
            v13 = ptr;
          }
          *(_QWORD *)&v24 = 9;
          *v13 = 0x3E454D414E4F4E3CLL;
          *((_BYTE *)ptr + 8) = 0;
        }
      }
      p_ptr = &ptr;
      sub_464BE0((__int64 *)&v21, (unsigned __int64)&ptr);
      if ( ptr )
      {
        *(_QWORD *)&v24 = 0;
        qfree(ptr);
      }
    }
  }
  sub_40E680(a1, (__int64 *)&v21, ",");
  v15 = (char *)v21;
  if ( v21 )
  {
    v16 = v22;
    if ( (_QWORD)v22 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[24 * v17];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v19);
          v15 = (char *)v21;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v22 = 0;
    qfree(v15);
  }
  return a1;
}

