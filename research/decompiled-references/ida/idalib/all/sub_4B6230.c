unsigned __int64 __fastcall sub_4B6230(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 i; // rax
  const char *v8; // rcx
  const char *v9; // r13
  __int64 j; // r13
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rsi
  void *v14; // rdi
  __int64 v15; // r14
  __int64 **v16; // r13
  __int64 k; // r14
  __int64 *v18; // r15
  __int64 v19; // rax
  char *v21; // r15
  char *v22; // r13
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+8h] [rbp-80h]
  __int64 *v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+18h] [rbp-70h] BYREF
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  sub_7BEFF0(&v30, a2, "$ BMARKS ", 0, 0);
  if ( v30 != -1 )
  {
    ptr = nullptr;
    v34 = 0;
    for ( i = sub_7BF580(&v30, a2, &ptr, 72); i >= 0; i = sub_7BF600(&v30, a2, &ptr, v8, 72) )
    {
      v9 = haystack;
      if ( (_QWORD)v34 )
        v9 = (const char *)ptr;
      v31 = sub_7BF490(&v30, a2, v9, 72);
      if ( (unsigned __int8)sub_42D920(a2, &v31, a3, a4) )
      {
        v32 = v31;
        sub_7BF4E0(&v30, a2, v9, &v32, 8, 72);
      }
      v8 = haystack;
      if ( (_QWORD)v34 )
        v8 = (const char *)ptr;
    }
    if ( ptr )
    {
      *(_QWORD *)&v34 = 0;
      qfree(ptr);
    }
  }
  sub_7BEFF0(&v31, a2, "$ curlocs", 0, 0);
  if ( v31 != -1 )
  {
    ptr = nullptr;
    v34 = 0;
    for ( j = sub_7BEB80(&v31, a2, 65); j != -1; j = sub_7BEBF0(&v31, a2, j, 65) )
    {
      v32 = j;
      sub_42D920(a2, &v32, a3, a4);
      v11 = v34;
      v12 = v32;
      v13 = ptr;
      if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
      {
        v27 = v32;
        ptr = (void *)qvector_reserve(&ptr, ptr, v34 + 1, 8);
        v13 = ptr;
        v12 = v27;
        v11 = v34;
      }
      v13[v11] = v12;
      *(_QWORD *)&v34 = v34 + 1;
    }
    v14 = ptr;
    if ( !(_QWORD)v34 || (sub_7BF370(&v31, a2, 65), v14 = ptr, v21 = (char *)ptr + 8 * v34, v21 == ptr) )
    {
      if ( !v14 )
        goto LABEL_22;
    }
    else
    {
      v22 = (char *)ptr;
      v23 = &v32;
      do
      {
        v24 = *(_QWORD *)v22;
        v29 = v23;
        v32 = 1;
        sub_7BE7C0(&v31, a2, v24, v23, 8, 65);
        v22 += 8;
        v23 = v29;
      }
      while ( v21 != v22 );
      v14 = ptr;
      if ( !ptr )
        goto LABEL_22;
    }
    *(_QWORD *)&v34 = 0;
    qfree(v14);
  }
LABEL_22:
  if ( !(_BYTE)byte_2CCBE00 && __cxa_guard_acquire(&byte_2CCBE00) )
  {
    v25 = operator new(0x58u);
    *(_QWORD *)v25 = 0;
    v26 = v25;
    *(_QWORD *)(v25 + 24) = 0;
    *(_QWORD *)(v25 + 48) = 0;
    *(_DWORD *)(v25 + 80) = 0;
    *(_OWORD *)(v25 + 8) = 0;
    *(_OWORD *)(v25 + 32) = 0;
    *(_OWORD *)(v25 + 56) = 0;
    *(_QWORD *)(v25 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CCBE08 = v26;
    __cxa_guard_release(&byte_2CCBE00);
  }
  v15 = *(_QWORD *)&qword_2CCBE08;
  v28 = *(_QWORD *)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  v16 = *(__int64 ***)v15;
  for ( k = *(_QWORD *)v15 + 8LL * *(_QWORD *)(v15 + 8); (__int64 **)k != v16; *v18 = v19 )
  {
    v18 = *v16;
    v19 = sub_42D990(a2, **v16++, a3, a4);
  }
  qmutex_unlock(*(_QWORD *)(v28 + 72));
  return v35 - __readfsqword(0x28u);
}
