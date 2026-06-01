unsigned __int64 __fastcall sub_496CC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int *v15; // r15
  __int64 v16; // r12
  int *v17; // r14
  const char *v18; // rsi
  int *v19; // rbp
  const char *v20; // rdi
  int v21; // eax
  int *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rsi
  const char *v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // r12
  __int64 v29; // rcx
  int v30; // ebp
  int v31; // r14d
  __int64 v32; // r15
  __int64 v33; // rax
  char *v34; // rdi
  void **v35; // rsi
  _QWORD *v36; // rbx
  _QWORD *v37; // rbp
  __int64 v38; // rdi
  _DWORD *v40; // rdi
  void *v41; // rsi
  __int64 v42; // rdx
  char *v43; // rax
  __int64 v44; // [rsp+18h] [rbp-120h]
  int *v45; // [rsp+18h] [rbp-120h]
  __int64 v46; // [rsp+20h] [rbp-118h]
  void *ptr[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v49; // [rsp+40h] [rbp-F8h]
  void *v50[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-D8h]
  __m128i v52; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+80h] [rbp-B8h]
  _DWORD v54[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+98h] [rbp-A0h]
  __int64 v56; // [rsp+A0h] [rbp-98h]
  __int64 (__fastcall **v57)(); // [rsp+B0h] [rbp-88h] BYREF
  int v58; // [rsp+C0h] [rbp-78h] BYREF
  void *v59; // [rsp+C8h] [rbp-70h]
  int *v60; // [rsp+D0h] [rbp-68h]
  int *v61; // [rsp+D8h] [rbp-60h]
  __int64 v62; // [rsp+E0h] [rbp-58h]
  __int64 v63; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v64; // [rsp+F8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v50 = 0;
  v49 = 0;
  v51 = 0;
  sub_494DC0(ptr, a2[1], a3, a4, a5, a6);
  sub_494DC0(v50, a2[1], v6, v7, v8, v9);
  v58 = 0;
  v57 = &dirtree_item_model_base_t::restore_persistent_indexes;
  v60 = &v58;
  v61 = &v58;
  v10 = *(_QWORD **)(a1 + 208);
  v59 = nullptr;
  v62 = 0;
  v63 = a1;
  dirtree_traverse(*v10, &v57);
  v14 = *a2;
  v46 = *a2 + 48 * a2[1];
  if ( v46 == *a2 )
    goto LABEL_34;
  do
  {
    v15 = (int *)v59;
    v53 = 0;
    v52 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    if ( !v59 )
      goto LABEL_21;
    v16 = *(_QWORD *)(v14 + 8);
    v17 = &v58;
    while ( 1 )
    {
      v23 = *((_QWORD *)v15 + 5);
      if ( !v16 )
        break;
      v18 = *(const char **)v14;
      v19 = v15;
      v20 = &s1;
      if ( v23 )
        goto LABEL_5;
LABEL_6:
      v21 = strcmp(v20, v18);
      v22 = *((int **)v15 + 2);
      v15 = *((int **)v15 + 3);
      if ( v21 >= 0 )
      {
        v17 = v19;
        v15 = v22;
      }
      if ( !v15 )
        goto LABEL_15;
    }
    if ( v23 )
    {
LABEL_13:
      v19 = v15;
      v18 = &s1;
LABEL_5:
      v20 = *((const char **)v15 + 4);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v24 = *((_QWORD *)v15 + 2);
      if ( !v24 )
        break;
      v17 = v15;
      v15 = *((int **)v15 + 2);
      if ( *(_QWORD *)(v24 + 40) )
        goto LABEL_13;
    }
    v17 = v15;
LABEL_15:
    if ( v17 != &v58 )
    {
      if ( *((_QWORD *)v17 + 5) )
      {
        v25 = *((const char **)v17 + 4);
        v26 = &s1;
        if ( v16 )
          goto LABEL_18;
LABEL_19:
        if ( strcmp(v26, v25) >= 0 )
          goto LABEL_20;
      }
      else
      {
        v25 = &s1;
        if ( v16 )
        {
LABEL_18:
          v26 = *(const char **)v14;
          goto LABEL_19;
        }
LABEL_20:
        v27 = _mm_loadu_si128((const __m128i *)(v17 + 14));
        v53 = *((_QWORD *)v17 + 9);
        v52 = v27;
      }
    }
LABEL_21:
    sub_3FBE30((__m128i *)ptr, v49, (const __m128i *)(v14 + 24), v11, v12, v13);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_3FB980((__m128i *)ptr, 0, 0, 0, v12, v13);
    v28 = v53;
    if ( v53 )
    {
      v29 = *(unsigned int *)(v14 + 28);
      v30 = v52.m128i_i32[1];
      v31 = v52.m128i_i32[0];
      v32 = v52.m128i_i64[1];
      if ( (_DWORD)v29 != v52.m128i_i32[1] )
      {
        (*(void (__fastcall **)(_DWORD *, __int64, _QWORD, __int64, __m128i *))(*(_QWORD *)v53 + 112LL))(
          v54,
          v53,
          v52.m128i_u32[0],
          v29,
          &v52);
        v31 = v54[0];
        v30 = v54[1];
        v32 = v55;
        v28 = v56;
      }
    }
    else
    {
      v32 = 0;
      v30 = -1;
      v31 = -1;
    }
    if ( v50[0] && *(int *)v50[0] <= 1 )
    {
      v40 = v50[1];
      v13 = 0xAAAAAAAAAAAAAAABLL;
      v41 = (void *)(((unsigned __int64)v50[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
      v11 = 0xAAAAAAAAAAAAAAABLL * (((char *)v50[1] - (char *)v41) >> 3);
      v42 = *((_QWORD *)v50[0] + 1) - v11;
      if ( v42 == v51 )
      {
        if ( v42 || v41 == v50[1] )
          goto LABEL_29;
        *((_DWORD *)v50[1] - 6) = v31;
        *(v40 - 5) = v30;
        *((_QWORD *)v40 - 2) = v32;
        *((_QWORD *)v40 - 1) = v28;
        v50[1] = (char *)v50[1] - 24;
        ++v51;
      }
      else
      {
        v43 = (char *)v50[1] + 24 * v51;
        *(_DWORD *)v43 = v31;
        *((_DWORD *)v43 + 1) = v30;
        *((_QWORD *)v43 + 1) = v32;
        *((_QWORD *)v43 + 2) = v28;
        ++v51;
      }
    }
    else
    {
LABEL_29:
      v44 = v51;
      sub_496A80((__m128i *)v50, 0, 1, nullptr, nullptr, v13);
      v33 = v44;
      v34 = (char *)v50[1] + 24 * v44 + 24;
      v45 = (int *)((char *)v50[1] + 24 * v44);
      memmove(v34, v45, 24 * (v51 - v33));
      v11 = (__int64)v45;
      *v45 = v31;
      v45[1] = v30;
      *((_QWORD *)v45 + 1) = v32;
      *((_QWORD *)v45 + 2) = v28;
      ++v51;
    }
    if ( !v50[0] || *(int *)v50[0] > 1 )
      sub_3FB980((__m128i *)v50, 0, 0, 0, v12, v13);
    v14 += 48;
  }
  while ( v46 != v14 );
LABEL_34:
  v35 = ptr;
  QT::QAbstractItemModel::changePersistentIndexList(a1, ptr, v50);
  v36 = v59;
  v57 = &dirtree_item_model_base_t::restore_persistent_indexes;
  if ( v59 )
  {
    do
    {
      v37 = v36;
      sub_489280((_QWORD *)v36[3], (const char *)v35);
      v38 = v36[4];
      v36 = (_QWORD *)v36[2];
      if ( v38 )
      {
        v37[5] = 0;
        qfree(v38, (const char *)v35);
      }
      v35 = (void **)off_50;
      operator delete(v37, 0x50u);
    }
    while ( v36 );
  }
  if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
    free(v50[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v64 - __readfsqword(0x28u);
}
