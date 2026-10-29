__int64 __fastcall sub_8F9050(__int64 a1, const char *a2, char a3)
{
  int v5; // esi
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // rbp
  void *v9; // rax
  __int64 v10; // r14
  void *v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  void *v17; // rdi
  size_t v18; // r15
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r14
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rax
  void *v25; // rdi
  void *v26; // r15
  unsigned int v27; // ebp
  bool v28; // zf
  pthread_rwlock_t *rwlock; // [rsp+8h] [rbp-80h]
  _QWORD *v32; // [rsp+18h] [rbp-70h]
  _QWORD *v33; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  rwlock = (pthread_rwlock_t *)(a1 + 32);
  if ( unk_2C820E0 )
  {
    if ( *(_DWORD *)(a1 + 112) <= dword_2CD72F4 )
    {
      if ( !under_debugger )
        interr(2388);
      BUG();
    }
    v5 = *(_DWORD *)(a1 + 120);
    dword_2CD72F4 = *(_DWORD *)(a1 + 112);
    if ( v5 )
      sub_8EFB10();
  }
  pthread_rwlock_wrlock(rwlock);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
  *(_BYTE *)(a1 + 116) = 1;
  ptr = nullptr;
  v35 = 0;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v35 = v7;
    ptr = v9;
    v10 = a1 + 128;
    memmove(v9, a2, v8);
    *((_BYTE *)ptr + v8) = 0;
    v11 = ptr;
    v12 = sub_8F78A0(a1 + 128, (__int64)&ptr);
    if ( v11 )
    {
      v32 = v12;
      *(_QWORD *)&v35 = 0;
      qfree(v11);
      v12 = v32;
    }
  }
  else
  {
    v10 = a1 + 128;
    v12 = sub_8F78A0(a1 + 128, (__int64)&ptr);
  }
  v13 = (_QWORD *)(a1 + 136);
  if ( (_QWORD *)(a1 + 136) == v12 )
    goto LABEL_30;
  v14 = v12[7];
  if ( v14 >= *(_QWORD *)(a1 + 184) )
    sub_8EFB50();
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 16 * v14);
  if ( !v15 )
  {
LABEL_30:
    set_error_string(0, a2);
    v27 = 3;
  }
  else
  {
    v16 = (_QWORD *)*v15;
    v17 = (void *)*v16;
    if ( *v16 )
    {
      v16[1] = 0;
      v33 = v16;
      qfree(v17);
      *v33 = 0;
      v33[2] = 0;
    }
    ptr = nullptr;
    v35 = 0;
    if ( a2 )
    {
      v18 = strlen(a2);
      ptr = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
      *(_QWORD *)&v35 = v18 + 1;
      memmove(ptr, a2, v18);
      *((_BYTE *)ptr + v18) = 0;
    }
    v19 = sub_8F8EB0(v10, (__int64)&ptr);
    v21 = v20;
    v22 = (__int64)v19;
    if ( *(_QWORD **)(a1 + 152) == v19 && v13 == v20 )
    {
      sub_8F11D0(*(_QWORD **)(a1 + 144));
      *(_QWORD *)(a1 + 152) = v13;
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 160) = v13;
      *(_QWORD *)(a1 + 168) = 0;
    }
    else if ( v20 != v19 )
    {
      do
      {
        v23 = v22;
        v22 = std::_Rb_tree_increment(v22);
        v24 = std::_Rb_tree_rebalance_for_erase(v23, a1 + 136);
        v25 = *(void **)(v24 + 32);
        v26 = (void *)v24;
        if ( v25 )
        {
          *(_QWORD *)(v24 + 40) = 0;
          qfree(v25);
        }
        operator delete(v26, 0x40u);
        --*(_QWORD *)(a1 + 168);
      }
      while ( v21 != (_QWORD *)v22 );
    }
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
    if ( (a3 & 4) != 0 )
      sub_8C98A0(*(_QWORD **)(a1 + 8), a2);
    v27 = 0;
  }
  if ( *(int *)(a1 + 120) <= 0 )
    sub_8EFB30();
  _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
  v28 = *(_BYTE *)(a1 + 116) == 0;
  dword_2CD72F4 = 0;
  if ( !v28 )
    *(_BYTE *)(a1 + 116) = 0;
  pthread_rwlock_unlock(rwlock);
  return v27;
}
