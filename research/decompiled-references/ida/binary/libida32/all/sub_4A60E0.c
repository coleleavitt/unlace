unsigned __int64 __fastcall sub_4A60E0(__int64 a1, __int64 a2)
{
  unsigned int **v3; // r15
  __int64 v4; // r14
  unsigned int v5; // r13d
  __int64 v6; // rax
  _DWORD *v7; // rsi
  unsigned int i; // ebx
  char *v9; // rax
  char *v10; // rdx
  __int64 j; // rax
  const char *v12; // rsi
  unsigned int v13; // eax
  const char *v14; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  int v20[2]; // [rsp+0h] [rbp-90h]
  unsigned int v21; // [rsp+10h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+14h] [rbp-7Ch] BYREF
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  int v24[4]; // [rsp+20h] [rbp-70h]
  void *v25; // [rsp+38h] [rbp-58h] BYREF
  __int128 v26; // [rsp+40h] [rbp-50h]
  int v27[2]; // [rsp+50h] [rbp-40h]

  *(_QWORD *)v27 = __readfsqword(0x28u);
  *(_OWORD *)v24 = 0;
  ptr = nullptr;
  if ( !(_BYTE)byte_2CA1F00 && __cxa_guard_acquire(&byte_2CA1F00) )
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
    *(_QWORD *)&qword_2CA1F08 = v19;
    __cxa_guard_release(&byte_2CA1F00);
  }
  *(_QWORD *)v20 = *(_QWORD *)&qword_2CA1F08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CA1F08 + 72LL));
  v3 = **(unsigned int ****)v20;
  v4 = **(_QWORD **)v20 + 8LL * *(_QWORD *)(*(_QWORD *)v20 + 8LL);
  if ( **(_QWORD **)v20 != v4 )
  {
    do
    {
      v5 = **v3;
      sub_4A5DA0(a1, v5, a2, 0);
      v6 = *(_QWORD *)v24;
      LODWORD(v25) = v5;
      v7 = ptr;
      if ( *(_QWORD *)&v24[2] < (unsigned __int64)(*(_QWORD *)v24 + 1LL) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, *(_QWORD *)v24 + 1LL, 4);
        v7 = ptr;
        v6 = *(_QWORD *)v24;
      }
      ++v3;
      v7[v6] = v5;
      ++*(_QWORD *)v24;
    }
    while ( (unsigned int **)v4 != v3 );
  }
  netnode_check(&v21, "$ curlocs", 0, 0);
  for ( i = netnode_supfirst(v21, 65); i != -1; i = netnode_supnext(v21, i, 65) )
  {
    v9 = (char *)ptr;
    v10 = (char *)ptr + 4 * *(_QWORD *)v24;
    if ( ptr != v10 )
    {
      while ( *(_DWORD *)v9 != i )
      {
        v9 += 4;
        if ( v10 == v9 )
          goto LABEL_27;
      }
      if ( v9 != v10 )
        continue;
    }
LABEL_27:
    sub_4A5DA0(a1, i, a2, 0);
    v16 = *(_QWORD *)v24;
    v17 = ptr;
    if ( *(_QWORD *)&v24[2] < (unsigned __int64)(*(_QWORD *)v24 + 1LL) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, *(_QWORD *)v24 + 1LL, 4);
      v17 = ptr;
      v16 = *(_QWORD *)v24;
    }
    v17[v16] = i;
    ++*(_QWORD *)v24;
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
      v13 = netnode_hashval_long(v22, v12, 72);
      sub_4A5DA0(a1, v13, a2, 1);
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
    *(_QWORD *)v24 = 0;
    qfree(ptr);
  }
  return *(_QWORD *)v27 - __readfsqword(0x28u);
}

