_BOOL8 __fastcall sub_488200(__int64 a1, int *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // r12
  char *v14; // rsi
  char *v15; // rdi
  int v16; // r12d
  char *v17; // r13
  char *v18; // rsi
  char *v19; // rdi
  __int64 v20; // rax
  __int64 *v21; // r12
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  char *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  void *v33; // rdi
  void *v34; // rdi
  __int64 (__fastcall *v35)(__int64, __int64); // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned __int64 v38; // rbx
  __int64 (__fastcall *v39)(__int64, __int64); // rax
  __int64 v40; // rax
  unsigned __int64 *v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 *v45; // rbx
  unsigned __int64 v46; // rdx
  int v47; // eax
  int v48; // r8d
  int v49; // r9d
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // [rsp+0h] [rbp-168h]
  char **p_s1; // [rsp+8h] [rbp-160h]
  __int64 v60; // [rsp+10h] [rbp-158h]
  int *v61; // [rsp+18h] [rbp-150h]
  __int64 v62; // [rsp+20h] [rbp-148h]
  __int64 v63; // [rsp+28h] [rbp-140h]
  __int64 *v64; // [rsp+30h] [rbp-138h]
  int v65; // [rsp+38h] [rbp-130h]
  bool v66; // [rsp+3Eh] [rbp-12Ah]
  char v67; // [rsp+3Fh] [rbp-129h]
  int v68[4]; // [rsp+40h] [rbp-128h] BYREF
  int v69[4]; // [rsp+50h] [rbp-118h] BYREF
  void *v70; // [rsp+60h] [rbp-108h] BYREF
  __int128 v71; // [rsp+68h] [rbp-100h]
  __int64 v72; // [rsp+78h] [rbp-F0h]
  int v73; // [rsp+80h] [rbp-E8h]
  void *ptr; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v75; // [rsp+98h] [rbp-D0h]
  __int64 v76; // [rsp+A8h] [rbp-C0h]
  int v77; // [rsp+B0h] [rbp-B8h]
  char *s1; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+C8h] [rbp-A0h]
  char *v80; // [rsp+D8h] [rbp-90h] BYREF
  __int128 v81; // [rsp+E0h] [rbp-88h]
  char *s2; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v83; // [rsp+F8h] [rbp-70h]
  char *v84; // [rsp+108h] [rbp-60h] BYREF
  __int128 v85; // [rsp+110h] [rbp-58h]
  unsigned __int64 v86; // [rsp+128h] [rbp-40h]

  v61 = (int *)a1;
  v5 = *(int *)(a1 + 8);
  v86 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(switch_dbctx(v5) + 1672);
  v8 = switch_dbctx(a2[2]);
  v64 = (__int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v63 = *(_QWORD *)(v8 + 1672) + 1624LL;
  v60 = *v64;
  v62 = v7 + 1624;
  p_s1 = &s1;
  while ( 1 )
  {
    v9 = sub_505D70(v62, v60);
    v10 = sub_505D70(v63, v60);
    if ( !(v9 | v10) )
      goto LABEL_50;
    v66 = v10 == 0 || v9 == 0;
    if ( v66 )
      return 1;
    v67 = sub_487F60((__int64)v61, v9, a2[2], v10);
    if ( !v67 )
      return 1;
    v11 = a2[2];
    switch_dbctx(v61[2]);
    v79 = 0;
    s1 = nullptr;
    v12 = qword_2CCB598;
    v81 = 0;
    v80 = nullptr;
    sub_504090(p_s1, *(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v9, 0);
    sub_504090(&v80, *(_QWORD *)(v12 + 1672) + 1624LL, v9, 1);
    switch_dbctx(v11);
    v13 = qword_2CCB598;
    v83 = 0;
    s2 = nullptr;
    v84 = nullptr;
    v85 = 0;
    sub_504090(&s2, *(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v10, 0);
    sub_504090(&v84, *(_QWORD *)(v13 + 1672) + 1624LL, v10, 1);
    if ( (_QWORD)v83 )
    {
      v14 = s2;
      v15 = (char *)haystack;
      if ( !(_QWORD)v79 )
        goto LABEL_8;
    }
    else
    {
      v14 = (char *)haystack;
      if ( !(_QWORD)v79 )
        goto LABEL_9;
    }
    v15 = s1;
LABEL_8:
    v16 = strcmp(v15, v14);
    if ( v16 )
    {
      v17 = v84;
      goto LABEL_14;
    }
LABEL_9:
    v17 = v84;
    v18 = (char *)haystack;
    v19 = (char *)haystack;
    if ( (_QWORD)v85 )
      v18 = v84;
    if ( (_QWORD)v81 )
      v19 = v80;
    v16 = strcmp(v19, v18);
LABEL_14:
    if ( v17 )
    {
      *(_QWORD *)&v85 = 0;
      qfree(v17);
    }
    if ( s2 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(s2);
    }
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80);
    }
    if ( s1 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(s1);
    }
    if ( v16 )
      return 1;
    v65 = a2[2];
    v20 = switch_dbctx(v61[2]);
    v70 = nullptr;
    v72 = 0;
    v21 = *(__int64 **)(v20 + 1672);
    v73 = -1;
    ptr = nullptr;
    v76 = 0;
    v77 = -1;
    v71 = 0;
    v75 = 0;
    v22 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 < *(_QWORD *)(v9 + 8) )
    {
      while ( 1 )
      {
        *(_OWORD *)v68 = 0;
        v23 = sub_3BD970(v21, (__m128i *)v68, v22);
        v26 = *(_QWORD *)v68;
        v27 = *(_QWORD *)v9;
        if ( *(_QWORD *)v68 < *(_QWORD *)v9 )
        {
          *(_QWORD *)v68 = *(_QWORD *)v9;
          v26 = v27;
        }
        v28 = *(_QWORD *)&v68[2];
        v29 = *(_QWORD *)(v9 + 8);
        if ( v29 < *(_QWORD *)&v68[2] )
        {
          *(_QWORD *)&v68[2] = *(_QWORD *)(v9 + 8);
          v28 = v29;
        }
        if ( v28 < v26 )
          *(_QWORD *)&v68[2] = v26;
        if ( *(_QWORD *)v9 >= *(_QWORD *)(v9 + 8) )
          break;
        if ( v23 )
        {
          if ( v23 != 1 )
          {
            if ( !under_debugger )
              interr(2052);
            goto LABEL_107;
          }
          rangeset_t_add((int)&ptr, (int)v68, v26, v28, v24, v25, v58, p_s1, v60, (int)v61, v62, v63, (__int64)v64);
        }
        else
        {
          rangeset_t_add((int)&v70, (int)v68, v26, v28, v24, v25, v58, p_s1, v60, (int)v61, v62, v63, (__int64)v64);
        }
        v22 = sub_3BD580((__int64)v21, *(__int64 *)v68);
        if ( v22 >= *(_QWORD *)(v9 + 8) )
          goto LABEL_61;
      }
      if ( !under_debugger )
        interr(2051);
LABEL_107:
      BUG();
    }
LABEL_61:
    v44 = switch_dbctx(v65);
    s1 = nullptr;
    v80 = nullptr;
    LODWORD(v81) = -1;
    s2 = nullptr;
    v84 = nullptr;
    LODWORD(v85) = -1;
    v79 = 0;
    v83 = 0;
    v45 = *(__int64 **)(v44 + 1672);
    v46 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 >= *(_QWORD *)(v10 + 8) )
    {
      if ( (_QWORD)v71 )
      {
        v33 = ptr;
        if ( ptr )
          goto LABEL_46;
        v34 = v70;
        if ( v70 )
          goto LABEL_48;
        return 1;
      }
      v55 = v75;
      if ( (_QWORD)v75 != (_QWORD)v83 )
        goto LABEL_43;
      v30 = nullptr;
      if ( !(_QWORD)v75 )
      {
        v66 = v67;
        goto LABEL_43;
      }
LABEL_83:
      v56 = 0;
      v57 = 0;
      while ( *(_QWORD *)((char *)ptr + v56) == *(_QWORD *)&v30[v56]
           && *(_QWORD *)((char *)ptr + v56 + 8) == *(_QWORD *)&v30[v56 + 8] )
      {
        ++v57;
        v56 += 16;
        if ( v57 == v55 )
          goto LABEL_87;
      }
      goto LABEL_41;
    }
    do
    {
      *(_OWORD *)v69 = 0;
      v47 = sub_3BD970(v45, (__m128i *)v69, v46);
      v50 = *(_QWORD *)v69;
      v51 = *(_QWORD *)v10;
      if ( *(_QWORD *)v69 < *(_QWORD *)v10 )
      {
        *(_QWORD *)v69 = *(_QWORD *)v10;
        v50 = v51;
      }
      v52 = *(_QWORD *)&v69[2];
      v53 = *(_QWORD *)(v10 + 8);
      if ( v53 < *(_QWORD *)&v69[2] )
      {
        *(_QWORD *)&v69[2] = *(_QWORD *)(v10 + 8);
        v52 = v53;
      }
      if ( v52 < v50 )
        *(_QWORD *)&v69[2] = v50;
      if ( *(_QWORD *)v10 >= *(_QWORD *)(v10 + 8) )
      {
        if ( !under_debugger )
          interr(2051);
        goto LABEL_107;
      }
      if ( v47 )
      {
        if ( v47 != 1 )
        {
          if ( !under_debugger )
            interr(2052);
          goto LABEL_107;
        }
        rangeset_t_add((int)&s2, (int)v69, v50, v52, v48, v49, v58, p_s1, v60, (int)v61, v62, v63, (__int64)v64);
      }
      else
      {
        rangeset_t_add((int)p_s1, (int)v69, v50, v52, v48, v49, v58, p_s1, v60, (int)v61, v62, v63, (__int64)v64);
      }
      v46 = sub_3BD580((__int64)v45, *(__int64 *)v69);
    }
    while ( v46 < *(_QWORD *)(v10 + 8) );
    v30 = s2;
    if ( (_QWORD)v71 != (_QWORD)v79 )
      goto LABEL_41;
    if ( !(_QWORD)v71 )
    {
LABEL_81:
      v55 = v75;
      if ( (_QWORD)v75 != (_QWORD)v83 )
        goto LABEL_41;
      if ( !(_QWORD)v75 )
      {
LABEL_87:
        v66 = v67;
        goto LABEL_41;
      }
      goto LABEL_83;
    }
    v31 = 0;
    v32 = 0;
    while ( *(_QWORD *)((char *)v70 + v31) == *(_QWORD *)&s1[v31]
         && *(_QWORD *)((char *)v70 + v31 + 8) == *(_QWORD *)&s1[v31 + 8] )
    {
      ++v32;
      v31 += 16;
      if ( (_QWORD)v71 == v32 )
        goto LABEL_81;
    }
LABEL_41:
    if ( v30 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(v30);
    }
LABEL_43:
    if ( s1 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(s1);
    }
    v33 = ptr;
    if ( ptr )
    {
LABEL_46:
      *(_QWORD *)&v75 = 0;
      qfree(v33);
    }
    v34 = v70;
    if ( v70 )
    {
LABEL_48:
      *(_QWORD *)&v71 = 0;
      qfree(v34);
    }
    if ( !v66 )
      return 1;
LABEL_50:
    v35 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v61 + 176LL);
    if ( v35 == sub_47F490 )
    {
      v36 = switch_dbctx(v61[2]);
      v37 = (_QWORD *)sub_505EB0(*(_QWORD *)(v36 + 1672) + 1624LL, v60);
      v38 = v37 ? *v37 : -1LL;
    }
    else
    {
      v38 = v35((__int64)v61, v60);
    }
    v39 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 176LL);
    if ( v39 == sub_47F490 )
      break;
    v42 = v39((__int64)a2, v60);
LABEL_56:
    v43 = v42;
    if ( v38 <= v42 )
      v43 = v38;
    if ( v43 >= v64[1] )
      return 0;
    if ( v38 != v42 )
      return 1;
    v60 = v38;
  }
  v40 = switch_dbctx(a2[2]);
  v41 = (unsigned __int64 *)sub_505EB0(*(_QWORD *)(v40 + 1672) + 1624LL, v60);
  if ( v41 )
  {
    v42 = *v41;
    goto LABEL_56;
  }
  return v38 < v64[1];
}
