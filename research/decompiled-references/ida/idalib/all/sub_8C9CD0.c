unsigned __int64 __fastcall sub_8C9CD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
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
  __int64 v15; // rdi
  __int64 v16; // rax
  void *v17; // rdi
  void *v18; // r15
  _QWORD *v20; // r13
  __int64 v21; // rbx
  _QWORD *v22; // r12
  void *v23; // rdi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
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
      v26 = 0;
      if ( v6 )
      {
        v8 = strlen(v6);
        v9 = v8 + 1;
        v10 = v8;
        ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
        *(_QWORD *)&v26 = v9;
        memmove(ptr, v7, v10);
        *((_BYTE *)ptr + v10) = 0;
      }
      v11 = sub_8C9B30((__int64)a2, (__int64)&ptr);
      v13 = v12;
      v14 = (__int64)v11;
      if ( v11 == (_QWORD *)a2[3] && (v20 = a2 + 1, v12 == a2 + 1) )
      {
        v21 = a2[2];
        while ( v21 )
        {
          v22 = (_QWORD *)v21;
          sub_8C86D0(*(_QWORD **)(v21 + 24));
          v23 = *(void **)(v21 + 32);
          v21 = *(_QWORD *)(v21 + 16);
          if ( v23 )
          {
            v22[5] = 0;
            qfree(v23);
          }
          operator delete(v22, 0x58u);
        }
        a2[2] = 0;
        a2[3] = v20;
        a2[4] = v20;
        a2[5] = 0;
      }
      else if ( v12 != v11 )
      {
        do
        {
          v15 = v14;
          v14 = std::_Rb_tree_increment(v14);
          v16 = std::_Rb_tree_rebalance_for_erase(v15, a2 + 1);
          v17 = *(void **)(v16 + 32);
          v18 = (void *)v16;
          if ( v17 )
          {
            *(_QWORD *)(v16 + 40) = 0;
            qfree(v17);
          }
          operator delete(v18, 0x58u);
          --a2[5];
        }
        while ( v13 != (_QWORD *)v14 );
      }
      if ( ptr )
      {
        *(_QWORD *)&v26 = 0;
        qfree(ptr);
      }
      v4 = std::_Rb_tree_increment(v4);
    }
    while ( v4 != a4 );
  }
  return v27 - __readfsqword(0x28u);
}
