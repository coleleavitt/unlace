/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D290
// Address: 0x000000000006D290

//----- (000000000006D290) ----------------------------------------------------
__int64 __fastcall sub_6D290(_QWORD *a1, const char *a2)
{
  pthread_mutex_t *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  const char *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _BYTE *v10; // r15
  __int64 v11; // rbp
  size_t v12; // rax
  size_t v13; // r14
  _QWORD *v14; // r12
  unsigned __int64 v15; // rbx
  bool v16; // cf
  void *v17; // rax
  pthread_mutex_t *v19; // [rsp+0h] [rbp-38h]

  if ( !a2 )
    return 0;
  v3 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v4 = 56LL * a1[12];
  if ( v4 )
  {
    v19 = v3;
    v5 = a1[11] + 24LL;
    v6 = 0;
    while ( 1 )
    {
      v7 = s1;
      if ( *(_QWORD *)(v5 - 16) )
        v7 = *(const char **)(v5 - 24);
      if ( !strcmp(v7, a2) )
        break;
      v5 += 56;
      v4 -= 56;
      if ( !v4 )
        goto LABEL_12;
    }
    v6 = v5;
LABEL_12:
    v3 = v19;
  }
  else
  {
    v6 = 0;
  }
  qmutex_unlock(v3);
  if ( !v6 )
  {
    v8 = a1 + 11;
    v9 = a1[12];
    if ( a1[13] >= (unsigned __int64)(v9 + 1) )
    {
      v10 = (_BYTE *)*v8;
    }
    else
    {
      v10 = qvector_reserve((__int64)v8, (char *)a1[11], v9 + 1, 0x38u);
      a1[11] = v10;
      v9 = a1[12];
    }
    v11 = 56 * v9;
    *(_OWORD *)&v10[v11] = 0;
    *(_QWORD *)&v10[v11 + 16] = 0;
    v10[v11 + 24] = 2;
    *(_OWORD *)&v10[v11 + 32] = 0;
    *(_QWORD *)&v10[v11 + 48] = 0;
    *(_QWORD *)&v10[v11 + 32] = 0;
    ++a1[12];
    v12 = strlen(a2);
    if ( v12 )
    {
      v13 = v12;
      v14 = &v10[v11];
      v15 = v12 + 1;
      v16 = *(_QWORD *)&v10[v11 + 16] < v12 + 1;
      v17 = *(void **)&v10[v11];
      if ( v16 )
      {
        v17 = qvector_reserve((__int64)&v10[v11], *(char **)&v10[v11], v15, 1u);
        *v14 = v17;
      }
      *(_QWORD *)&v10[v11 + 8] = v15;
      memmove(v17, a2, v13);
      *(_BYTE *)(*v14 + v13) = 0;
    }
    else
    {
      *(_QWORD *)&v10[v11 + 8] = 0;
    }
    return (__int64)&v10[v11 + 24];
  }
  return v6;
}
