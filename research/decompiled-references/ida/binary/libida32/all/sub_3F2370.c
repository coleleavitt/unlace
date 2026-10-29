unsigned __int64 __fastcall sub_3F2370(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // r13
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  _BYTE *v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  size_t v11; // r10
  unsigned __int64 v12; // r8
  _BYTE *v13; // rsi
  unsigned __int64 v14; // rbp
  __int64 v15; // rbp
  unsigned __int64 v16; // r15
  size_t v17; // r8
  __int64 v18; // rdi
  const char *v19; // rdx
  const char *v20; // rsi
  size_t v22; // rbp
  size_t v23; // rbp
  __int64 v24; // r8
  size_t v25; // r11
  _BYTE *v26; // rsi
  size_t v27; // r10
  _BYTE *v28; // rsi
  size_t v29; // rax
  size_t v30; // rbp
  void *v31; // rdi
  size_t v32; // r12
  __int64 v33; // rax
  void *src; // [rsp+8h] [rbp-90h]
  void *srca; // [rsp+8h] [rbp-90h]
  void *srcb; // [rsp+8h] [rbp-90h]
  void *srcc; // [rsp+8h] [rbp-90h]
  unsigned __int64 v38; // [rsp+10h] [rbp-88h]
  unsigned __int64 v39; // [rsp+10h] [rbp-88h]
  __int64 v40; // [rsp+10h] [rbp-88h]
  size_t v41; // [rsp+10h] [rbp-88h]
  size_t v42; // [rsp+18h] [rbp-80h]
  unsigned __int64 v43; // [rsp+18h] [rbp-80h]
  unsigned __int64 v44; // [rsp+18h] [rbp-80h]
  void *v45; // [rsp+20h] [rbp-78h] BYREF
  __int128 v46; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v48; // [rsp+48h] [rbp-50h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v3 = haystack;
  v4 = *(_QWORD *)(a2 + 40);
  v49 = __readfsqword(0x28u);
  v5 = 80 * a3 + v4;
  v6 = *(_QWORD *)(a1 + 40) + 80 * a3;
  switch_dbctx(*(int *)(a1 + 8));
  if ( *(_QWORD *)(v5 + 40) )
    v3 = *(const char **)(v5 + 32);
  sub_3F1A20(a1, v3);
  v45 = nullptr;
  v7 = *(_QWORD *)(v6 + 40);
  v46 = 0;
  if ( (void **)(v6 + 32) == &v45 )
  {
    if ( v7 <= 1 )
    {
      v8 = nullptr;
      v9 = 2;
      v7 = 0;
      goto LABEL_6;
    }
    goto LABEL_51;
  }
  if ( v7 )
  {
    v23 = v7 - 1;
    if ( v7 == 1 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v43 = v7;
    srcb = *(void **)(v6 + 32);
    v45 = (void *)qvector_reserve(&v45, 0, v7, 1);
    *(_QWORD *)&v46 = v43;
    memmove(v45, srcb, v23);
    *((_BYTE *)v45 + v23) = 0;
    v7 = *(_QWORD *)(v6 + 40);
    if ( v7 <= 1 )
    {
LABEL_52:
      v8 = v45;
      if ( (_QWORD)v46 )
      {
        v7 = v46 - 1;
        v9 = v46 + 1;
      }
      else
      {
        v7 = 0;
        v9 = 2;
      }
      if ( *((_QWORD *)&v46 + 1) >= v9 )
        goto LABEL_7;
      goto LABEL_6;
    }
LABEL_51:
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 32) + v7 - 2) == 47 )
      goto LABEL_8;
    goto LABEL_52;
  }
LABEL_5:
  v8 = nullptr;
  v9 = 2;
LABEL_6:
  v38 = v7;
  v45 = (void *)qvector_reserve(&v45, v8, v9, 1);
  v7 = v38;
  v8 = v45;
LABEL_7:
  *(_QWORD *)&v46 = v9;
  v8[v7] = 47;
  *((_BYTE *)v45 + v7 + 1) = 0;
LABEL_8:
  v10 = *(_QWORD *)(v6 + 16);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v10 != 1 )
    {
      v24 = v46;
      v25 = v10 - 1;
      if ( (_QWORD)v46 )
      {
        v24 = v46 - 1;
        v25 = v11 + v46 - 1;
        v10 += v46 - 1;
      }
      v26 = v45;
      if ( *((_QWORD *)&v46 + 1) < v10 )
      {
        v42 = v25;
        v40 = v24;
        src = (void *)v11;
        v45 = (void *)qvector_reserve(&v45, v45, v10, 1);
        v25 = v42;
        v26 = v45;
        v24 = v40;
        v11 = (size_t)src;
      }
      *(_QWORD *)&v46 = v10;
      v26[v25] = 0;
      memcpy((char *)v45 + v24, *(const void **)(v6 + 8), v11);
    }
  }
  ptr = nullptr;
  v12 = *(_QWORD *)(v5 + 40);
  v48 = 0;
  if ( &ptr == (void **)(v5 + 32) )
  {
    v15 = 0;
    if ( v12 <= 1 )
    {
      v13 = nullptr;
      v14 = 2;
      v12 = 0;
      goto LABEL_13;
    }
    goto LABEL_45;
  }
  if ( v12 )
  {
    v22 = v12 - 1;
    if ( v12 == 1 )
    {
      v12 = 0;
      goto LABEL_12;
    }
    v44 = v12;
    srcc = *(void **)(v5 + 32);
    ptr = (void *)qvector_reserve(&ptr, 0, v12, 1);
    *(_QWORD *)&v48 = v44;
    memmove(ptr, srcc, v22);
    *((_BYTE *)ptr + v22) = 0;
    v12 = *(_QWORD *)(v5 + 40);
    v15 = v48;
    if ( v12 <= 1 )
    {
LABEL_46:
      v13 = ptr;
      if ( v15 )
      {
        v12 = v15 - 1;
        v14 = v15 + 1;
      }
      else
      {
        v12 = 0;
        v14 = 2;
      }
      if ( *((_QWORD *)&v48 + 1) >= v14 )
        goto LABEL_14;
      goto LABEL_13;
    }
LABEL_45:
    if ( *(_BYTE *)(*(_QWORD *)(v5 + 32) + v12 - 2) == 47 )
      goto LABEL_15;
    goto LABEL_46;
  }
LABEL_12:
  v13 = nullptr;
  v14 = 2;
LABEL_13:
  v39 = v12;
  ptr = (void *)qvector_reserve(&ptr, v13, v14, 1);
  v12 = v39;
  v13 = ptr;
LABEL_14:
  *(_QWORD *)&v48 = v14;
  v13[v12] = 47;
  *((_BYTE *)ptr + v12 + 1) = 0;
  v15 = v48;
LABEL_15:
  v16 = *(_QWORD *)(v6 + 16);
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v16 != 1 )
    {
      v27 = v16 - 1;
      if ( v15 )
      {
        --v15;
        v27 = v17 + v15;
        v16 += v15;
      }
      v28 = ptr;
      if ( *((_QWORD *)&v48 + 1) < v16 )
      {
        v41 = v27;
        srca = (void *)v17;
        ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
        v27 = v41;
        v28 = ptr;
        v17 = (size_t)srca;
      }
      *(_QWORD *)&v48 = v16;
      v28[v27] = 0;
      memcpy((char *)ptr + v15, *(const void **)(v6 + 8), v17);
      v15 = v48;
    }
  }
  v18 = *(_QWORD *)(a1 + 64);
  v19 = haystack;
  if ( v15 )
    LODWORD(v19) = (_DWORD)ptr;
  v20 = haystack;
  if ( (_QWORD)v46 )
    LODWORD(v20) = (_DWORD)v45;
  if ( !(unsigned __int8)dirtree_rename_0(v18, (int)v20, (int)v19) )
  {
    if ( v3 && (v29 = strlen(v3), (v30 = v29) != 0) )
    {
      v31 = *(void **)(v6 + 32);
      v32 = v29 + 1;
      if ( *(_QWORD *)(v6 + 48) < v29 + 1 )
      {
        v33 = qvector_reserve(v6 + 32, *(_QWORD *)(v6 + 32), v29 + 1, 1);
        *(_QWORD *)(v6 + 32) = v33;
        v31 = (void *)v33;
      }
      *(_QWORD *)(v6 + 40) = v32;
      memmove(v31, v3, v30);
      *(_BYTE *)(*(_QWORD *)(v6 + 32) + v30) = 0;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v48 = 0;
    qfree(ptr);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return v49 - __readfsqword(0x28u);
}

