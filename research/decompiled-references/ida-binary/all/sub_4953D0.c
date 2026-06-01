__int64 __fastcall dirtree_item_model_base_t::restore_persistent_indexes(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  size_t v5; // rbx
  char *v6; // r14
  char *v7; // r15
  char *v8; // r12
  const char *v9; // rax
  char *v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rsi
  const char *v18; // rdi
  __int64 v20; // rbp
  __int64 v21; // rax
  char *v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rdx
  const char *v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rdi
  const char *v28; // [rsp+0h] [rbp-98h]
  __int64 v29; // [rsp+0h] [rbp-98h]
  char *v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-70h]
  _QWORD v35[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a1[7];
  v35[3] = __readfsqword(0x28u);
  v4 = *(_QWORD **)(v3 + 216);
  if ( !v4 )
    v4 = *(_QWORD **)(v3 + 208);
  src = nullptr;
  *(_OWORD *)n = 0;
  dirtree_get_abspath_by_cursor(&src, *v4, a2, 0);
  sub_48B610((__int64)v35, a1[7], a2);
  v5 = n[0];
  v6 = nullptr;
  if ( n[0] )
  {
    v6 = (char *)qalloc_or_throw(n[0]);
    memcpy(v6, src, v5);
  }
  v7 = (char *)a1[3];
  v8 = (char *)(a1 + 2);
  v30 = (char *)(a1 + 2);
  if ( !v7 )
  {
    v8 = (char *)(a1 + 2);
    goto LABEL_31;
  }
  v9 = &s1;
  if ( v5 )
    v9 = v6;
  v28 = v9;
  while ( 1 )
  {
    v15 = *((_QWORD *)v7 + 5);
    if ( !v5 )
      break;
    if ( v15 )
      goto LABEL_18;
    v10 = v7;
    v11 = v6;
    v12 = &s1;
LABEL_11:
    v13 = strcmp(v12, v11);
    v14 = *((char **)v7 + 2);
    v7 = *((char **)v7 + 3);
    if ( v13 >= 0 )
    {
      v8 = v10;
      v7 = v14;
    }
    if ( !v7 )
      goto LABEL_20;
  }
  if ( v15 )
  {
LABEL_18:
    v12 = *((const char **)v7 + 4);
    v11 = v28;
    v10 = v7;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)v7 + 2);
    if ( !v16 )
      break;
    v8 = v7;
    v7 = *((char **)v7 + 2);
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_18;
  }
  v8 = v7;
LABEL_20:
  if ( v30 == v8 )
    goto LABEL_31;
  if ( *((_QWORD *)v8 + 5) )
  {
    v17 = *((const char **)v8 + 4);
    v18 = &s1;
    if ( v5 )
      goto LABEL_23;
LABEL_24:
    if ( strcmp(v18, v17) >= 0 )
      goto LABEL_25;
LABEL_31:
    v20 = v35[2];
    v32 = v35[0];
    v31 = v35[1];
    v21 = operator new(0x50u);
    *(_QWORD *)(v21 + 32) = v6;
    v22 = (char *)v21;
    *(_QWORD *)(v21 + 72) = v20;
    *(_QWORD *)(v21 + 56) = v32;
    v17 = v8;
    *(_QWORD *)(v21 + 64) = v31;
    *(__m128i *)(v21 + 40) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    v23 = sub_495210(a1 + 1, v8, v21 + 32);
    if ( v24 )
    {
      if ( v23 || (char *)v24 == v30 )
      {
        v27 = 1;
      }
      else
      {
        v25 = &s1;
        if ( *(_QWORD *)(v24 + 40) )
          v25 = *(const char **)(v24 + 32);
        v29 = v24;
        if ( !v5 )
          v6 = (char *)&s1;
        v26 = strcmp(v6, v25);
        v24 = v29;
        v27 = v26 >> 31;
      }
      v17 = v22;
      std::_Rb_tree_insert_and_rebalance(v27, v22, v24, v30);
      ++a1[6];
    }
    else if ( v22 )
    {
      if ( v6 )
      {
        *((_QWORD *)v22 + 5) = 0;
        qfree(v6, v8);
      }
      v17 = (_BYTE *)off_50;
      operator delete(v22, 0x50u);
    }
  }
  else
  {
    v17 = &s1;
    if ( v5 )
    {
LABEL_23:
      v18 = v6;
      goto LABEL_24;
    }
LABEL_25:
    if ( v6 )
      qfree(v6, v17);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v17);
  }
  return 0;
}
