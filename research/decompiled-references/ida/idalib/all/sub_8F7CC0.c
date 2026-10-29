__int64 __fastcall sub_8F7CC0(__int64 a1, const char *a2)
{
  pthread_rwlock_t *v3; // r12
  int v4; // edx
  int v5; // edi
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r14
  void *v9; // rax
  void *v10; // r13
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rdi
  bool v16; // zf
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  int v19[4]; // [rsp+28h] [rbp-50h]
  int v20[2]; // [rsp+38h] [rbp-40h]

  v3 = (pthread_rwlock_t *)(a1 + 32);
  *(_QWORD *)v20 = __readfsqword(0x28u);
  sub_8F5B20(a1, (__int64)a2);
  if ( unk_2C820E0 )
  {
    v4 = *(_DWORD *)(a1 + 112);
    if ( v4 <= dword_2CD72F4 )
    {
      if ( !under_debugger )
        interr(2388);
      BUG();
    }
    v5 = *(_DWORD *)(a1 + 120);
    dword_2CD72F4 = v4;
    if ( v5 )
      sub_8EFB10();
  }
  pthread_rwlock_wrlock(v3);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
  *(_BYTE *)(a1 + 116) = 1;
  ptr = nullptr;
  *(_OWORD *)v19 = 0;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)v19 = v7;
    ptr = v9;
    memmove(v9, a2, v8);
    *((_BYTE *)ptr + v8) = 0;
    v10 = ptr;
    v11 = sub_8F78A0(a1 + 128, (__int64)&ptr);
    if ( v10 )
    {
      *(_QWORD *)v19 = 0;
      qfree(v10);
    }
  }
  else
  {
    v11 = sub_8F78A0(a1 + 128, (__int64)&ptr);
  }
  if ( v11 == (_QWORD *)(a1 + 136) )
    goto LABEL_16;
  v12 = v11[7];
  if ( v12 >= *(_QWORD *)(a1 + 184) )
    sub_8EFB50();
  v13 = *(_QWORD *)(a1 + 176) + 16 * v12;
  if ( !v13 )
  {
LABEL_16:
    if ( *(int *)(a1 + 120) <= 0 )
      sub_8EFB30();
    _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
    v16 = *(_BYTE *)(a1 + 116) == 0;
    dword_2CD72F4 = 0;
    if ( !v16 )
      *(_BYTE *)(a1 + 116) = 0;
    pthread_rwlock_unlock(v3);
    return (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL))(a1, a2);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 200) = v14 + 1;
    v15 = *(__int64 **)v13;
    *(_QWORD *)(v13 + 8) = v14 + 1;
    sub_8F0550(v15);
    if ( *(int *)(a1 + 120) <= 0 )
      sub_8EFB30();
    _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
    v16 = *(_BYTE *)(a1 + 116) == 0;
    dword_2CD72F4 = 0;
    if ( !v16 )
      *(_BYTE *)(a1 + 116) = 0;
    pthread_rwlock_unlock(v3);
    return 0;
  }
}
