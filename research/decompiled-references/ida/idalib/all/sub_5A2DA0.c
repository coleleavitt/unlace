__int64 __fastcall sub_5A2DA0(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rax
  char **v6; // rbp
  char *v7; // rdx
  char *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r14
  char *v17; // rbx
  void **v18; // r12
  void *v19; // rdi
  __int64 v20; // r13
  char *v21; // r15
  __int64 v22; // rdi
  _QWORD *v23; // r15
  void *v24; // rdi
  void *v25; // rdi
  int v27; // eax
  __int64 v28; // rax
  char *v29; // r12
  void **v30; // r14
  void *v31; // rdi
  __int64 v32; // r13
  char *v33; // r15
  __int64 v34; // rdi
  _QWORD *v35; // r13
  void *v36; // rdi
  void *v37; // rdi
  char *v38; // rcx
  char *v39; // [rsp+0h] [rbp-50h]
  char *v40; // [rsp+0h] [rbp-50h]
  char *dest; // [rsp+8h] [rbp-48h]
  char *desta; // [rsp+8h] [rbp-48h]
  void *destb; // [rsp+8h] [rbp-48h]
  char *v44; // [rsp+10h] [rbp-40h]
  __int64 v45; // [rsp+10h] [rbp-40h]

  v3 = *(char **)(a1 + 168);
  if ( v3 == (char *)a2 )
    return 0;
  v6 = *(char ***)(a2 + 32);
  if ( !v6 )
  {
    sub_5A2B00(a1, *(const char **)a2, a3);
    return 1;
  }
  v7 = v6[1];
  if ( !v7 )
    return 1;
  v8 = *v6;
  if ( v3 == *v6 )
    return 0;
  if ( *(_BYTE *)(a1 + 60) )
  {
    if ( 56LL * (_QWORD)v7 )
      goto LABEL_11;
    v44 = v6[1];
    if ( !v8 )
      return 1;
    goto LABEL_16;
  }
  v27 = *(_DWORD *)(a2 + 48);
  if ( (v27 & 1) != 0 )
  {
    if ( 56LL * (_QWORD)v7 )
      goto LABEL_11;
LABEL_35:
    sub_5A2B00(a1, "}", a3);
    *(_DWORD *)(a2 + 48) &= ~1u;
    v6 = *(char ***)(a2 + 32);
LABEL_14:
    v8 = *v6;
    if ( *v6 )
    {
      v44 = v6[1];
      if ( !v44 )
      {
LABEL_31:
        v6[1] = nullptr;
        qfree(v8);
        *v6 = nullptr;
        v6[2] = nullptr;
        return 1;
      }
LABEL_16:
      v39 = nullptr;
      v16 = 0;
      do
      {
        v17 = &v8[v16];
        v18 = *((void ***)v17 + 4);
        if ( v18 )
        {
          v19 = *v18;
          if ( *v18 )
          {
            desta = (char *)v18[1];
            if ( desta )
            {
              v20 = 0;
              v21 = nullptr;
              do
              {
                v22 = (__int64)v19 + v20;
                ++v21;
                v20 += 56;
                sub_37C6A0(v22);
                v19 = *v18;
              }
              while ( desta != v21 );
            }
            v18[1] = nullptr;
            qfree(v19);
          }
          qfree(v18);
        }
        v23 = *((_QWORD **)v17 + 5);
        if ( v23 )
        {
          clear_tinfo_t(v23 + 5);
          v24 = (void *)v23[2];
          if ( v24 )
          {
            v23[3] = 0;
            qfree(v24);
          }
          cleanup_argloc(v23);
          qfree(v23);
        }
        v25 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v25);
        }
        ++v39;
        v16 += 56;
        v8 = *v6;
      }
      while ( v39 != v44 );
      goto LABEL_31;
    }
    return 1;
  }
  *(_DWORD *)(a2 + 48) = v27 | 1;
  sub_5A2B00(a1, "{", a3);
  v6 = *(char ***)(a2 + 32);
  v8 = *v6;
  if ( !(56LL * (_QWORD)v6[1]) )
  {
LABEL_13:
    if ( *(_BYTE *)(a1 + 60) )
      goto LABEL_14;
    goto LABEL_35;
  }
LABEL_11:
  while ( 1 )
  {
    v15 = sub_5A2DA0(a1, v8, (unsigned int)(a3 + 1));
    v6 = *(char ***)(a2 + 32);
    dest = *v6;
    if ( !v15 )
      break;
    v8 += 56;
    if ( v8 == &dest[56 * (_QWORD)v6[1]] )
      goto LABEL_13;
    v9 = *(_QWORD *)(a1 + 144);
    v10 = (__int64 *)(v9 + 24LL * *(_QWORD *)(a1 + 152) - 24);
    v11 = v10[1];
    if ( v11 )
    {
      v12 = v11 + 1;
      v13 = v10[1];
      v14 = *v10;
      --v11;
      if ( v10[2] < v12 )
        goto LABEL_37;
    }
    else
    {
      v14 = *v10;
      v12 = 2;
      v13 = 1;
      if ( (unsigned __int64)v10[2] < 2 )
      {
LABEL_37:
        v45 = v13;
        destb = (void *)v12;
        v28 = qvector_reserve(v9 + 24LL * *(_QWORD *)(a1 + 152) - 24, v14, v12, 1);
        v13 = v45;
        v12 = (unsigned __int64)destb;
        *v10 = v28;
        v14 = v28;
      }
    }
    v10[1] = v12;
    *(_BYTE *)(v14 + v13) = 0;
    *(_BYTE *)(*v10 + v11) = 44;
    v6 = *(char ***)(a2 + 32);
    if ( v8 == &(*v6)[56 * (_QWORD)v6[1]] )
      goto LABEL_13;
  }
  v29 = *v6;
  if ( v8 == *v6 )
  {
    v38 = v8;
  }
  else
  {
    do
    {
      v30 = *((void ***)v29 + 4);
      if ( v30 )
      {
        v31 = *v30;
        if ( *v30 )
        {
          v40 = (char *)v30[1];
          if ( v40 )
          {
            v32 = 0;
            v33 = nullptr;
            do
            {
              v34 = (__int64)v31 + v32;
              ++v33;
              v32 += 56;
              sub_37C6A0(v34);
              v31 = *v30;
            }
            while ( v40 != v33 );
          }
          v30[1] = nullptr;
          qfree(v31);
        }
        qfree(v30);
      }
      v35 = *((_QWORD **)v29 + 5);
      if ( v35 )
      {
        clear_tinfo_t(v35 + 5);
        v36 = (void *)v35[2];
        if ( v36 )
        {
          v35[3] = 0;
          qfree(v36);
        }
        cleanup_argloc(v35);
        qfree(v35);
      }
      v37 = *(void **)v29;
      if ( *(_QWORD *)v29 )
      {
        *((_QWORD *)v29 + 1) = 0;
        qfree(v37);
      }
      v29 += 56;
    }
    while ( v29 != v8 );
    v38 = *v6;
  }
  memmove(dest, v8, &v38[56 * (_QWORD)v6[1]] - v8);
  v6[1] -= 0x6DB6DB6DB6DB6DB7LL * ((v8 - dest) >> 3);
  return 0;
}
