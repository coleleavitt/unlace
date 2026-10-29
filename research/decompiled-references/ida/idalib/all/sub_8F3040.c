__int64 __fastcall sub_8F3040(__int64 a1, size_t *a2, const void *a3)
{
  __int64 v4; // rbp
  int v6; // eax
  size_t v7; // r14
  __int64 v8; // rdi
  __int64 *v9; // r15
  size_t v10; // rdx
  size_t v11; // rax
  __int64 v12; // rsi
  size_t v13; // rcx
  void *v14; // rdi
  unsigned int v15; // r15d
  bool v16; // zf
  __int64 v18; // rdi
  __int64 (*v19)(); // rax
  char v20; // [rsp+1Fh] [rbp-59h] BYREF
  const char *v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  v21 = "file:write";
  if ( unk_2C820E0 )
  {
    if ( *(_DWORD *)(v4 + 112) <= dword_2CD72F4 )
    {
      if ( !under_debugger )
        interr(2386);
LABEL_42:
      BUG();
    }
    dword_2CD72F4 = *(_DWORD *)(v4 + 112);
    if ( *(_DWORD *)(v4 + 120) )
      sub_8EFAF0();
  }
  pthread_rwlock_rdlock((pthread_rwlock_t *)(v4 + 32));
  _InterlockedAdd((volatile signed __int32 *)(v4 + 120), 1u);
  v6 = *(_DWORD *)(a1 + 136);
  if ( (v6 & 2) == 0 )
  {
    if ( !under_debugger )
      interr(2242);
    goto LABEL_42;
  }
  v7 = *a2;
  if ( (v6 & 4) == 0 )
    goto LABEL_6;
  MD5Update(a1 + 48, a3, v7);
  v18 = *(_QWORD *)(a1 + 16);
  if ( !v18 )
    goto LABEL_6;
  v19 = *(__int64 (**)())(*(_QWORD *)v18 + 8LL);
  if ( v19 == sub_8C83E0 )
  {
    *(_BYTE *)(a1 + 140) = 0;
    goto LABEL_6;
  }
  v15 = ((__int64 (__fastcall *)(__int64, __int64, size_t))v19)(v18, 1, v7);
  *(_BYTE *)(a1 + 140) = v15 == 1;
  if ( !v15 )
  {
LABEL_6:
    v8 = *(_QWORD *)(a1 + 152);
    v9 = *(__int64 **)(a1 + 144);
    v10 = v7 + v8;
    v11 = v9[1];
    if ( v7 )
    {
      if ( v11 >= v10 )
      {
LABEL_18:
        v14 = (void *)(*v9 + v8);
        v15 = 0;
        memcpy(v14, a3, v7);
        *(_QWORD *)(a1 + 152) += v7;
        goto LABEL_19;
      }
      v20 = 0;
    }
    else
    {
      v20 = 0;
      if ( v10 < v11 )
      {
LABEL_17:
        v9[1] = v10;
        v9 = *(__int64 **)(a1 + 144);
        v8 = *(_QWORD *)(a1 + 152);
        goto LABEL_18;
      }
      if ( v11 >= v10 )
        goto LABEL_18;
    }
    v12 = *v9;
    v13 = v9[2];
    if ( (unsigned __int64)&v20 < *v9 || (unsigned __int64)&v20 >= v12 + v13 )
    {
      if ( v13 < v10 )
      {
        *v9 = qvector_reserve(v9, v12, v10, 1);
        v10 = v7 + v8;
        v11 = v9[1];
      }
      if ( v11 < v10 )
      {
        do
          *(_BYTE *)(*v9 + v11++) = 0;
        while ( v11 != v10 );
      }
    }
    else
    {
      if ( v13 < v10 )
      {
        *v9 = qvector_reserve(v9, v12, v10, 1);
        v10 = v7 + v8;
        v11 = v9[1];
      }
      if ( v11 < v10 )
      {
        do
          *(_BYTE *)(*v9 + v11++) = 0;
        while ( v11 != v10 );
      }
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( *(int *)(v4 + 120) <= 0 )
    sub_8EFB30();
  _InterlockedSub((volatile signed __int32 *)(v4 + 120), 1u);
  v16 = *(_BYTE *)(v4 + 116) == 0;
  dword_2CD72F4 = 0;
  if ( !v16 )
    *(_BYTE *)(v4 + 116) = 0;
  pthread_rwlock_unlock((pthread_rwlock_t *)(v4 + 32));
  return v15;
}
