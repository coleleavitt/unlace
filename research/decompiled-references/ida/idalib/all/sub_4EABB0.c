unsigned __int64 __fastcall sub_4EABB0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v6; // r13
  _QWORD *v7; // rbp
  _DWORD *v8; // rbx
  const char *v9; // r8
  size_t v10; // rbx
  int *v11; // rax
  int *v12; // rdx
  int *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  void *v17; // rdi
  void *v18; // r15
  void *v19; // rdi
  void *v20; // rdi
  _QWORD *v22; // [rsp+8h] [rbp-70h]
  const char *src; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a1 < 0 )
  {
    if ( qword_2CCBF88 )
      qmutex_lock(qword_2CCBF88);
    v6 = qword_2CCBF80;
    v22 = nullptr;
    if ( !qword_2CCBF80 )
      goto LABEL_37;
    do
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      if ( v7[24] )
      {
        v22 = v7;
      }
      else
      {
        if ( v22 )
          *v22 = v6;
        else
          qword_2CCBF80 = v6;
        if ( (debug & 0x20) != 0 )
          sub_3879F0();
        v8 = (_DWORD *)v7[6];
        if ( v8 )
        {
          if ( *((char *)v7 + 144) < 0 )
            sub_4E5FA0((__int64)v7, 0, a3, a4, a5, a6);
          sub_4E9D30(v8, (__int64)(v7 + 7), a3, a4, a5, a6);
          v7[6] = 0;
        }
        v9 = (const char *)v7[1];
        ptr = nullptr;
        v25 = 0;
        if ( v9 )
        {
          src = v9;
          v10 = strlen(v9);
          ptr = (void *)qvector_reserve(&ptr, 0, v10 + 1, 1);
          *(_QWORD *)&v25 = v10 + 1;
          memmove(ptr, src, v10);
          *((_BYTE *)ptr + v10) = 0;
        }
        v11 = (int *)sub_4D4E50((__int64)&unk_2CCBF20, (__int64)&ptr);
        v13 = v12;
        v14 = (__int64)v11;
        if ( (int *)qword_2CCBF38 == v11 && &dword_2CCBF28 == v12 )
        {
          sub_4E5AC0((_QWORD *)qword_2CCBF30);
          qword_2CCBF38 = (__int64)&dword_2CCBF28;
          qword_2CCBF30 = 0;
          qword_2CCBF40 = (__int64)&dword_2CCBF28;
          qword_2CCBF48 = 0;
        }
        else if ( v12 != v11 )
        {
          do
          {
            v15 = v14;
            v14 = std::_Rb_tree_increment(v14);
            v16 = std::_Rb_tree_rebalance_for_erase(v15, &dword_2CCBF28);
            v17 = *(void **)(v16 + 32);
            v18 = (void *)v16;
            if ( v17 )
            {
              *(_QWORD *)(v16 + 40) = 0;
              qfree(v17);
            }
            operator delete(v18, 0x40u);
            --qword_2CCBF48;
          }
          while ( v13 != (int *)v14 );
        }
        if ( ptr )
        {
          *(_QWORD *)&v25 = 0;
          qfree(ptr);
        }
        qfree((void *)v7[1]);
        v7[1] = 0;
        qfree((void *)v7[2]);
        v7[2] = 0;
        qfree((void *)v7[19]);
        v19 = (void *)v7[23];
        v7[19] = 0;
        v7[6] = 0;
        *v7 = 0;
        if ( v19 )
        {
          v7[24] = 0;
          qfree(v19);
        }
        v20 = (void *)v7[20];
        if ( v20 )
        {
          v7[21] = 0;
          qfree(v20);
        }
        operator delete(v7, 0xD0u);
      }
    }
    while ( v6 );
    if ( !qword_2CCBF80 )
    {
LABEL_37:
      sub_4E5AC0((_QWORD *)qword_2CCBF30);
      qword_2CCBF30 = 0;
      qword_2CCBF38 = (__int64)&dword_2CCBF28;
      qword_2CCBF40 = (__int64)&dword_2CCBF28;
      qword_2CCBF48 = 0;
    }
    if ( qword_2CCBF88 )
      qmutex_free(qword_2CCBF88);
    qword_2CCBF88 = nullptr;
  }
  return v26 - __readfsqword(0x28u);
}
