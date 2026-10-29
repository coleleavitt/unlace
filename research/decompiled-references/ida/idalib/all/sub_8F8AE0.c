__int64 __fastcall sub_8F8AE0(__int64 a1, char *a2)
{
  int v3; // ecx
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbp
  char *v7; // r15
  char *v8; // r14
  __int64 v9; // r13
  const char *v10; // rax
  char *v11; // r12
  char *v12; // rbp
  const char *v13; // rsi
  const char *v14; // rdi
  int v15; // eax
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rdi
  unsigned int v20; // ebp
  bool v21; // zf
  const char *v23; // [rsp+0h] [rbp-88h]
  int v25[2]; // [rsp+10h] [rbp-78h]
  pthread_rwlock_t *rwlock; // [rsp+18h] [rbp-70h]
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  int v28[4]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  rwlock = (pthread_rwlock_t *)(a1 + 32);
  if ( unk_2C820E0 )
  {
    if ( *(_DWORD *)(a1 + 112) <= dword_2CD72F4 )
    {
      if ( !under_debugger )
        interr(2388);
      BUG();
    }
    v3 = *(_DWORD *)(a1 + 120);
    dword_2CD72F4 = *(_DWORD *)(a1 + 112);
    if ( v3 )
      sub_8EFB10();
  }
  pthread_rwlock_wrlock(rwlock);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
  *(_BYTE *)(a1 + 116) = 1;
  s2 = nullptr;
  *(_OWORD *)v28 = 0;
  if ( !a2 )
  {
    v7 = *(char **)(a1 + 144);
    v8 = nullptr;
    *(_QWORD *)v25 = a1 + 136;
    if ( v7 )
      goto LABEL_6;
LABEL_37:
    v11 = *(char **)v25;
    goto LABEL_26;
  }
  v4 = strlen(a2);
  v5 = v4 + 1;
  v6 = v4;
  s2 = (char *)qvector_reserve(&s2, 0, v4 + 1, 1);
  *(_QWORD *)v28 = v5;
  memmove(s2, a2, v6);
  s2[v6] = 0;
  v7 = *(char **)(a1 + 144);
  *(_QWORD *)v25 = a1 + 136;
  v8 = s2;
  if ( !v7 )
  {
    if ( s2 )
    {
      *(_QWORD *)v28 = 0;
      qfree(s2);
    }
    goto LABEL_37;
  }
LABEL_6:
  v9 = *(_QWORD *)v28;
  v10 = haystack;
  v11 = *(char **)v25;
  if ( *(_QWORD *)v28 )
    v10 = v8;
  v23 = v10;
  while ( 1 )
  {
    v17 = *((_QWORD *)v7 + 5);
    if ( !v9 )
      break;
    if ( v17 )
      goto LABEL_18;
    v12 = v7;
    v13 = v8;
    v14 = haystack;
LABEL_11:
    v15 = strcmp(v14, v13);
    v16 = *((char **)v7 + 2);
    v7 = *((char **)v7 + 3);
    if ( v15 >= 0 )
    {
      v11 = v12;
      v7 = v16;
    }
    if ( !v7 )
      goto LABEL_20;
  }
  if ( v17 )
  {
LABEL_18:
    v14 = *((const char **)v7 + 4);
    v13 = v23;
    v12 = v7;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v7 + 2);
    if ( !v18 )
      break;
    v11 = v7;
    v7 = *((char **)v7 + 2);
    if ( *(_QWORD *)(v18 + 40) )
      goto LABEL_18;
  }
  v11 = v7;
LABEL_20:
  if ( v8 )
  {
    *(_QWORD *)v28 = 0;
    qfree(v8);
  }
  if ( *(char **)v25 == v11 )
    goto LABEL_26;
  v19 = haystack;
  if ( *((_QWORD *)v11 + 5) )
    v19 = *((const char **)v11 + 4);
  if ( !strcmp(v19, a2) )
  {
    v20 = sub_8FD540(17, a2);
  }
  else
  {
LABEL_26:
    s2 = v11;
    v20 = sub_8F81B0((_QWORD *)a1, &s2, a2);
    if ( !v20 )
      sub_8F0550(*(__int64 **)(*(_QWORD *)(a1 + 176) + 16LL * *((_QWORD *)s2 + 7)));
  }
  if ( *(int *)(a1 + 120) <= 0 )
    sub_8EFB30();
  _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
  v21 = *(_BYTE *)(a1 + 116) == 0;
  dword_2CD72F4 = 0;
  if ( !v21 )
    *(_BYTE *)(a1 + 116) = 0;
  pthread_rwlock_unlock(rwlock);
  return v20;
}
