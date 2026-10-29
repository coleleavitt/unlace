unsigned __int64 __fastcall sub_4BB940(__int64 a1, __int64 a2)
{
  void ***v3; // r15
  __int64 v4; // r14
  void *v5; // r13
  void *v6; // rax
  _QWORD *v7; // rsi
  void *i; // rbx
  void **v9; // rax
  void **v10; // rdx
  __int64 j; // rax
  const char *v12; // rsi
  void *v13; // rax
  const char *v14; // rdx
  void *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  int v20[2]; // [rsp+0h] [rbp-90h]
  __int64 v21; // [rsp+8h] [rbp-88h] BYREF
  __int64 v22; // [rsp+10h] [rbp-80h] BYREF
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  void *v24[2]; // [rsp+20h] [rbp-70h]
  void *v25; // [rsp+38h] [rbp-58h] BYREF
  __int128 v26; // [rsp+40h] [rbp-50h]
  int v27[2]; // [rsp+50h] [rbp-40h]

  *(_QWORD *)v27 = __readfsqword(0x28u);
  *(_OWORD *)v24 = 0;
  ptr = nullptr;
  if ( !(_BYTE)byte_2CCBE00 && __cxa_guard_acquire(&byte_2CCBE00) )
  {
    v18 = operator new(0x58u);
    *(_QWORD *)v18 = 0;
    v19 = v18;
    *(_QWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 48) = 0;
    *(_DWORD *)(v18 + 80) = 0;
    *(_OWORD *)(v18 + 8) = 0;
    *(_OWORD *)(v18 + 32) = 0;
    *(_OWORD *)(v18 + 56) = 0;
    *(_QWORD *)(v18 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CCBE08 = v19;
    __cxa_guard_release(&byte_2CCBE00);
  }
  *(_QWORD *)v20 = *(_QWORD *)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  v3 = **(void *****)v20;
  v4 = **(_QWORD **)v20 + 8LL * *(_QWORD *)(*(_QWORD *)v20 + 8LL);
  if ( **(_QWORD **)v20 != v4 )
  {
    do
    {
      v5 = **v3;
      sub_4BB5F0(a1, v5, a2, 0);
      v6 = v24[0];
      v25 = v5;
      v7 = ptr;
      if ( v24[1] < (char *)v24[0] + 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, (char *)v24[0] + 1, 8);
        v7 = ptr;
        v6 = v24[0];
      }
      ++v3;
      v7[(_QWORD)v6] = v5;
      ++v24[0];
    }
    while ( (void ***)v4 != v3 );
  }
  netnode_check(&v21, "$ curlocs", 0, 0);
  for ( i = (void *)netnode_supfirst(v21, 65); i != (void *)-1LL; i = (void *)netnode_supnext(v21, i, 65) )
  {
    v9 = (void **)ptr;
    v10 = (void **)((char *)ptr + 8 * (__int64)v24[0]);
    if ( ptr != v10 )
    {
      while ( *v9 != i )
      {
        if ( v10 == ++v9 )
          goto LABEL_27;
      }
      if ( v9 != v10 )
        continue;
    }
LABEL_27:
    sub_4BB5F0(a1, i, a2, 0);
    v16 = v24[0];
    v17 = ptr;
    if ( v24[1] < (char *)v24[0] + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, (char *)v24[0] + 1, 8);
      v17 = ptr;
      v16 = v24[0];
    }
    v17[(_QWORD)v16] = i;
    ++v24[0];
  }
  netnode_check(&v22, "$ BMARKS ", 0, 0);
  if ( (unsigned __int8)netnode_exist(&v22) )
  {
    v26 = 0;
    v25 = nullptr;
    for ( j = netnode_qhashfirst(v22, &v25, 72); j != -1; j = netnode_qhashnext(v22, &v25, v14, 72) )
    {
      v12 = haystack;
      if ( (_QWORD)v26 )
        v12 = (const char *)v25;
      v13 = (void *)netnode_hashval_long(v22, v12, 72);
      sub_4BB5F0(a1, v13, a2, 1);
      v14 = haystack;
      if ( (_QWORD)v26 )
        v14 = (const char *)v25;
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
  }
  qmutex_unlock(*(_QWORD *)(*(_QWORD *)v20 + 72LL));
  if ( ptr )
  {
    v24[0] = nullptr;
    qfree(ptr);
  }
  return *(_QWORD *)v27 - __readfsqword(0x28u);
}
