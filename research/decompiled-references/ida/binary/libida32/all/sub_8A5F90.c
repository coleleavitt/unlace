unsigned __int64 __fastcall sub_8A5F90(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  const char *v5; // rdi
  const char *v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v16; // rdi
  void *v17; // r15
  _QWORD *v19; // r13
  __int64 v20; // rbx
  _QWORD *v21; // r12
  void *v22; // rdi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a3 != a4 )
  {
    v4 = a3;
    do
    {
      v5 = haystack;
      if ( *(_QWORD *)(v4 + 40) )
        v5 = *(const char **)(v4 + 32);
      v6 = (const char *)qbasename(v5);
      ptr = nullptr;
      v7 = v6;
      v25 = 0;
      if ( v6 )
      {
        v8 = strlen(v6);
        v9 = v8 + 1;
        v10 = v8;
        ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
        *(_QWORD *)&v25 = v9;
        memmove(ptr, v7, v10);
        *((_BYTE *)ptr + v10) = 0;
      }
      v11 = sub_8A5DF0((__int64)a2, (__int64)&ptr);
      v13 = v12;
      if ( v11 == (_QWORD *)a2[3] && (v19 = a2 + 1, v12 == a2 + 1) )
      {
        v20 = a2[2];
        while ( v20 )
        {
          v21 = (_QWORD *)v20;
          sub_8A4990(*(_QWORD **)(v20 + 24));
          v22 = *(void **)(v20 + 32);
          v20 = *(_QWORD *)(v20 + 16);
          if ( v22 )
          {
            v21[5] = 0;
            qfree(v22);
          }
          operator delete(v21, 0x58u);
        }
        a2[2] = 0;
        a2[3] = v19;
        a2[4] = v19;
        a2[5] = 0;
      }
      else if ( v12 != v11 )
      {
        do
        {
          v14 = std::_Rb_tree_increment();
          v15 = std::_Rb_tree_rebalance_for_erase();
          v16 = *(void **)(v15 + 32);
          v17 = (void *)v15;
          if ( v16 )
          {
            *(_QWORD *)(v15 + 40) = 0;
            qfree(v16);
          }
          operator delete(v17, 0x58u);
          --a2[5];
        }
        while ( v13 != (_QWORD *)v14 );
      }
      if ( ptr )
      {
        *(_QWORD *)&v25 = 0;
        qfree(ptr);
      }
      v4 = std::_Rb_tree_increment();
    }
    while ( v4 != a4 );
  }
  return v26 - __readfsqword(0x28u);
}

