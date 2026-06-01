__int64 __fastcall sub_2D620(unsigned __int8 *a1, char *a2, char a3)
{
  unsigned int v3; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdi
  char *v10; // rbp
  size_t v11; // r14
  char *v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  char *v17; // rbp
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // r8
  char *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // rdx
  void *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rbp
  __int64 v30; // rax
  void *v31; // rdi
  void *v32; // rbp
  void *v33; // rax
  const void *v34; // rsi
  __int64 v35; // rdi
  _QWORD *v36; // r15
  __int64 v37; // rax
  void *v39; // [rsp+8h] [rbp-90h]
  _QWORD *v40; // [rsp+18h] [rbp-80h]
  _QWORD *v41; // [rsp+18h] [rbp-80h]
  void *v42; // [rsp+20h] [rbp-78h] BYREF
  __int128 v43; // [rsp+28h] [rbp-70h]
  void *v44; // [rsp+40h] [rbp-58h] BYREF
  __int128 v45; // [rsp+48h] [rbp-50h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v3 = a1[12];
  v46 = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return v3;
  v6 = *(_QWORD *)a1;
  *(_BYTE *)(v6 + 5384) = 0;
  if ( a2 && *a2 )
    sub_2C850(v6, a2, 1u);
  v7 = *(_QWORD *)a1;
  v42 = nullptr;
  v43 = 0;
  sub_2C1F0(&v42, (const char *)(v7 + 5384));
  v8 = v43;
  v9 = (char *)v42;
  if ( !(_QWORD)v43 )
  {
    if ( !v42 )
      return v3;
    goto LABEL_23;
  }
  v39 = nullptr;
  v10 = (char *)v42 + 24 * v43 - 24;
  v45 = 0;
  v11 = *((_QWORD *)v10 + 1);
  if ( v11 )
  {
    v33 = sub_29E10(*((_QWORD *)v10 + 1));
    v34 = *(const void **)v10;
    v39 = v33;
    *((_QWORD *)&v45 + 1) = v11;
    memcpy(v33, v34, v11);
    v8 = v43;
    *(_QWORD *)&v45 = v11;
    if ( !(_QWORD)v43 )
    {
      v14 = *(_QWORD *)a1;
      v16 = *(_QWORD *)a1 + 5648LL;
      goto LABEL_35;
    }
    v9 = (char *)v42;
  }
  *(_QWORD *)&v43 = v8 - 1;
  v12 = &v9[24 * v8 - 24];
  v13 = *(void **)v12;
  if ( *(_QWORD *)v12 )
  {
    *((_QWORD *)v12 + 1) = 0;
    j__free(v13);
  }
  v14 = *(_QWORD *)a1;
  v15 = v43;
  v16 = *(_QWORD *)a1 + 5648LL;
  if ( (_QWORD)v43 )
  {
    v17 = (char *)v42;
    v18 = 0;
    while ( 1 )
    {
      v19 = sub_2D360(v16, (__int64)v17);
      v20 = v16 + 8;
      if ( v19 == (_QWORD *)(v16 + 8) )
        break;
      ++v18;
      v16 = v19[7];
      v17 += 24;
      if ( v18 == v15 )
      {
        v20 = v16 + 8;
        goto LABEL_27;
      }
    }
    if ( v15 == v18 )
      goto LABEL_27;
    goto LABEL_15;
  }
LABEL_35:
  v20 = v14 + 5656;
LABEL_27:
  v40 = (_QWORD *)v20;
  v44 = v39;
  v26 = sub_2D360(v16, (__int64)&v44);
  v27 = v40;
  if ( v26 != v40 )
  {
    v28 = (_QWORD *)v26[7];
    v29 = v28;
    if ( a3 )
    {
      sub_2C710(v28);
      if ( !v29 )
      {
LABEL_30:
        v30 = std::_Rb_tree_rebalance_for_erase();
        v31 = *(void **)(v30 + 32);
        v32 = (void *)v30;
        if ( v31 )
        {
          *(_QWORD *)(v30 + 40) = 0;
          j__free(v31);
        }
        v3 = 1;
        operator delete(v32, 0x40u);
        --*(_QWORD *)(v16 + 40);
        *(_BYTE *)(*(_QWORD *)a1 + 5640LL) = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v35 = v28[3];
      v36 = v28 + 1;
      if ( (_QWORD *)v35 != v28 + 1 )
      {
        while ( !*(_QWORD *)(v35 + 40) || **(_BYTE **)(v35 + 32) != 1 )
        {
          v41 = v27;
          v37 = std::_Rb_tree_increment();
          v27 = v41;
          v35 = v37;
          if ( v36 == (_QWORD *)v37 )
            goto LABEL_42;
        }
        v3 = 0;
        goto LABEL_15;
      }
LABEL_42:
      sub_2C710(v29);
    }
    sub_2C450((_QWORD *)v29[2]);
    operator delete(v29, 0x30u);
    goto LABEL_30;
  }
LABEL_15:
  if ( v39 )
    j__free(v39);
  v21 = (char *)v42;
  v9 = (char *)v42;
  if ( v42 )
  {
    v22 = v43;
    if ( (_QWORD)v43 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[24 * v23];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          j__free(v25);
          v21 = (char *)v42;
        }
        ++v23;
        v9 = v21;
      }
      while ( v22 != v23 );
    }
LABEL_23:
    *(_QWORD *)&v43 = 0;
    j__free(v9);
  }
  return v3;
}

