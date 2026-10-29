int __fastcall sub_5FE6F0(__int64 a1, unsigned int a2, const char *a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned int **v9; // r8
  unsigned __int64 v10; // r9
  _QWORD *v11; // rbx
  __int64 v12; // rax
  pthread_rwlock_t *v13; // r13
  unsigned __int64 v14; // rdi
  unsigned int *v15; // rax
  unsigned int *v16; // rbp
  unsigned int v17; // r12d
  unsigned int *v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r9
  unsigned __int64 v21; // rtt
  unsigned int **v22; // r10
  unsigned __int64 v23; // r8
  unsigned int *v24; // rax
  unsigned int *v25; // rcx
  __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v32[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v33; // [rsp+20h] [rbp-38h]
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v6 = sub_41FEF0(a1, 2u);
  if ( !v6 || !a2 )
    return v34 - __readfsqword(0x28u);
  v11 = (_QWORD *)v6;
  if ( !a4 )
  {
    v31 = 0;
    v33 = 257;
    v32[1] = a2;
    v32[0] = get_idati(a1, 2);
    if ( (unsigned __int8)create_tinfo(&v31, 61, 189, v32) )
      sub_42F500(v11, a3, a2, &v31);
    clear_tinfo_t(&v31);
    return v34 - __readfsqword(0x28u);
  }
  v13 = *(pthread_rwlock_t **)(v6 + 8);
  if ( !v13 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(*(pthread_rwlock_t **)(v6 + 8)) == 35 )
    std::__throw_system_error(35);
  if ( !v11[10] )
  {
    v16 = (unsigned int *)v11[9];
    if ( !v16 )
      goto LABEL_28;
    while ( a2 != v16[2] )
    {
      v16 = *(unsigned int **)v16;
      if ( !v16 )
        goto LABEL_28;
    }
LABEL_19:
    v17 = v16[3];
    (*(void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64, unsigned int **, unsigned __int64))(*v11 + 48LL))(
      v11,
      v17,
      v7,
      v8,
      v9,
      v10);
    LODWORD(v32[0]) = v17;
    v18 = (unsigned int *)v11[4];
    if ( v18 == (unsigned int *)v11[5] )
    {
      sub_4208B0((__int64)(v11 + 3), v32);
    }
    else
    {
      *v18 = v17;
      v11[4] += 4LL;
    }
    v19 = v11[8];
    v20 = v11[7];
    v21 = v16[2];
    v22 = (unsigned int **)(v20 + 8 * (v21 % v19));
    v23 = v21 % v19;
    v24 = *v22;
    do
    {
      v25 = v24;
      v24 = *(unsigned int **)v24;
    }
    while ( v24 != v16 );
    v26 = *(_QWORD *)v16;
    if ( *v22 == v25 )
    {
      if ( v26 )
      {
        v29 = *(unsigned int *)(v26 + 8) % v19;
        if ( v23 != v29 )
        {
          *(_QWORD *)(v20 + 8 * v29) = v25;
          *(_QWORD *)(v11[7] + 8 * v23) = 0;
          v26 = *(_QWORD *)v16;
        }
      }
      else
      {
        *v22 = nullptr;
        v26 = *(_QWORD *)v16;
      }
    }
    else if ( v26 )
    {
      v27 = *(unsigned int *)(v26 + 8) % v19;
      if ( v23 != v27 )
      {
        *(_QWORD *)(v20 + 8 * v27) = v25;
        v26 = *(_QWORD *)v16;
      }
    }
    *(_QWORD *)v25 = v26;
    operator delete(v16, 0x10u);
    v28 = v11[1];
    --v11[10];
    ++*(_QWORD *)(v28 + 56);
    goto LABEL_28;
  }
  v14 = v11[8];
  v7 = a2 % v14;
  v9 = *(unsigned int ***)(v11[7] + 8 * v7);
  v10 = v7;
  if ( !v9 )
    goto LABEL_28;
  v15 = *v9;
  v8 = (*v9)[2];
  if ( a2 == (_DWORD)v8 )
  {
LABEL_17:
    if ( !v9 )
      goto LABEL_28;
    v16 = *v9;
    if ( !*v9 )
      goto LABEL_28;
    goto LABEL_19;
  }
  while ( *(_QWORD *)v15 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)v15 + 8LL);
    v9 = (unsigned int **)v15;
    v7 = v8 % v14;
    if ( v10 != v8 % v14 )
      break;
    v15 = *(unsigned int **)v15;
    if ( a2 == (_DWORD)v8 )
      goto LABEL_17;
  }
LABEL_28:
  if ( &_pthread_key_create )
  {
    LODWORD(v12) = pthread_rwlock_unlock(v13);
    return v12;
  }
  return v34 - __readfsqword(0x28u);
}

