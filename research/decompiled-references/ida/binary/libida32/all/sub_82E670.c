__int64 __fastcall sub_82E670(unsigned __int8 *a1, const char *a2, char a3)
{
  unsigned int v3; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // rax
  char *v10; // rdi
  char *v11; // rbp
  size_t v12; // r14
  char *v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r12
  char *v18; // rbp
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // r8
  char *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rdx
  void *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // rbp
  __int64 v31; // rax
  void *v32; // rdi
  void *v33; // rbp
  void *v34; // rax
  const void *v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // r15
  __int64 v38; // rax
  void *v40; // [rsp+8h] [rbp-90h]
  _QWORD *v41; // [rsp+18h] [rbp-80h]
  _QWORD *v42; // [rsp+18h] [rbp-80h]
  void *v43; // [rsp+20h] [rbp-78h] BYREF
  __int128 v44; // [rsp+28h] [rbp-70h]
  void *v45; // [rsp+40h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v3 = a1[12];
  v47 = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return v3;
  v6 = *(_QWORD *)a1;
  *(_BYTE *)(v6 + 5384) = 0;
  if ( a2 && *a2 )
    sub_82CD10(v6, a2, 1u);
  v7 = *(_QWORD *)a1;
  v43 = nullptr;
  v8 = (const char *)(v7 + 5384);
  v44 = 0;
  sub_82C6B0((__int64 *)&v43, (const char *)(v7 + 5384));
  v9 = v44;
  v10 = (char *)v43;
  if ( !(_QWORD)v44 )
  {
    if ( !v43 )
      return v3;
    goto LABEL_23;
  }
  v40 = nullptr;
  v11 = (char *)v43 + 24 * v44 - 24;
  v46 = 0;
  v12 = *((_QWORD *)v11 + 1);
  if ( v12 )
  {
    v34 = (void *)qalloc_or_throw(*((_QWORD *)v11 + 1), v8);
    v35 = *(const void **)v11;
    v40 = v34;
    *((_QWORD *)&v46 + 1) = v12;
    memcpy(v34, v35, v12);
    v9 = v44;
    *(_QWORD *)&v46 = v12;
    if ( !(_QWORD)v44 )
    {
      v15 = *(_QWORD *)a1;
      v17 = *(_QWORD *)a1 + 5648LL;
      goto LABEL_35;
    }
    v10 = (char *)v43;
  }
  *(_QWORD *)&v44 = v9 - 1;
  v13 = &v10[24 * v9 - 24];
  v14 = *(void **)v13;
  if ( *(_QWORD *)v13 )
  {
    *((_QWORD *)v13 + 1) = 0;
    qfree(v14);
  }
  v15 = *(_QWORD *)a1;
  v16 = v44;
  v17 = *(_QWORD *)a1 + 5648LL;
  if ( (_QWORD)v44 )
  {
    v18 = (char *)v43;
    v19 = 0;
    while ( 1 )
    {
      v20 = sub_82DCC0(v17, (__int64)v18);
      v21 = v17 + 8;
      if ( v20 == (_QWORD *)(v17 + 8) )
        break;
      ++v19;
      v17 = v20[7];
      v18 += 24;
      if ( v19 == v16 )
      {
        v21 = v17 + 8;
        goto LABEL_27;
      }
    }
    if ( v16 == v19 )
      goto LABEL_27;
    goto LABEL_15;
  }
LABEL_35:
  v21 = v15 + 5656;
LABEL_27:
  v41 = (_QWORD *)v21;
  v45 = v40;
  v27 = sub_82DCC0(v17, (__int64)&v45);
  v28 = v41;
  if ( v27 != v41 )
  {
    v29 = (_QWORD *)v27[7];
    v30 = v29;
    if ( a3 )
    {
      sub_82CBD0(v29);
      if ( !v30 )
      {
LABEL_30:
        v31 = std::_Rb_tree_rebalance_for_erase();
        v32 = *(void **)(v31 + 32);
        v33 = (void *)v31;
        if ( v32 )
        {
          *(_QWORD *)(v31 + 40) = 0;
          qfree(v32);
        }
        v3 = 1;
        operator delete(v33, 0x40u);
        --*(_QWORD *)(v17 + 40);
        *(_BYTE *)(*(_QWORD *)a1 + 5640LL) = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v36 = v29[3];
      v37 = v29 + 1;
      if ( (_QWORD *)v36 != v29 + 1 )
      {
        while ( !*(_QWORD *)(v36 + 40) || **(_BYTE **)(v36 + 32) != 1 )
        {
          v42 = v28;
          v38 = std::_Rb_tree_increment();
          v28 = v42;
          v36 = v38;
          if ( v37 == (_QWORD *)v38 )
            goto LABEL_42;
        }
        v3 = 0;
        goto LABEL_15;
      }
LABEL_42:
      sub_82CBD0(v30);
    }
    sub_82C910((_QWORD *)v30[2]);
    operator delete(v30, 0x30u);
    goto LABEL_30;
  }
LABEL_15:
  if ( v40 )
    qfree(v40);
  v22 = (char *)v43;
  v10 = (char *)v43;
  if ( v43 )
  {
    v23 = v44;
    if ( (_QWORD)v44 )
    {
      v24 = 0;
      do
      {
        v25 = &v22[24 * v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          qfree(v26);
          v22 = (char *)v43;
        }
        ++v24;
        v10 = v22;
      }
      while ( v23 != v24 );
    }
LABEL_23:
    *(_QWORD *)&v44 = 0;
    qfree(v10);
  }
  return v3;
}

