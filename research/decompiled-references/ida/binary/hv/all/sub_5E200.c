__int64 __fastcall sub_5E200(__int64 a1, const char *a2)
{
  pthread_rwlock_t *v3; // r12
  int v4; // edx
  int v5; // edi
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r14
  void *v9; // rax
  void *v10; // r13
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  bool v18; // zf
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  int v21[4]; // [rsp+28h] [rbp-50h]
  int v22[2]; // [rsp+38h] [rbp-40h]

  v3 = (pthread_rwlock_t *)(a1 + 32);
  *(_QWORD *)v22 = __readfsqword(0x28u);
  sub_5C060(a1, (__int64)a2);
  if ( LOBYTE(qword_165660[0]) )
  {
    v4 = *(_DWORD *)(a1 + 112);
    if ( v4 <= dword_165A14 )
    {
      if ( !byte_1671A1 )
        sub_96F80(2388);
      BUG();
    }
    v5 = *(_DWORD *)(a1 + 120);
    dword_165A14 = v4;
    if ( v5 )
      sub_55FB0();
  }
  pthread_rwlock_wrlock(v3);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
  *(_BYTE *)(a1 + 116) = 1;
  ptr = nullptr;
  *(_OWORD *)v21 = 0;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)sub_96080(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)v21 = v7;
    ptr = v9;
    memmove(v9, a2, v8);
    *((_BYTE *)ptr + v8) = 0;
    v10 = ptr;
    v13 = sub_5DDE0(a1 + 128, (__int64)&ptr);
    if ( v10 )
    {
      *(_QWORD *)v21 = 0;
      j__free(v10);
    }
  }
  else
  {
    v13 = sub_5DDE0(a1 + 128, (__int64)&ptr);
  }
  if ( v13 == (_QWORD *)(a1 + 136) )
    goto LABEL_16;
  v14 = v13[7];
  if ( v14 >= *(_QWORD *)(a1 + 184) )
    sub_55FF0();
  v15 = *(_QWORD *)(a1 + 176) + 16 * v14;
  if ( !v15 )
  {
LABEL_16:
    if ( *(int *)(a1 + 120) <= 0 )
      sub_55FD0();
    _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
    v18 = *(_BYTE *)(a1 + 116) == 0;
    dword_165A14 = 0;
    if ( !v18 )
      *(_BYTE *)(a1 + 116) = 0;
    pthread_rwlock_unlock(v3);
    return (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL))(a1, a2);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 200) = v16 + 1;
    v17 = *(__int64 **)v15;
    *(_QWORD *)(v15 + 8) = v16 + 1;
    sub_569F0(v17, (int)&ptr, v16 + 1, v16, v11, v12);
    if ( *(int *)(a1 + 120) <= 0 )
      sub_55FD0();
    _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
    v18 = *(_BYTE *)(a1 + 116) == 0;
    dword_165A14 = 0;
    if ( !v18 )
      *(_BYTE *)(a1 + 116) = 0;
    pthread_rwlock_unlock(v3);
    return 0;
  }
}

