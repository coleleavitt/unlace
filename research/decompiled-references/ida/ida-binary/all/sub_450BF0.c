unsigned __int64 __fastcall commit_files_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  const char *v13; // rsi
  unsigned __int64 v14; // r13
  size_t v15; // r8
  const char *action_name; // rax
  __int64 *v17; // r12
  const char *v18; // rbx
  size_t v19; // rax
  size_t v20; // rbp
  const void *v22; // r8
  void *v23; // rdi
  __int64 *v24; // r14
  size_t v25; // r9
  __int64 v26; // r15
  __int64 v27; // rsi
  void *v28; // rdi
  size_t v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // [rsp+0h] [rbp-68h]
  const void *v34; // [rsp+0h] [rbp-68h]
  size_t v35; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v37; // [rsp+18h] [rbp-50h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v6 = 80 * a5;
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *a2;
  v38 = __readfsqword(0x28u);
  v10 = 80 * a5 + v7;
  if ( (__int64 *)v10 != v8 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 > 1 )
    {
      v22 = *(const void **)v10;
      v23 = (void *)*v8;
      if ( v8[2] < v11 )
      {
        v34 = *(const void **)v10;
        v32 = qvector_reserve(v8, *v8, *(_QWORD *)(v10 + 8), 1);
        v22 = v34;
        *v8 = v32;
        v23 = (void *)v32;
      }
      v8[1] = v11;
      memmove(v23, v22, v11 - 1);
      *(_BYTE *)(*v8 + v11 - 1) = 0;
      v10 = v6 + *(_QWORD *)(a1 + 184);
    }
    else
    {
      v8[1] = 0;
      v10 = v6 + *(_QWORD *)(a1 + 184);
    }
  }
  v12 = *(unsigned int *)(v10 + 64);
  v13 = (const char *)*(unsigned int *)(v10 + 60);
  src = nullptr;
  v37 = 0;
  vault_get_revision_postfix(&src, v13, v12);
  v14 = v37;
  if ( (_QWORD)v37 )
  {
    v15 = v37 - 1;
    if ( (_QWORD)v37 != 1 )
    {
      v24 = *a2;
      v25 = v37 - 1;
      v26 = (*a2)[1];
      if ( v26 )
      {
        --v26;
        v25 = v15 + v26;
        v14 = v37 + v26;
      }
      v27 = *v24;
      if ( v24[2] < v14 )
      {
        v35 = v25;
        v33 = v37 - 1;
        v30 = qvector_reserve(*a2, v27, v14, 1);
        v25 = v35;
        v15 = v33;
        *v24 = v30;
        v27 = v30;
      }
      v24[1] = v14;
      *(_BYTE *)(v27 + v25) = 0;
      v13 = (const char *)src;
      memcpy((void *)(v26 + *v24), src, v15);
    }
  }
  action_name = (const char *)vault_get_action_name(*(unsigned __int8 *)(*(_QWORD *)(a1 + 184) + v6 + 72));
  v17 = *a2;
  v18 = action_name;
  if ( action_name && (v19 = strlen(action_name), (v20 = v19) != 0) )
  {
    v28 = (void *)v17[3];
    v29 = v19 + 1;
    if ( v17[5] < v19 + 1 )
    {
      v31 = qvector_reserve(v17 + 3, v17[3], v29, 1);
      v17[3] = v31;
      v28 = (void *)v31;
    }
    v17[4] = v29;
    v13 = v18;
    memmove(v28, v18, v20);
    *(_BYTE *)(v17[3] + v20) = 0;
  }
  else
  {
    v17[4] = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v37 = 0;
    qfree(src, v13);
  }
  return v38 - __readfsqword(0x28u);
}
