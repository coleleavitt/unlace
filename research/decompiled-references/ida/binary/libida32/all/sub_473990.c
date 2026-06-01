_BOOL8 __fastcall sub_473990(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // r12
  char *v12; // rsi
  char *v13; // rdi
  int v14; // r12d
  char *v15; // r13
  char *v16; // rsi
  char *v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // r12
  unsigned int v20; // edx
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // esi
  char *v28; // rdi
  __int64 v29; // rax
  void *v30; // rdi
  void *v31; // rdi
  __int64 (__fastcall *v32)(__int64, unsigned int); // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  unsigned int v35; // ebx
  __int64 (__fastcall *v36)(__int64, unsigned int); // rax
  __int64 v37; // rax
  unsigned int *v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 *v42; // rbx
  unsigned int v43; // edx
  int v44; // eax
  int v45; // r8d
  int v46; // r9d
  unsigned int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // esi
  __int64 v52; // rdx
  __int64 v53; // rax
  char **p_s1; // [rsp+0h] [rbp-158h]
  void *v55; // [rsp+8h] [rbp-150h]
  int *v56; // [rsp+10h] [rbp-148h]
  int *v57; // [rsp+18h] [rbp-140h]
  __int64 v58; // [rsp+20h] [rbp-138h]
  __int64 v59; // [rsp+28h] [rbp-130h]
  _DWORD *v60; // [rsp+30h] [rbp-128h]
  int v61; // [rsp+38h] [rbp-120h]
  bool v62; // [rsp+3Eh] [rbp-11Ah]
  char v63; // [rsp+3Fh] [rbp-119h]
  int v64[2]; // [rsp+40h] [rbp-118h] BYREF
  int v65[2]; // [rsp+48h] [rbp-110h] BYREF
  void *v66; // [rsp+50h] [rbp-108h] BYREF
  __int128 v67; // [rsp+58h] [rbp-100h]
  __int64 v68; // [rsp+68h] [rbp-F0h]
  int v69; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v71; // [rsp+88h] [rbp-D0h]
  __int64 v72; // [rsp+98h] [rbp-C0h]
  int v73; // [rsp+A0h] [rbp-B8h]
  char *s1; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-A0h]
  char *v76; // [rsp+C8h] [rbp-90h] BYREF
  __int128 v77; // [rsp+D0h] [rbp-88h]
  char *s2; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-70h]
  char *v80; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v81; // [rsp+100h] [rbp-58h]
  unsigned __int64 v82; // [rsp+118h] [rbp-40h]

  v56 = (int *)a1;
  v4 = *(int *)(a1 + 8);
  v57 = a2;
  v82 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(switch_dbctx(v4) + 1480);
  v59 = *(_QWORD *)(switch_dbctx(a2[2]) + 1480) + 1552LL;
  v60 = (_DWORD *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  HIDWORD(v55) = *v60;
  v58 = v6 + 1552;
  while ( 1 )
  {
    v7 = sub_4EE820(v58, HIDWORD(v55));
    v8 = sub_4EE820(v59, HIDWORD(v55));
    if ( !(v7 | v8) )
      goto LABEL_50;
    v62 = v8 == 0 || v7 == 0;
    if ( v62 )
      return 1;
    v63 = sub_473700((__int64)v56, v7, v57[2], v8);
    if ( !v63 )
      return 1;
    v9 = v57[2];
    switch_dbctx(v56[2]);
    v75 = 0;
    s1 = nullptr;
    v10 = qword_2CA1698;
    v77 = 0;
    v76 = nullptr;
    p_s1 = &s1;
    sub_4ECB80(&s1, *(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v7, 0);
    sub_4ECB80(&v76, *(_QWORD *)(v10 + 1480) + 1552LL, v7, 1);
    switch_dbctx(v9);
    v11 = qword_2CA1698;
    v79 = 0;
    s2 = nullptr;
    v80 = nullptr;
    v81 = 0;
    sub_4ECB80(&s2, *(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v8, 0);
    sub_4ECB80(&v80, *(_QWORD *)(v11 + 1480) + 1552LL, v8, 1);
    if ( (_QWORD)v79 )
    {
      v12 = s2;
      v13 = (char *)haystack;
      if ( !(_QWORD)v75 )
        goto LABEL_8;
    }
    else
    {
      v12 = (char *)haystack;
      if ( !(_QWORD)v75 )
        goto LABEL_9;
    }
    v13 = s1;
LABEL_8:
    v14 = strcmp(v13, v12);
    if ( v14 )
    {
      v15 = v80;
      goto LABEL_14;
    }
LABEL_9:
    v15 = v80;
    v16 = (char *)haystack;
    v17 = (char *)haystack;
    if ( (_QWORD)v81 )
      v16 = v80;
    if ( (_QWORD)v77 )
      v17 = v76;
    v14 = strcmp(v17, v16);
LABEL_14:
    if ( v15 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v15);
    }
    if ( s2 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(s2);
    }
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      qfree(v76);
    }
    if ( s1 )
    {
      *(_QWORD *)&v75 = 0;
      qfree(s1);
    }
    if ( v14 )
      return 1;
    v61 = v57[2];
    v18 = switch_dbctx(v56[2]);
    v66 = nullptr;
    v68 = 0;
    v19 = *(__int64 **)(v18 + 1480);
    v69 = -1;
    ptr = nullptr;
    v72 = 0;
    v73 = -1;
    v67 = 0;
    v71 = 0;
    v20 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 < *(_DWORD *)(v7 + 4) )
    {
      while ( 1 )
      {
        *(_QWORD *)v64 = 0;
        v21 = sub_3B8D10(v19, (unsigned int *)v64, v20);
        v24 = v64[0];
        v25 = *(_DWORD *)v7;
        if ( v64[0] < *(_DWORD *)v7 )
        {
          v64[0] = *(_DWORD *)v7;
          v24 = v25;
        }
        v26 = v64[1];
        v27 = *(_DWORD *)(v7 + 4);
        if ( v27 < v64[1] )
        {
          v64[1] = *(_DWORD *)(v7 + 4);
          v26 = v27;
        }
        if ( v26 < v24 )
          v64[1] = v24;
        if ( *(_DWORD *)v7 >= *(_DWORD *)(v7 + 4) )
          break;
        if ( v21 )
        {
          if ( v21 != 1 )
          {
            if ( !under_debugger )
              interr(2052);
            goto LABEL_107;
          }
          rangeset_t_add(
            (int)&ptr,
            (int)v64,
            v24,
            v26,
            v22,
            v23,
            (int)p_s1,
            v55,
            (__int64)v56,
            (int)v57,
            v58,
            v59,
            (__int64)v60);
        }
        else
        {
          rangeset_t_add(
            (int)&v66,
            (int)v64,
            v24,
            v26,
            v22,
            v23,
            (int)p_s1,
            v55,
            (__int64)v56,
            (int)v57,
            v58,
            v59,
            (__int64)v60);
        }
        v20 = sub_3B8950((__int64)v19, v64[0]);
        if ( v20 >= *(_DWORD *)(v7 + 4) )
          goto LABEL_61;
      }
      if ( !under_debugger )
        interr(2051);
LABEL_107:
      BUG();
    }
LABEL_61:
    v41 = switch_dbctx(v61);
    s1 = nullptr;
    v76 = nullptr;
    LODWORD(v77) = -1;
    s2 = nullptr;
    v80 = nullptr;
    LODWORD(v81) = -1;
    v75 = 0;
    v79 = 0;
    v42 = *(__int64 **)(v41 + 1480);
    v43 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 >= *(_DWORD *)(v8 + 4) )
    {
      if ( (_QWORD)v67 )
      {
        v30 = ptr;
        if ( ptr )
          goto LABEL_46;
        v31 = v66;
        if ( v66 )
          goto LABEL_48;
        return 1;
      }
      v52 = v71;
      if ( (_QWORD)v71 != (_QWORD)v79 )
        goto LABEL_43;
      v28 = nullptr;
      if ( !(_QWORD)v71 )
      {
        v62 = v63;
        goto LABEL_43;
      }
LABEL_83:
      v53 = 0;
      while ( *((_DWORD *)ptr + 2 * v53) == *(_DWORD *)&v28[8 * v53]
           && *((_DWORD *)ptr + 2 * v53 + 1) == *(_DWORD *)&v28[8 * v53 + 4] )
      {
        if ( ++v53 == v52 )
          goto LABEL_87;
      }
      goto LABEL_41;
    }
    do
    {
      *(_QWORD *)v65 = 0;
      v44 = sub_3B8D10(v42, (unsigned int *)v65, v43);
      v47 = v65[0];
      v48 = *(_DWORD *)v8;
      if ( v65[0] < *(_DWORD *)v8 )
      {
        v65[0] = *(_DWORD *)v8;
        v47 = v48;
      }
      v49 = v65[1];
      v50 = *(_DWORD *)(v8 + 4);
      if ( v50 < v65[1] )
      {
        v65[1] = *(_DWORD *)(v8 + 4);
        v49 = v50;
      }
      if ( v49 < v47 )
        v65[1] = v47;
      if ( *(_DWORD *)v8 >= *(_DWORD *)(v8 + 4) )
      {
        if ( !under_debugger )
          interr(2051);
        goto LABEL_107;
      }
      if ( v44 )
      {
        if ( v44 != 1 )
        {
          if ( !under_debugger )
            interr(2052);
          goto LABEL_107;
        }
        rangeset_t_add(
          (int)&s2,
          (int)v65,
          v47,
          v49,
          v45,
          v46,
          (int)p_s1,
          v55,
          (__int64)v56,
          (int)v57,
          v58,
          v59,
          (__int64)v60);
      }
      else
      {
        rangeset_t_add(
          (int)p_s1,
          (int)v65,
          v47,
          v49,
          v45,
          v46,
          (int)p_s1,
          v55,
          (__int64)v56,
          (int)v57,
          v58,
          v59,
          (__int64)v60);
      }
      v43 = sub_3B8950((__int64)v42, v65[0]);
    }
    while ( v43 < *(_DWORD *)(v8 + 4) );
    v28 = s2;
    if ( (_QWORD)v67 != (_QWORD)v75 )
      goto LABEL_41;
    if ( !(_QWORD)v67 )
    {
LABEL_81:
      v52 = v71;
      if ( (_QWORD)v71 != (_QWORD)v79 )
        goto LABEL_41;
      if ( !(_QWORD)v71 )
      {
LABEL_87:
        v62 = v63;
        goto LABEL_41;
      }
      goto LABEL_83;
    }
    v29 = 0;
    while ( *((_DWORD *)v66 + 2 * v29) == *(_DWORD *)&s1[8 * v29]
         && *((_DWORD *)v66 + 2 * v29 + 1) == *(_DWORD *)&s1[8 * v29 + 4] )
    {
      if ( (_QWORD)v67 == ++v29 )
        goto LABEL_81;
    }
LABEL_41:
    if ( v28 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(v28);
    }
LABEL_43:
    if ( s1 )
    {
      *(_QWORD *)&v75 = 0;
      qfree(s1);
    }
    v30 = ptr;
    if ( ptr )
    {
LABEL_46:
      *(_QWORD *)&v71 = 0;
      qfree(v30);
    }
    v31 = v66;
    if ( v66 )
    {
LABEL_48:
      *(_QWORD *)&v67 = 0;
      qfree(v31);
    }
    if ( !v62 )
      return 1;
LABEL_50:
    v32 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v56 + 176LL);
    if ( v32 == sub_46AF30 )
    {
      v33 = switch_dbctx(v56[2]);
      v34 = (_DWORD *)sub_4EE960(*(_QWORD *)(v33 + 1480) + 1552LL, HIDWORD(v55));
      v35 = v34 ? *v34 : -1;
    }
    else
    {
      v35 = v32((__int64)v56, HIDWORD(v55));
    }
    v36 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v57 + 176LL);
    if ( v36 == sub_46AF30 )
      break;
    v39 = v36((__int64)v57, HIDWORD(v55));
LABEL_56:
    v40 = v39;
    if ( v35 <= v39 )
      v40 = v35;
    if ( v40 >= v60[1] )
      return 0;
    if ( v35 != v39 )
      return 1;
    HIDWORD(v55) = v35;
  }
  v37 = switch_dbctx(v57[2]);
  v38 = (unsigned int *)sub_4EE960(*(_QWORD *)(v37 + 1480) + 1552LL, HIDWORD(v55));
  if ( v38 )
  {
    v39 = *v38;
    goto LABEL_56;
  }
  return v35 < v60[1];
}

