__int64 __fastcall sub_44ACE0(QT::QAbstractItemView *a1, const char *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // rbp
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rdx
  int v14; // r12d
  _QWORD *v15; // rax
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 (*v21)(void); // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  bool v26; // zf
  const char *v27; // rsi
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r10
  __int32 v32; // r8d
  __int64 v33; // rax
  char v34; // r15
  __int64 *v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __int64 *v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rcx
  __m128i v41; // xmm0
  const char *v42; // rsi
  __int64 *v43; // rdi
  __int64 v44; // r13
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 *v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  const char *v52; // rdx
  const char *v53; // rdx
  char v54; // al
  size_t v55; // r12
  size_t v56; // r12
  void *v57; // rax
  const void *v58; // rsi
  void *v59; // rax
  const void *v60; // rsi
  __int64 v62; // [rsp+8h] [rbp-130h]
  __m128i n; // [rsp+10h] [rbp-128h] BYREF
  __m128i v64; // [rsp+20h] [rbp-118h] BYREF
  __int64 v65; // [rsp+30h] [rbp-108h]
  __m128i v66; // [rsp+38h] [rbp-100h] BYREF
  __int64 v67; // [rsp+48h] [rbp-F0h]
  __int64 **v68; // [rsp+58h] [rbp-E0h] BYREF
  __int64 *v69; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v70; // [rsp+68h] [rbp-D0h]
  __int64 (__fastcall **v71)(); // [rsp+80h] [rbp-B8h] BYREF
  __int16 v72; // [rsp+88h] [rbp-B0h]
  QT::QAbstractItemView *v73; // [rsp+90h] [rbp-A8h]
  __int64 (__fastcall **v74)(); // [rsp+A0h] [rbp-98h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-90h]
  QT::QAbstractItemView *v76; // [rsp+B0h] [rbp-88h]
  __int64 v77; // [rsp+E8h] [rbp-50h]
  __int32 v78; // [rsp+F0h] [rbp-48h]
  char v79; // [rsp+F4h] [rbp-44h]
  unsigned __int64 v80; // [rsp+F8h] [rbp-40h]

  n.m128i_i64[1] = (__int64)a2;
  v80 = __readfsqword(0x28u);
  v4 = sub_426230(a1, a2);
  v66.m128i_i8[11] = 1;
  v5 = sub_4170A0((__int64)v4);
  v70 = 0;
  v69 = nullptr;
  v6 = *(_QWORD **)a3;
  v62 = *(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8);
  if ( v62 == *(_QWORD *)a3 )
    goto LABEL_40;
  do
  {
    while ( 1 )
    {
      v8 = (const char *)a1;
      v9 = sub_443320(a1, (__int64)v6);
      v10 = v9;
      if ( !v9 )
        break;
      v11 = *(_QWORD *)(v9 + 32);
      if ( *(_QWORD *)(v5 + 8) )
      {
        v7 = *(const char **)v5;
        v8 = &s1;
        if ( v11 )
LABEL_4:
          v8 = *(const char **)(v10 + 24);
        if ( strcmp(v8, v7) )
          goto LABEL_6;
        goto LABEL_11;
      }
      v7 = &s1;
      if ( v11 )
        goto LABEL_4;
LABEL_11:
      if ( *(_DWORD *)(v10 + 80) )
      {
        sub_445060((__int64)&v74, v10);
        v12 = &s1;
        if ( v75 )
          v12 = (const char *)v74;
        v14 = sub_1698A0(
                1,
                (int)"HIDECANCEL\n"
                     "Do you really want to delete worklist '%s'?\n"
                     "All files in the worklist will be reverted",
                v12);
        if ( v74 )
        {
          v75 = 0;
          qfree(
            v74,
            "HIDECANCEL\nDo you really want to delete worklist '%s'?\nAll files in the worklist will be reverted",
            v13);
        }
        if ( v14 != 1 )
          goto LABEL_6;
        v7 = (const char *)v10;
        v74 = worklists_revert_action_t___vtable;
        LOWORD(v75) = 0;
        v8 = (const char *)&v74;
        v76 = a1;
        if ( !(unsigned __int8)worklists_revert_action_t__::vfunc_0((__int64)&v74, v10) )
          goto LABEL_6;
      }
      v15 = sub_426230(v8, v7);
      v16 = (_QWORD *)sub_417080((__int64)v15);
      v17 = *(unsigned int *)(v10 + 84);
      v18 = *(__int64 (__fastcall **)(__int64))(*v16 + 264LL);
      if ( v18 == vault_with_events_t__::vfunc_33 )
      {
        v19 = (__int64 *)v16[1];
        if ( !v19 )
          goto LABEL_64;
        v20 = *v19;
        v21 = *(__int64 (**)(void))(*v19 + 480);
        if ( v21 != sub_178B60 )
        {
          n.m128i_i32[0] = *(_DWORD *)(v10 + 84);
          v54 = v21();
          v17 = n.m128i_u32[0];
          if ( v54 )
          {
LABEL_64:
            v22 = 52;
LABEL_23:
            sub_4168C0(v22, (__int64)"Failed to delete worklist");
            goto LABEL_6;
          }
          v19 = (__int64 *)v16[1];
          v20 = *v19;
        }
        v22 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v20 + 232))(v19, v17);
      }
      else
      {
        v22 = ((__int64 (__fastcall *)(_QWORD *, __int64))v18)(v16, v17);
      }
      if ( v22 )
        goto LABEL_23;
LABEL_6:
      v66.m128i_i8[11] = 0;
LABEL_7:
      v6 += 2;
      if ( (_QWORD *)v62 == v6 )
        goto LABEL_38;
    }
    v23 = sub_446AE0(a1, v6);
    v24 = v23;
    if ( !v23 )
      goto LABEL_7;
    v25 = *(_QWORD *)(v23 + 32);
    v26 = *(_QWORD *)(v5 + 8) == 0;
    n.m128i_i64[0] = v25;
    if ( v26 )
    {
      v27 = &s1;
      if ( !n.m128i_i64[0] )
        goto LABEL_29;
    }
    else
    {
      v27 = *(const char **)v5;
      v28 = &s1;
      if ( !v25 )
        goto LABEL_28;
    }
    v28 = *(const char **)(v24 + 24);
LABEL_28:
    if ( strcmp(v28, v27) )
      goto LABEL_7;
LABEL_29:
    v65 = 0;
    v29 = *(_QWORD *)(v24 + 8);
    v64.m128i_i64[0] = v29;
    if ( v29 )
    {
      v59 = (void *)qalloc_or_throw(v29);
      v60 = *(const void **)v24;
      v65 = (__int64)v59;
      memcpy(v59, v60, v64.m128i_u64[0]);
      n.m128i_i64[0] = *(_QWORD *)(v24 + 32);
    }
    v64.m128i_i64[1] = 0;
    if ( n.m128i_i64[0] )
    {
      v56 = n.m128i_i64[0];
      v57 = (void *)qalloc_or_throw(n.m128i_i64[0]);
      v58 = *(const void **)(v24 + 24);
      v64.m128i_i64[1] = (__int64)v57;
      memcpy(v57, v58, v56);
    }
    v30 = *(_QWORD *)(v24 + 56);
    v66.m128i_i64[0] = v30;
    if ( v30 )
    {
      v55 = v30;
      v10 = qalloc_or_throw(v30);
      memcpy((void *)v10, *(const void **)(v24 + 48), v55);
    }
    v31 = *(_QWORD *)(v24 + 72);
    v32 = *(_DWORD *)(v24 + 80);
    v33 = v70;
    v34 = *(_BYTE *)(v24 + 84);
    v77 = v31;
    v35 = v69;
    v78 = v32;
    v79 = v34;
    if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
    {
      v67 = v31;
      v66.m128i_i32[3] = v32;
      v69 = (__int64 *)qvector_reserve(&v69, v69, v70 + 1, 88);
      v35 = v69;
      v31 = v67;
      v33 = v70;
      v32 = v66.m128i_i32[3];
    }
    v36 = _mm_loadl_epi64(&v64);
    v37 = v65;
    v6 += 2;
    v38 = &v35[11 * v33];
    *(__m128i *)(v38 + 1) = _mm_unpacklo_epi64(v36, v36);
    v39 = _mm_loadl_epi64(&n);
    *v38 = v37;
    v40 = v64.m128i_i64[1];
    *(_QWORD *)&v70 = v70 + 1;
    *((__m128i *)v38 + 2) = _mm_unpacklo_epi64(v39, v39);
    v41 = _mm_loadl_epi64(&v66);
    v38[3] = v40;
    v38[6] = v10;
    v38[9] = v31;
    *((_DWORD *)v38 + 20) = v32;
    *((_BYTE *)v38 + 84) = v34;
    *(__m128i *)(v38 + 7) = _mm_unpacklo_epi64(v41, v41);
  }
  while ( (_QWORD *)v62 != v6 );
LABEL_38:
  if ( v66.m128i_i8[11] )
  {
    if ( (_QWORD)v70 )
    {
      v71 = worklists_revert_action_t___vtable;
      v72 = 256;
      v73 = a1;
      if ( (unsigned __int8)sub_449D00((__int64)&v71, (__int64)&v69) )
      {
        if ( (_DWORD)v70 )
        {
          v68 = &v69;
          sub_447E60((__int64)&v74, (__int64)&v68);
          v52 = &s1;
          if ( v75 )
            v52 = (const char *)v74;
          if ( (unsigned int)sub_1698A0(1, (int)"HIDECANCEL\nDo you really want to revert these files?\n%s", v52) == 1 )
          {
            if ( v74 )
            {
              v75 = 0;
              qfree(v74, "HIDECANCEL\nDo you really want to revert these files?\n%s", v53);
            }
            if ( (_QWORD)v70 )
              sub_443870(v69, v70, 0);
          }
          else if ( v74 )
          {
            v75 = 0;
            qfree(v74, "HIDECANCEL\nDo you really want to revert these files?\n%s", v53);
          }
        }
      }
    }
  }
LABEL_40:
  v42 = (const char *)n.m128i_i64[1];
  sub_42D280((__int64)a1, n.m128i_i64[1], 0x8000000000000000LL, 2);
  v43 = v69;
  if ( v69 )
  {
    v44 = v70;
    if ( (_QWORD)v70 )
    {
      v45 = 0;
      v46 = 0;
      do
      {
        v47 = &v43[v45];
        v48 = v43[v45 + 6];
        if ( v48 )
        {
          v47[7] = 0;
          qfree(v48, v42);
        }
        v49 = v47[3];
        if ( v49 )
        {
          v47[4] = 0;
          qfree(v49, v42);
        }
        v50 = *v47;
        if ( *v47 )
        {
          v47[1] = 0;
          qfree(v50, v42);
        }
        ++v46;
        v43 = v69;
        v45 += 11;
      }
      while ( v44 != v46 );
    }
    *(_QWORD *)&v70 = 0;
    qfree(v43, v42);
  }
  return 2;
}
