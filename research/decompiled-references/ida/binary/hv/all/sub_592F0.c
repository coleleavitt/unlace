__int64 __fastcall sub_592F0(__int64 a1, __int64 a2, __int64 a3)
{
  pthread_rwlock_t *v3; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi
  _QWORD **v9; // rbx
  void *v10; // rdi
  bool v11; // zf
  _UNKNOWN **v13; // [rsp+10h] [rbp-C8h] BYREF
  int v14; // [rsp+20h] [rbp-B8h] BYREF
  void *v15; // [rsp+28h] [rbp-B0h]
  int *v16; // [rsp+30h] [rbp-A8h]
  int *v17; // [rsp+38h] [rbp-A0h]
  __int64 v18; // [rsp+40h] [rbp-98h]
  int v19; // [rsp+50h] [rbp-88h] BYREF
  void *v20; // [rsp+58h] [rbp-80h]
  int *v21; // [rsp+60h] [rbp-78h]
  int *v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+70h] [rbp-68h]
  char v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+80h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp-50h]
  unsigned __int64 v27; // [rsp+98h] [rbp-40h]

  v3 = (pthread_rwlock_t *)(a1 + 32);
  v27 = __readfsqword(0x28u);
  if ( LOBYTE(qword_165660[0]) )
  {
    if ( *(_DWORD *)(a1 + 112) <= dword_165A14 )
    {
      if ( !byte_1671A1 )
        sub_96F80(2386);
      BUG();
    }
    dword_165A14 = *(_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 120) )
      sub_55F90();
  }
  pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 32));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
  v24 = 0;
  v16 = &v14;
  v17 = &v14;
  v21 = &v19;
  v22 = &v19;
  v14 = 0;
  v15 = nullptr;
  v18 = 0;
  v19 = 0;
  v20 = nullptr;
  v23 = 0;
  v13 = &off_1631A8;
  v25 = a2;
  v26 = a1 + 176;
  sub_66200(&v13, a1 + 128, a3, 0);
  v6 = v20;
  v13 = &off_1646F8;
  if ( v20 )
  {
    do
    {
      v7 = v6;
      sub_57190((_QWORD *)v6[3]);
      v8 = (void *)v6[4];
      v6 = (_QWORD *)v6[2];
      if ( v8 )
      {
        v7[5] = 0;
        j__free(v8);
      }
      operator delete(v7, 0x38u);
    }
    while ( v6 );
  }
  v9 = (_QWORD **)v15;
  if ( v15 )
  {
    do
    {
      sub_56820(v9[3]);
      v10 = v9;
      v9 = (_QWORD **)v9[2];
      operator delete(v10, 0x28u);
    }
    while ( v9 );
  }
  if ( *(int *)(a1 + 120) <= 0 )
    sub_55FD0();
  _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
  v11 = *(_BYTE *)(a1 + 116) == 0;
  dword_165A14 = 0;
  if ( !v11 )
    *(_BYTE *)(a1 + 116) = 0;
  pthread_rwlock_unlock(v3);
  return 1;
}

