__int64 __fastcall sub_8F8420(__int64 a1, _QWORD *a2, char *a3, int a4)
{
  int v5; // r12d
  int v6; // r13d
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // rbp
  _QWORD *v10; // r15
  __int64 v11; // r14
  const char *v12; // rax
  _QWORD *v13; // rbp
  const char *v14; // rsi
  _QWORD *v15; // r13
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ebp
  __int64 v22; // r13
  __int64 v23; // rax
  char *v24; // rdx
  __int64 v25; // rbp
  void *v26; // rax
  __int64 v28; // rdx
  int v29; // ebp
  bool v30; // zf
  void *v31; // rdi
  __int64 (***v32)(); // rdi
  __int64 (*v33)(); // rax
  char *s2; // [rsp+0h] [rbp-98h]
  char *s2a; // [rsp+0h] [rbp-98h]
  char *s2b; // [rsp+0h] [rbp-98h]
  const char *v37; // [rsp+8h] [rbp-90h]
  _QWORD *v39; // [rsp+18h] [rbp-80h]
  int v40; // [rsp+24h] [rbp-74h]
  _QWORD *v42; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = a4;
  v40 = a4 & 0x10;
  if ( (a4 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(a1 + 120) )
      goto LABEL_7;
    if ( !under_debugger )
      interr(2708);
    goto LABEL_75;
  }
  if ( (a4 & 2) == 0 )
  {
    if ( unk_2C820E0 )
    {
      if ( *(_DWORD *)(a1 + 112) <= dword_2CD72F4 )
      {
        if ( !under_debugger )
          interr(2386);
        goto LABEL_75;
      }
      v29 = *(_DWORD *)(a1 + 120);
      dword_2CD72F4 = *(_DWORD *)(a1 + 112);
      if ( v29 )
        sub_8EFAF0(a1);
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 32));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
    goto LABEL_7;
  }
  if ( unk_2C820E0 )
  {
    if ( *(_DWORD *)(a1 + 112) > dword_2CD72F4 )
    {
      v6 = *(_DWORD *)(a1 + 120);
      dword_2CD72F4 = *(_DWORD *)(a1 + 112);
      if ( v6 )
        sub_8EFB10();
      goto LABEL_6;
    }
    if ( !under_debugger )
      interr(2388);
LABEL_75:
    BUG();
  }
LABEL_6:
  pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 32));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
  *(_BYTE *)(a1 + 116) = 1;
LABEL_7:
  ptr = nullptr;
  v44 = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
    *(_QWORD *)&v44 = v8;
    memmove(ptr, a3, v9);
    *((_BYTE *)ptr + v9) = 0;
    v10 = *(_QWORD **)(a1 + 144);
    s2 = (char *)ptr;
    v39 = (_QWORD *)(a1 + 136);
    if ( !v10 )
    {
      v42 = (_QWORD *)(a1 + 136);
      if ( ptr )
        goto LABEL_27;
      goto LABEL_31;
    }
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 144);
    s2 = nullptr;
    v39 = (_QWORD *)(a1 + 136);
    if ( !v10 )
    {
      v42 = (_QWORD *)(a1 + 136);
      goto LABEL_31;
    }
  }
  v11 = v44;
  v12 = haystack;
  v13 = v39;
  if ( (_QWORD)v44 )
    v12 = s2;
  v37 = v12;
  while ( 1 )
  {
    v19 = v10[5];
    if ( !v11 )
      break;
    if ( v19 )
      goto LABEL_21;
    v14 = s2;
    v15 = v10;
    v16 = haystack;
LABEL_14:
    v17 = strcmp(v16, v14);
    v18 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v17 >= 0 )
    {
      v13 = v15;
      v10 = v18;
    }
    if ( !v10 )
      goto LABEL_26;
  }
  if ( v19 )
  {
LABEL_21:
    v16 = (const char *)v10[4];
    v14 = v37;
    v15 = v10;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v20 = v10[2];
    if ( !v20 )
      break;
    v13 = v10;
    v10 = (_QWORD *)v10[2];
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_21;
  }
  v13 = v10;
LABEL_26:
  v42 = v13;
  if ( s2 )
  {
LABEL_27:
    *(_QWORD *)&v44 = 0;
    qfree(s2);
    v13 = v42;
  }
  if ( v13 != v39 )
  {
    if ( !v13[5] )
    {
      if ( strcmp(haystack, a3) )
        goto LABEL_31;
LABEL_44:
      if ( (v5 & 2) != 0 )
      {
        v28 = *(_QWORD *)(a1 + 200) + 1LL;
        *(_QWORD *)(a1 + 200) = v28;
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL * v13[7] + 8) = v28;
      }
LABEL_35:
      s2a = *(char **)(a1 + 24);
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL * v13[7]);
      v23 = operator new(0xA0u);
      v24 = s2a;
      *(_QWORD *)v23 = &unk_2BFC820;
      v25 = v23;
      *(_QWORD *)(v23 + 8) = a1;
      if ( (v5 & 8) != 0 )
        v24 = nullptr;
      *(_QWORD *)(v23 + 24) = 0;
      *(_OWORD *)(v23 + 32) = 0;
      *(_QWORD *)(v23 + 16) = v24;
      if ( a3 )
      {
        s2b = (char *)strlen(a3);
        v26 = (void *)qvector_reserve(v25 + 24, 0, s2b + 1, 1);
        *(_QWORD *)(v25 + 24) = v26;
        *(_QWORD *)(v25 + 32) = s2b + 1;
        memmove(v26, a3, (size_t)s2b);
        s2b[*(_QWORD *)(v25 + 24)] = 0;
      }
      *(_QWORD *)(v25 + 48) = 0;
      *(_QWORD *)(v25 + 128) = 0;
      memset(
        (void *)((v25 + 56) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((_DWORD)v25 + 48 - (((_DWORD)v25 + 56) & 0xFFFFFFF8) + 88) >> 3));
      *(_DWORD *)(v25 + 136) = v5;
      *(_BYTE *)(v25 + 140) = 0;
      if ( (v5 & 4) != 0 )
      {
        MD5Init(v25 + 48);
        v32 = *(__int64 (****)())(v25 + 16);
        if ( v32 )
        {
          v33 = **v32;
          if ( v33 != sub_8CE200 )
            ((void (__fastcall *)(__int64 (***)(), char *, double))v33)(v32, a3, 0.0);
        }
        v5 = *(_DWORD *)(v25 + 136);
      }
      *(_QWORD *)(v25 + 144) = v22;
      *(_QWORD *)v25 = &off_2B3FED8;
      *(_QWORD *)(v25 + 152) = 0;
      if ( (v5 & 2) != 0 )
      {
        v31 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)(v22 + 8) = 0;
          qfree(v31);
          *(_QWORD *)v22 = 0;
          *(_QWORD *)(v22 + 16) = 0;
        }
      }
      *a2 = v25;
      v21 = 0;
      goto LABEL_42;
    }
    if ( !strcmp((const char *)v13[4], a3) )
      goto LABEL_44;
  }
LABEL_31:
  if ( (v5 & 2) != 0 )
    v21 = sub_8F81B0((_QWORD *)a1, &v42, a3);
  else
    v21 = sub_8FD540(2, a3);
  if ( !v21 )
  {
    v13 = v42;
    goto LABEL_35;
  }
LABEL_42:
  if ( !v40 )
  {
    if ( *(int *)(a1 + 120) <= 0 )
      sub_8EFB30();
    _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
    v30 = *(_BYTE *)(a1 + 116) == 0;
    dword_2CD72F4 = 0;
    if ( !v30 )
      *(_BYTE *)(a1 + 116) = 0;
    pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 32));
  }
  return v21;
}
