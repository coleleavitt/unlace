__int64 __fastcall sub_8CEC60(__int64 a1, const char *a2)
{
  unsigned int v4; // r12d
  int v6; // ecx
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r12
  _QWORD *v10; // r15
  __int64 v11; // r13
  const char *v12; // rax
  _QWORD *v13; // r14
  const char *v14; // rsi
  _QWORD *v15; // r12
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  bool v21; // zf
  const char *v22; // r15
  size_t v23; // rax
  size_t v24; // r13
  const char *v25; // [rsp+0h] [rbp-88h]
  char *s2; // [rsp+8h] [rbp-80h]
  _QWORD *v27; // [rsp+10h] [rbp-78h]
  pthread_rwlock_t *rwlock; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !*a2 )
    return 0;
  v4 = 1;
  if ( strcmp(a2, "/tmpdir") )
  {
    rwlock = (pthread_rwlock_t *)(a1 + 32);
    if ( unk_2C581E0 )
    {
      if ( *(_DWORD *)(a1 + 112) <= dword_2CAD3D4 )
      {
        if ( !under_debugger )
          interr(2386);
        BUG();
      }
      v6 = *(_DWORD *)(a1 + 120);
      dword_2CAD3D4 = *(_DWORD *)(a1 + 112);
      if ( v6 )
        sub_8CBDB0();
    }
    pthread_rwlock_rdlock(rwlock);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
    ptr = nullptr;
    v30 = 0;
    if ( a2 )
    {
      v7 = strlen(a2);
      v8 = v7 + 1;
      v9 = v7;
      ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
      *(_QWORD *)&v30 = v8;
      memmove(ptr, a2, v9);
      *((_BYTE *)ptr + v9) = 0;
      v10 = *(_QWORD **)(a1 + 144);
      s2 = (char *)ptr;
      v27 = (_QWORD *)(a1 + 136);
      if ( !v10 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          qfree(ptr);
        }
        goto LABEL_24;
      }
    }
    else
    {
      v10 = *(_QWORD **)(a1 + 144);
      s2 = nullptr;
      v27 = (_QWORD *)(a1 + 136);
      if ( !v10 )
        goto LABEL_24;
    }
    v11 = v30;
    v12 = haystack;
    v13 = v27;
    if ( (_QWORD)v30 )
      v12 = s2;
    v25 = v12;
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
        goto LABEL_30;
    }
    if ( !v19 )
    {
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
LABEL_30:
      if ( s2 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(s2);
      }
      if ( v27 != v13 )
      {
        v22 = haystack;
        v23 = strlen(a2);
        v24 = v23;
        if ( v13[5] )
          v22 = (const char *)v13[4];
        if ( !strncmp(v22, a2, v23) )
        {
          v4 = 1;
          if ( v22[v24] != 47 )
            LOBYTE(v4) = v22[v24 - 1] == 47;
LABEL_25:
          if ( *(int *)(a1 + 120) <= 0 )
            sub_8CBDF0();
          _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
          v21 = *(_BYTE *)(a1 + 116) == 0;
          dword_2CAD3D4 = 0;
          if ( !v21 )
            *(_BYTE *)(a1 + 116) = 0;
          pthread_rwlock_unlock(rwlock);
          return v4;
        }
      }
LABEL_24:
      v4 = 0;
      goto LABEL_25;
    }
LABEL_21:
    v16 = (const char *)v10[4];
    v14 = v25;
    v15 = v10;
    goto LABEL_14;
  }
  return v4;
}

