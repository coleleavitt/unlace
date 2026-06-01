unsigned __int64 __fastcall sub_3DD7A0(__int64 *a1, const char *a2, __int64 *a3, char *a4, __int64 a5, double a6)
{
  const char *idcv_attr; // r12
  int v7; // r14d
  char *v8; // r15
  __int64 *v9; // r13
  __int64 v10; // rbx
  bool v11; // zf
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  size_t v20; // rax
  __int64 v21; // rbx
  size_t v22; // r15
  size_t v23; // r8
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rdx
  const char *v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  size_t v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 ph; // rax
  __int64 v41; // r12
  unsigned __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  size_t v51; // rax
  __int64 v52; // r8
  size_t v53; // r9
  size_t v54; // r11
  __int64 v55; // rsi
  size_t v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rbx
  unsigned __int64 v68; // r12
  __int64 v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // r12
  size_t v74; // r15
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rbx
  unsigned __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // rsi
  __int64 v81; // r12
  unsigned __int64 v82; // r14
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  char *v92; // [rsp+0h] [rbp-4B8h]
  unsigned __int64 v93; // [rsp+0h] [rbp-4B8h]
  _DWORD *v94; // [rsp+8h] [rbp-4B0h]
  size_t v95; // [rsp+10h] [rbp-4A8h]
  unsigned __int64 v96; // [rsp+10h] [rbp-4A8h]
  size_t v97; // [rsp+10h] [rbp-4A8h]
  unsigned __int64 v98; // [rsp+10h] [rbp-4A8h]
  unsigned __int64 v99; // [rsp+10h] [rbp-4A8h]
  __int64 v100; // [rsp+18h] [rbp-4A0h]
  size_t v101; // [rsp+18h] [rbp-4A0h]
  __int64 v102; // [rsp+18h] [rbp-4A0h]
  __int64 v103; // [rsp+18h] [rbp-4A0h]
  __int64 v104; // [rsp+20h] [rbp-498h]
  __int64 v105; // [rsp+20h] [rbp-498h]
  __int64 v106; // [rsp+20h] [rbp-498h]
  __int64 v107; // [rsp+20h] [rbp-498h]
  size_t v108; // [rsp+28h] [rbp-490h]
  void *src; // [rsp+30h] [rbp-488h] BYREF
  __int128 v110; // [rsp+38h] [rbp-480h]
  char v111; // [rsp+50h] [rbp-468h] BYREF
  char v112; // [rsp+58h] [rbp-460h] BYREF
  char s[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v114; // [rsp+478h] [rbp-40h]

  v9 = a1;
  v10 = (__int64)a3;
  v11 = *(_BYTE *)a3 == 10;
  v94 = a2;
  v114 = __readfsqword(0x28u);
  if ( v11 )
  {
    a2 = nullptr;
    a1 = a3;
    v10 = deref_idcv(a3, 0);
    if ( !v10 )
      return v114 - __readfsqword(0x28u);
  }
  v13 = *((_DWORD *)a4 + 1);
  v14 = (*(_DWORD *)a4 & 0x20) == 0 ? 64 : 80;
  if ( v13 == 16 )
  {
    v14 = (unsigned int)v14 | 1;
  }
  else
  {
    a3 = (__int64 *)((unsigned int)v14 | 2);
    if ( v13 == 8 )
      v14 = (unsigned int)a3;
  }
  s[0] = 0;
  switch ( *(_BYTE *)v10 )
  {
    case 2:
    case 9:
      format_c_number(s, 1024, *(_QWORD *)(v10 + 8), *(__int64 *)(v10 + 8) >> 63, 8, v14);
      goto LABEL_7;
    case 3:
      ph = get_ph(a1, a2, a3, a4, a5, v14);
      realtoasc(s, 1024, v10 + 8, (unsigned int)*(char *)(ph + 130));
      goto LABEL_7;
    case 5:
      v41 = v9[1];
      if ( v41 )
      {
        v42 = v41 + 1;
        v43 = v9[1];
        --v41;
      }
      else
      {
        v43 = 1;
        v42 = 2;
      }
      v44 = *v9;
      if ( v9[2] < v42 )
      {
        v84 = qvector_reserve(v9, v44, v42, 1);
        *v9 = v84;
        v44 = v84;
      }
      v9[1] = v42;
      *(_BYTE *)(v44 + v41) = 123;
      *(_BYTE *)(*v9 + v43) = 0;
      if ( *a4 < 0 )
      {
        v81 = v9[1];
        if ( v81 )
        {
          v82 = v81 + 1;
          v83 = v9[1];
          --v81;
        }
        else
        {
          v83 = 1;
          v82 = 2;
        }
        v44 = *v9;
        if ( v9[2] < v82 )
        {
          v90 = qvector_reserve(v9, v44, v82, 1);
          *v9 = v90;
          v44 = v90;
        }
        v9[1] = v82;
        *(_BYTE *)(v44 + v81) = 32;
        *(_BYTE *)(*v9 + v83) = 0;
      }
      v7 = 0;
      idcv_attr = (const char *)first_idcv_attr(v10, v44, a3, a4, a5, v14);
      if ( !idcv_attr )
        goto LABEL_77;
      v8 = &v112;
      v92 = &v111;
      goto LABEL_56;
    case 6:
      qsnprintf(s, 1024, "FUNC%d", *(_DWORD *)(v10 + 8));
      goto LABEL_7;
    case 7:
      v27 = v9[1];
      if ( v27 )
      {
        v28 = v27 + 1;
        v29 = v9[1];
        --v27;
      }
      else
      {
        v29 = 1;
        v28 = 2;
      }
      v30 = *v9;
      if ( v9[2] < v28 )
      {
        v86 = qvector_reserve(v9, v30, v28, 1);
        *v9 = v86;
        v30 = v86;
      }
      v9[1] = v28;
      v31 = 0;
      *(_BYTE *)(v30 + v27) = 34;
      v32 = &s1;
      *(_BYTE *)(*v9 + v29) = 0;
      v110 = 0;
      v33 = *(_QWORD *)(v10 + 16);
      src = nullptr;
      if ( v33 )
      {
        v32 = *(const char **)(v10 + 8);
        v31 = (unsigned int)(v33 - 1);
      }
      qstr2user(&src, v32, v31);
      v34 = v110;
      if ( (_QWORD)v110 )
      {
        v35 = v110 - 1;
        if ( (_QWORD)v110 != 1 )
        {
          v73 = v9[1];
          v74 = v110 - 1;
          if ( v73 )
          {
            --v73;
            v74 = v35 + v73;
            v34 = v110 + v73;
          }
          v75 = *v9;
          if ( v9[2] < v34 )
          {
            v91 = qvector_reserve(v9, v75, v34, 1);
            *v9 = v91;
            v75 = v91;
          }
          v9[1] = v34;
          *(_BYTE *)(v75 + v74) = 0;
          v32 = (const char *)src;
          memcpy((void *)(v73 + *v9), src, v35);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v110 = 0;
        qfree(src, v32);
      }
      v36 = v9[1];
      if ( v36 )
      {
        v37 = v36 + 1;
        v38 = v9[1];
        --v36;
      }
      else
      {
        v38 = 1;
        v37 = 2;
      }
      v39 = *v9;
      if ( v9[2] < v37 )
      {
        v85 = qvector_reserve(v9, v39, v37, 1);
        *v9 = v85;
        v39 = v85;
      }
      v9[1] = v37;
      *(_BYTE *)(v39 + v36) = 34;
      *(_BYTE *)(*v9 + v38) = 0;
      goto LABEL_7;
    case 8:
      qsnprintf(s, 1024, "PVOID_%p", *(const void **)(v10 + 8));
LABEL_7:
      v7 = 0;
      goto LABEL_8;
    default:
      if ( under_debugger )
        BUG();
      interr(40248, a2, a3, a4, a6);
      break;
  }
LABEL_92:
  v64 = v62 + 1;
  v63 = v62--;
LABEL_72:
  v65 = *v9;
  if ( v9[2] < v64 )
  {
    v107 = v63;
    v103 = v62;
    v99 = v64;
    v88 = qvector_reserve(v9, v65, v64, 1);
    v63 = v107;
    v62 = v103;
    *v9 = v88;
    v64 = v99;
    v65 = v88;
  }
  v9[1] = v64;
  *(_BYTE *)(v65 + v62) = 32;
  *(_BYTE *)(*v9 + v63) = 0;
  while ( 1 )
  {
    v51 = strlen(idcv_attr);
    v52 = v9[1];
    v53 = v51;
    v54 = v51;
    if ( v52 )
    {
      --v52;
      v54 = v51 + v52;
    }
    v55 = *v9;
    v56 = v54 + 1;
    if ( v9[2] < v54 + 1 )
    {
      v108 = v51;
      v105 = v52;
      v101 = v54;
      v97 = v54 + 1;
      v66 = qvector_reserve(v9, v55, v56, 1);
      v53 = v108;
      v52 = v105;
      *v9 = v66;
      v54 = v101;
      v55 = v66;
      v56 = v97;
    }
    v9[1] = v56;
    *(_BYTE *)(v55 + v54) = 0;
    memmove((void *)(v52 + *v9), idcv_attr, v53);
    v48 = v9[1];
    if ( v48 )
    {
      v45 = v48 + 1;
      v46 = v9[1];
      v47 = *v9;
      --v48;
      if ( v9[2] < v45 )
        goto LABEL_63;
    }
    else
    {
      v47 = *v9;
      v46 = 1;
      v45 = 2;
      if ( (unsigned __int64)v9[2] < 2 )
      {
LABEL_63:
        v104 = v48;
        v100 = v46;
        v96 = v45;
        v57 = qvector_reserve(v9, v47, v45, 1);
        v48 = v104;
        v46 = v100;
        *v9 = v57;
        v45 = v96;
        v47 = v57;
      }
    }
    v9[1] = v45;
    *(_BYTE *)(v47 + v48) = 61;
    *(_BYTE *)(*v9 + v46) = 0;
    v111 = 2;
    *((_QWORD *)v8 + 2) = 0;
    *(_OWORD *)v8 = 0;
    get_idcv_attr(v92, v10, idcv_attr, 0);
    sub_3DD7A0(v9, 0, v92, a4);
    v49 = *((int *)a4 + 2);
    if ( (_DWORD)v49 )
    {
      v50 = v9[1];
      if ( v50 )
      {
        if ( v50 - 1 >= v49 )
          break;
      }
    }
    ++v7;
    free_idcv(v92);
    idcv_attr = (const char *)next_idcv_attr(v10, idcv_attr);
    if ( !idcv_attr )
      goto LABEL_77;
LABEL_56:
    if ( v7 > 0 )
    {
      v58 = v9[1];
      if ( v58 )
      {
        v59 = v58 + 1;
        v60 = v9[1];
        --v58;
      }
      else
      {
        v60 = 1;
        v59 = 2;
      }
      v61 = *v9;
      if ( v9[2] < v59 )
      {
        v106 = v60;
        v102 = v58;
        v98 = v59;
        v71 = qvector_reserve(v9, v61, v59, 1);
        v60 = v106;
        v58 = v102;
        *v9 = v71;
        v59 = v98;
        v61 = v71;
      }
      v9[1] = v59;
      *(_BYTE *)(v61 + v58) = 44;
      *(_BYTE *)(*v9 + v60) = 0;
      if ( *a4 < 0 )
      {
        v62 = v9[1];
        if ( v62 )
          goto LABEL_92;
        v63 = 1;
        v64 = 2;
        goto LABEL_72;
      }
    }
  }
  free_idcv(v92);
LABEL_77:
  if ( *a4 < 0 )
  {
    v77 = v9[1];
    if ( v77 )
    {
      v78 = v77 + 1;
      v79 = v9[1];
      --v77;
    }
    else
    {
      v79 = 1;
      v78 = 2;
    }
    v80 = *v9;
    if ( v9[2] < v78 )
    {
      v89 = qvector_reserve(v9, v80, v78, 1);
      *v9 = v89;
      v80 = v89;
    }
    v9[1] = v78;
    *(_BYTE *)(v80 + v77) = 32;
    *(_BYTE *)(*v9 + v79) = 0;
  }
  v67 = v9[1];
  if ( v67 )
  {
    v68 = v67 + 1;
    v69 = v9[1];
    --v67;
  }
  else
  {
    v69 = 1;
    v68 = 2;
  }
  v70 = *v9;
  if ( v9[2] < v68 )
  {
    v87 = qvector_reserve(v9, v70, v68, 1);
    *v9 = v87;
    v70 = v87;
  }
  v9[1] = v68;
  *(_BYTE *)(v70 + v67) = 125;
  *(_BYTE *)(*v9 + v69) = 0;
LABEL_8:
  if ( s[0] )
  {
    v20 = strlen(s);
    v21 = v9[1];
    v22 = v20;
    v23 = v20;
    if ( v21 )
    {
      --v21;
      v24 = *v9;
      v23 = v20 + v21;
      v25 = v20 + v21 + 1;
      if ( v9[2] >= v25 )
        goto LABEL_22;
    }
    else
    {
      v24 = *v9;
      v25 = v20 + 1;
      if ( v9[2] >= v20 + 1 )
      {
LABEL_22:
        v9[1] = v25;
        *(_BYTE *)(v24 + v23) = 0;
        memmove((void *)(*v9 + v21), s, v22);
        goto LABEL_9;
      }
    }
    v95 = v23;
    v93 = v25;
    v26 = qvector_reserve(v9, v24, v25, 1);
    v23 = v95;
    v25 = v93;
    *v9 = v26;
    v24 = v26;
    goto LABEL_22;
  }
LABEL_9:
  v15 = *((_DWORD *)a4 + 2);
  if ( v15 )
  {
    v16 = v9[1];
    if ( v16 )
    {
      v17 = v15;
      if ( v16 - 1 >= v15 )
      {
        v18 = v15 + 1LL;
        if ( v16 < v18 )
        {
          v72 = *v9;
          if ( v9[2] < v18 )
          {
            v76 = qvector_reserve(v9, v72, v15 + 1LL, 1);
            v16 = v9[1];
            *v9 = v76;
            v72 = v76;
          }
          memset((void *)(v72 + v16), 0, v18 - v16);
          v9[1] = v18;
        }
        else if ( v16 != v15 + 1LL )
        {
          v9[1] = v18;
        }
        *(_BYTE *)(*v9 + v17) = 0;
      }
    }
  }
  if ( v94 )
    *v94 = v7;
  return v114 - __readfsqword(0x28u);
}
