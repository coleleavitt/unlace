_QWORD *__fastcall sub_41E260(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 (*v6)(); // rdx
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // r12
  size_t v12; // r15
  size_t v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  size_t v18; // r15
  void *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  const char *v28; // r13
  __int64 v29; // rax
  _QWORD *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rbp
  const char *v33; // r14
  _QWORD *v34; // r12
  _QWORD *v35; // rbx
  const char *v36; // rdi
  int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  const char *v40; // rdi
  void *v42; // rax
  void *v43; // rax
  const char *v44; // rsi
  const char *v45; // rdi
  __int64 v46; // rax
  unsigned int v47; // [rsp+0h] [rbp-B8h]
  _QWORD *v48; // [rsp+0h] [rbp-B8h]
  char v50; // [rsp+17h] [rbp-A1h]
  const char **v51; // [rsp+18h] [rbp-A0h]
  __int64 v52; // [rsp+20h] [rbp-98h] BYREF
  __int128 v53; // [rsp+28h] [rbp-90h]
  __int64 v54; // [rsp+38h] [rbp-80h]
  __int128 v55; // [rsp+40h] [rbp-78h]
  char *v56; // [rsp+50h] [rbp-68h] BYREF
  __int128 v57; // [rsp+58h] [rbp-60h]
  __int64 v58; // [rsp+68h] [rbp-50h]
  int v59; // [rsp+70h] [rbp-48h]
  char v60; // [rsp+74h] [rbp-44h]
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v51 = (const char **)a2;
  v61 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  v50 = *(_BYTE *)(v2 + 272);
  if ( v50 )
  {
    v52 = 0;
    v53 = 0;
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 24) + 304LL);
    if ( v3 != vault_with_events_t__::vfunc_38 )
    {
      a2 = (const char *)&v52;
      v7 = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, __int64))v3)(v2 + 24, &v52, 0, 0, 0xFFFFFFFFLL);
LABEL_6:
      if ( !v7 )
      {
        v8 = v52;
        v9 = *(_QWORD *)(a1 + 32);
        v10 = (_QWORD *)(v9 + 232);
        v11 = v52 + 88 * v53;
        if ( v52 == v11 )
        {
LABEL_23:
          *(_BYTE *)(v9 + 272) = 0;
          if ( v11 )
          {
            v20 = v53;
            if ( (_QWORD)v53 )
            {
              v21 = 0;
              v22 = 0;
              do
              {
                v23 = (__int64 *)(v21 + v11);
                v24 = v23[6];
                if ( v24 )
                {
                  v23[7] = 0;
                  qfree(v24, a2);
                }
                v25 = v23[3];
                if ( v25 )
                {
                  v23[4] = 0;
                  qfree(v25, a2);
                }
                v26 = *v23;
                if ( *v23 )
                {
                  v23[1] = 0;
                  qfree(v26, a2);
                }
                ++v22;
                v11 = v52;
                v21 += 88;
              }
              while ( v20 != v22 );
            }
            *(_QWORD *)&v53 = 0;
            qfree(v11, a2);
          }
          goto LABEL_34;
        }
        do
        {
          a2 = (const char *)v10;
          v14 = sub_41E0A0((_QWORD *)(v9 + 224), v10, v8);
          v16 = v15;
          v10 = v14;
          if ( v15 )
          {
            LOBYTE(v47) = v50;
            if ( !v14 && v15 != v9 + 232 )
            {
              v44 = &s1;
              if ( *(_QWORD *)(v15 + 88) )
                v44 = *(const char **)(v15 + 80);
              v45 = &s1;
              if ( *(_QWORD *)(v8 + 56) )
                v45 = *(const char **)(v8 + 48);
              v47 = (unsigned int)strcmp(v45, v44) >> 31;
            }
            v17 = operator new(0x78u);
            *(_QWORD *)(v17 + 32) = 0;
            v10 = (_QWORD *)v17;
            *(_OWORD *)(v17 + 40) = 0;
            v18 = *(_QWORD *)(v8 + 8);
            if ( v18 )
            {
              v19 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
              v10[4] = v19;
              v10[6] = v18;
              memcpy(v19, *(const void **)v8, v18);
              v10[5] = v18;
            }
            v10[7] = 0;
            *((_OWORD *)v10 + 4) = 0;
            v12 = *(_QWORD *)(v8 + 32);
            if ( v12 )
            {
              v43 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 32));
              v10[7] = v43;
              v10[9] = v12;
              memcpy(v43, *(const void **)(v8 + 24), v12);
              v10[8] = v12;
            }
            v10[10] = 0;
            *(_OWORD *)(v10 + 11) = 0;
            v13 = *(_QWORD *)(v8 + 56);
            if ( v13 )
            {
              v42 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 56));
              v10[10] = v42;
              v10[12] = v13;
              memcpy(v42, *(const void **)(v8 + 48), v13);
              v10[11] = v13;
            }
            a2 = (const char *)v10;
            v10[13] = *(_QWORD *)(v8 + 72);
            *((_DWORD *)v10 + 28) = *(_DWORD *)(v8 + 80);
            *((_BYTE *)v10 + 116) = *(_BYTE *)(v8 + 84);
            std::_Rb_tree_insert_and_rebalance((unsigned __int8)v47, v10, v16, v9 + 232);
            ++*(_QWORD *)(v9 + 264);
            v9 = *(_QWORD *)(a1 + 32);
          }
          v8 += 88;
        }
        while ( v11 != v8 );
LABEL_22:
        v11 = v52;
        goto LABEL_23;
      }
LABEL_21:
      a2 = "Failed to retrieve opened files";
      sub_416980(v7, (__int64)"Failed to retrieve opened files");
      v9 = *(_QWORD *)(a1 + 32);
      goto LABEL_22;
    }
    v4 = *(__int64 **)(v2 + 32);
    if ( v4 )
    {
      v5 = *v4;
      v6 = *(__int64 (**)())(*v4 + 480);
      if ( v6 == sub_178B60 )
      {
LABEL_5:
        a2 = (const char *)&v52;
        v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, __int64))(v5 + 272))(
               v4,
               &v52,
               0,
               0,
               0xFFFFFFFFLL);
        goto LABEL_6;
      }
      if ( !(unsigned __int8)v6() )
      {
        v4 = *(__int64 **)(v2 + 32);
        v5 = *v4;
        goto LABEL_5;
      }
    }
    v7 = 52;
    goto LABEL_21;
  }
LABEL_34:
  v52 = 0;
  v54 = 0;
  v27 = (unsigned __int64)v51[1];
  v59 = 0;
  v56 = nullptr;
  v58 = 0;
  v60 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  if ( v27 > 1 )
  {
    a2 = *v51;
    v56 = (char *)qvector_reserve(&v56, 0, v27, 1);
    *(_QWORD *)&v57 = v27;
    memmove(v56, a2, v27 - 1);
    v56[v27 - 1] = 0;
    v28 = v56;
    v46 = *(_QWORD *)(a1 + 32);
    v30 = *(_QWORD **)(v46 + 240);
    v31 = v46 + 232;
    v48 = (_QWORD *)(v46 + 232);
    if ( !v30 )
      goto LABEL_54;
  }
  else
  {
    v28 = nullptr;
    v29 = *(_QWORD *)(a1 + 32);
    v30 = *(_QWORD **)(v29 + 240);
    v31 = v29 + 232;
    v48 = (_QWORD *)(v29 + 232);
    if ( !v30 )
      goto LABEL_56;
  }
  v32 = v57;
  v33 = &s1;
  v34 = v48;
  if ( (_QWORD)v57 )
    v33 = v28;
  while ( 1 )
  {
    v39 = v30[11];
    if ( !v32 )
      break;
    v35 = v30;
    a2 = v28;
    v36 = &s1;
    if ( v39 )
      goto LABEL_40;
LABEL_41:
    v37 = strcmp(v36, a2);
    v38 = (_QWORD *)v30[2];
    v30 = (_QWORD *)v30[3];
    if ( v37 >= 0 )
    {
      v34 = v35;
      v30 = v38;
    }
    if ( !v30 )
      goto LABEL_50;
  }
  if ( v39 )
  {
LABEL_48:
    v35 = v30;
LABEL_40:
    v36 = (const char *)v30[10];
    a2 = v33;
    goto LABEL_41;
  }
  while ( 1 )
  {
    v38 = (_QWORD *)v30[2];
    if ( !v38 )
      break;
    v34 = v30;
    v30 = (_QWORD *)v30[2];
    if ( v38[11] )
      goto LABEL_48;
  }
  v34 = v30;
LABEL_50:
  v30 = nullptr;
  if ( v48 != v34 )
  {
    if ( v34[11] )
    {
      v40 = &s1;
      a2 = (const char *)v34[10];
      if ( v32 )
        v40 = v28;
    }
    else
    {
      v40 = v28;
      a2 = &s1;
      if ( !v32 )
        goto LABEL_53;
    }
    if ( strcmp(v40, a2) >= 0 )
LABEL_53:
      v30 = v34 + 4;
    else
      v30 = nullptr;
  }
LABEL_54:
  if ( v28 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v28, a2, v31, v38);
  }
LABEL_56:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54, a2);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52, a2);
  }
  return v30;
}
