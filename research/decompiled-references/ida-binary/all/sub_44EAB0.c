unsigned __int64 __fastcall opened_files_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 *v7; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  const char *v12; // rsi
  unsigned __int64 v13; // r13
  size_t v14; // r15
  __int64 *v15; // r13
  const char *action_name; // rax
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // rbp
  const void *v21; // r15
  void *v22; // rdi
  __int64 v23; // r14
  size_t v24; // r8
  __int64 v25; // rsi
  void *v26; // rdi
  size_t v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v5 = 88 * a5;
  v6 = *(_QWORD **)(a1 + 184);
  v7 = *a2;
  v34 = __readfsqword(0x28u);
  v9 = 88 * a5 + *v6;
  if ( v7 != (__int64 *)(v9 + 48) )
  {
    v10 = *(_QWORD *)(v9 + 56);
    if ( v10 > 1 )
    {
      v21 = *(const void **)(v9 + 48);
      v22 = (void *)*v7;
      if ( v7[2] < v10 )
      {
        v30 = qvector_reserve(v7, *v7, v10, 1);
        *v7 = v30;
        v22 = (void *)v30;
      }
      v7[1] = v10;
      memmove(v22, v21, v10 - 1);
      *(_BYTE *)(*v7 + v10 - 1) = 0;
      v9 = v5 + **(_QWORD **)(a1 + 184);
    }
    else
    {
      v7[1] = 0;
      v9 = v5 + **(_QWORD **)(a1 + 184);
    }
  }
  v11 = *(unsigned int *)(v9 + 76);
  v12 = (const char *)*(unsigned int *)(v9 + 72);
  src = nullptr;
  v33 = 0;
  vault_get_revision_postfix(&src, v12, v11);
  v13 = v33;
  if ( !(_QWORD)v33 || (v14 = v33 - 1, (_QWORD)v33 == 1) )
  {
    v15 = v7 + 3;
    if ( *(_DWORD *)(a1 + 48) != 3 )
      goto LABEL_7;
LABEL_21:
    v12 = "%d";
    sub_169A50(v15, (__int64)"%d", *(_DWORD *)(**(_QWORD **)(a1 + 184) + v5 + 80));
    v15 = v7 + 6;
    goto LABEL_7;
  }
  v23 = v7[1];
  v24 = v33 - 1;
  if ( v23 )
  {
    --v23;
    v24 = v14 + v23;
    v13 = v33 + v23;
  }
  v25 = *v7;
  if ( v7[2] < v13 )
  {
    v31 = v24;
    v28 = qvector_reserve(v7, v25, v13, 1);
    *v7 = v28;
    v24 = v31;
    v25 = v28;
  }
  v7[1] = v13;
  v15 = v7 + 3;
  *(_BYTE *)(v25 + v24) = 0;
  v12 = (const char *)src;
  memcpy((void *)(v23 + *v7), src, v14);
  if ( *(_DWORD *)(a1 + 48) == 3 )
    goto LABEL_21;
LABEL_7:
  action_name = (const char *)vault_get_action_name(*(unsigned __int8 *)(**(_QWORD **)(a1 + 184) + v5 + 84));
  v17 = action_name;
  if ( action_name && (v18 = strlen(action_name), (v19 = v18) != 0) )
  {
    v26 = (void *)*v15;
    v27 = v18 + 1;
    if ( v15[2] < v18 + 1 )
    {
      v29 = qvector_reserve(v15, *v15, v18 + 1, 1);
      *v15 = v29;
      v26 = (void *)v29;
    }
    v15[1] = v27;
    v12 = v17;
    memmove(v26, v17, v19);
    *(_BYTE *)(*v15 + v19) = 0;
  }
  else
  {
    v15[1] = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v33 = 0;
    qfree(src, v12);
  }
  return v34 - __readfsqword(0x28u);
}
