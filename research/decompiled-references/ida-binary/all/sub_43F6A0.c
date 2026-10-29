int __fastcall file_history_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  const char *action_name; // rax
  __int64 *v10; // r14
  const char *v11; // rbp
  size_t v12; // rax
  size_t v13; // r15
  __int64 *v14; // rbp
  __int64 v15; // rdi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  int result; // eax
  const void *v22; // r8
  void *v23; // rax
  __int64 v24; // rax
  const char *v25; // rsi
  const char *v26; // rdi
  size_t v27; // r8
  const void *v28; // r9
  void *v29; // rax
  size_t v30; // r8
  const void *v31; // r9
  void *v32; // rax
  size_t v33; // r8
  const void *v34; // r9
  void *v35; // rax
  size_t v36; // r8
  const void *v37; // r9
  void *v38; // rax
  size_t v39; // r8
  const char *v40; // r14
  void *v41; // rdi
  void *v42; // rdi
  size_t v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v47; // [rsp+10h] [rbp-48h]
  const void *v48; // [rsp+10h] [rbp-48h]
  const void *v49; // [rsp+18h] [rbp-40h]
  const void *v50; // [rsp+18h] [rbp-40h]
  const void *v51; // [rsp+18h] [rbp-40h]
  const void *v52; // [rsp+18h] [rbp-40h]

  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 232) + 152 * a5;
  if ( (__int64 *)v7 != *a2 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 || (v39 = v8 - 1, v8 == 1) )
    {
      v6[1] = 0;
    }
    else
    {
      v40 = *(const char **)v7;
      v41 = (void *)*v6;
      if ( v6[2] < v8 )
      {
        v45 = qvector_reserve(v6, *v6, *(_QWORD *)(v7 + 8), 1);
        v39 = v8 - 1;
        *v6 = v45;
        v41 = (void *)v45;
      }
      v6[1] = v8;
      memmove(v41, v40, v39);
      *(_BYTE *)(*v6 + v8 - 1) = 0;
    }
  }
  action_name = (const char *)vault_get_action_name(*(unsigned __int8 *)(v7 + 148));
  v10 = *a2;
  v11 = action_name;
  if ( action_name && (v12 = strlen(action_name), (v13 = v12) != 0) )
  {
    v42 = (void *)v10[3];
    v43 = v12 + 1;
    if ( v10[5] < v12 + 1 )
    {
      v47 = v12 + 1;
      v44 = qvector_reserve(v10 + 3, v10[3], v43, 1);
      v43 = v47;
      v10[3] = v44;
      v42 = (void *)v44;
    }
    v10[4] = v43;
    memmove(v42, v11, v13);
    *(_BYTE *)(v10[3] + v13) = 0;
  }
  else
  {
    v10[4] = 0;
  }
  sub_169A50(*a2 + 6, (__int64)"%d", *(_DWORD *)(v7 + 144));
  v14 = *a2;
  v15 = (__int64)(*a2 + 9);
  if ( v15 != v7 + 24 )
  {
    v16 = *(_QWORD *)(v7 + 32);
    if ( !v16 || (v36 = v16 - 1, v16 == 1) )
    {
      v14[10] = 0;
      v14 = *a2;
    }
    else
    {
      v37 = *(const void **)(v7 + 24);
      v38 = (void *)v14[9];
      if ( v14[11] < v16 )
      {
        v52 = *(const void **)(v7 + 24);
        v38 = (void *)qvector_reserve(v15, v14[9], *(_QWORD *)(v7 + 32), 1);
        v37 = v52;
        v36 = v16 - 1;
        v14[9] = (__int64)v38;
      }
      v14[10] = v16;
      memmove(v38, v37, v36);
      *(_BYTE *)(v14[9] + v16 - 1) = 0;
      v14 = *a2;
    }
  }
  if ( v14 + 12 != (__int64 *)(v7 + 48) )
  {
    v17 = *(_QWORD *)(v7 + 56);
    if ( !v17 || (v33 = v17 - 1, v17 == 1) )
    {
      v14[13] = 0;
      v14 = *a2;
    }
    else
    {
      v34 = *(const void **)(v7 + 48);
      v35 = (void *)v14[12];
      if ( v14[14] < v17 )
      {
        v51 = *(const void **)(v7 + 48);
        v35 = (void *)qvector_reserve(v14 + 12, v14[12], *(_QWORD *)(v7 + 56), 1);
        v34 = v51;
        v33 = v17 - 1;
        v14[12] = (__int64)v35;
      }
      v14[13] = v17;
      memmove(v35, v34, v33);
      *(_BYTE *)(v14[12] + v17 - 1) = 0;
      v14 = *a2;
    }
  }
  if ( v14 + 15 != (__int64 *)(v7 + 72) )
  {
    v18 = *(_QWORD *)(v7 + 80);
    if ( !v18 || (v30 = v18 - 1, v18 == 1) )
    {
      v14[16] = 0;
      v14 = *a2;
    }
    else
    {
      v31 = *(const void **)(v7 + 72);
      v32 = (void *)v14[15];
      if ( v14[17] < v18 )
      {
        v50 = *(const void **)(v7 + 72);
        v32 = (void *)qvector_reserve(v14 + 15, v14[15], *(_QWORD *)(v7 + 80), 1);
        v31 = v50;
        v30 = v18 - 1;
        v14[15] = (__int64)v32;
      }
      v14[16] = v18;
      memmove(v32, v31, v30);
      *(_BYTE *)(v14[15] + v18 - 1) = 0;
      v14 = *a2;
    }
  }
  if ( v14 + 18 != (__int64 *)(v7 + 96) )
  {
    v19 = *(_QWORD *)(v7 + 104);
    if ( !v19 || (v27 = v19 - 1, v19 == 1) )
    {
      v14[19] = 0;
      v14 = *a2;
    }
    else
    {
      v28 = *(const void **)(v7 + 96);
      v29 = (void *)v14[18];
      if ( v14[20] < v19 )
      {
        v49 = *(const void **)(v7 + 96);
        v29 = (void *)qvector_reserve(v14 + 18, v14[18], *(_QWORD *)(v7 + 104), 1);
        v28 = v49;
        v27 = v19 - 1;
        v14[18] = (__int64)v29;
      }
      v14[19] = v19;
      memmove(v29, v28, v27);
      *(_BYTE *)(v14[18] + v19 - 1) = 0;
      v14 = *a2;
    }
  }
  if ( v14 + 21 == (__int64 *)(v7 + 120) )
  {
LABEL_22:
    result = *(_DWORD *)(a1 + 280);
    if ( *(_DWORD *)(v7 + 144) != result )
      return result;
    goto LABEL_27;
  }
  v20 = *(_QWORD *)(v7 + 128);
  if ( v20 <= 1 )
  {
    v14[22] = 0;
    goto LABEL_22;
  }
  v22 = *(const void **)(v7 + 120);
  v23 = (void *)v14[21];
  if ( v14[23] < v20 )
  {
    v48 = *(const void **)(v7 + 120);
    v23 = (void *)qvector_reserve(v14 + 21, v14[21], *(_QWORD *)(v7 + 128), 1);
    v22 = v48;
    v14[21] = (__int64)v23;
  }
  v14[22] = v20;
  memmove(v23, v22, v20 - 1);
  *(_BYTE *)(v14[21] + v20 - 1) = 0;
  result = *(_DWORD *)(a1 + 280);
  if ( *(_DWORD *)(v7 + 144) != result )
    return result;
LABEL_27:
  v24 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(a1 + 264) )
  {
    v25 = *(const char **)(a1 + 256);
    v26 = &s1;
    if ( !v24 )
      goto LABEL_30;
  }
  else
  {
    v25 = &s1;
    if ( !v24 )
      goto LABEL_31;
  }
  v26 = *(const char **)v7;
LABEL_30:
  result = strcmp(v26, v25);
  if ( !result )
  {
LABEL_31:
    *(_DWORD *)(a4 + 4) |= 1u;
    return a4;
  }
  return result;
}
