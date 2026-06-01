__int64 __fastcall sub_689E50(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, _QWORD *a5, int a6)
{
  unsigned int v8; // r13d
  char v9; // al
  unsigned int v11; // r14d
  __int64 v12; // r15
  char v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // r15d
  char v21; // r15
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // r12d
  unsigned int v27; // r14d
  unsigned __int64 v28; // r13
  size_t v29; // r15
  __int64 v30; // r14
  size_t v31; // rbx
  __int64 v32; // rsi
  unsigned __int64 v33; // rbx
  size_t v34; // r14
  __int64 v35; // r13
  size_t v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // r14
  char v45; // r15
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // r14
  unsigned __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r14
  char v58; // r8
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rsi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // r15
  const char *v70; // rsi
  __int64 v71; // r8
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v82; // [rsp+18h] [rbp-A0h]
  __int64 v83; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v84; // [rsp+18h] [rbp-A0h]
  __int64 v85; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v86; // [rsp+18h] [rbp-A0h]
  __int64 v87; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v88; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v89; // [rsp+18h] [rbp-A0h]
  __int64 v90; // [rsp+20h] [rbp-98h]
  __int64 v91; // [rsp+20h] [rbp-98h]
  __int64 v92; // [rsp+20h] [rbp-98h]
  char v93; // [rsp+20h] [rbp-98h]
  __int64 v94; // [rsp+20h] [rbp-98h]
  __int64 v95; // [rsp+20h] [rbp-98h]
  unsigned __int64 v96; // [rsp+20h] [rbp-98h]
  __int64 v97; // [rsp+28h] [rbp-90h]
  __int64 v98; // [rsp+28h] [rbp-90h]
  __int64 v99; // [rsp+28h] [rbp-90h]
  _DWORD v100[4]; // [rsp+30h] [rbp-88h] BYREF
  void *src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v102; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v104; // [rsp+68h] [rbp-50h]
  unsigned __int64 v105; // [rsp+78h] [rbp-40h]

  v8 = *(_BYTE *)(a4 + 88) & 0xF0;
  v9 = *(_BYTE *)(a4 + 88) & 0xF0;
  v105 = __readfsqword(0x28u);
  if ( v9 == -64 )
    v8 = *(_DWORD *)(a4 + 28);
  if ( v8 <= 0x10 )
    v8 = getinf(99);
  v11 = a6 & 0xFFFFFFC0 | (*(int *)(a4 + 24) >> 2) & 0x30;
  v12 = a1[1];
  v13 = v11 | 0xC;
  if ( v12 )
  {
    v14 = v12 + 1;
    v15 = a1[1];
    v16 = *a1;
    --v12;
    if ( a1[2] >= v14 )
      goto LABEL_7;
  }
  else
  {
    v16 = *a1;
    v15 = 1;
    v14 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_7;
  }
  v90 = v15;
  v82 = v14;
  v38 = qvector_reserve(a1, v16, v14, 1);
  v15 = v90;
  v14 = v82;
  *a1 = v38;
  v16 = v38;
LABEL_7:
  a1[1] = v14;
  *(_BYTE *)(v16 + v12) = v13;
  *(_BYTE *)(*a1 + v15) = 0;
  v17 = *(_DWORD *)(a4 + 24);
  v18 = a1[1];
  v19 = v18;
  v20 = v17 & 1;
  if ( (v17 & 1) != 0 )
  {
    v39 = *(_QWORD *)(a4 + 72);
    v20 = v39;
    if ( (int)v39 <= 14 && (v17 & 0x1E00) == 0 )
    {
      v40 = v39 | 0xA0;
      if ( v18 )
      {
        v42 = v18 + 1;
        v41 = a1[1];
        --v18;
      }
      else
      {
        v41 = 1;
        v42 = 2;
      }
      v43 = *a1;
      if ( a1[2] < v42 )
      {
        v98 = v41;
        v93 = v39 | 0xA0;
        v86 = v42;
        v65 = qvector_reserve(a1, v43, v42, 1);
        v41 = v98;
        v40 = v93;
        *a1 = v65;
        v42 = v86;
        v43 = v65;
      }
      a1[1] = v42;
      *(_BYTE *)(v43 + v18) = v40;
      *(_BYTE *)(*a1 + v41) = 0;
      if ( !(unsigned __int8)sub_686160(a1, v20, a4) )
        return 0;
      v17 = *(_DWORD *)(a4 + 24);
      v19 = a1[1];
      if ( (v17 & 0x3E) != 0 )
        goto LABEL_45;
LABEL_10:
      v21 = *(_BYTE *)(a4 + 88);
      v22 = v19;
      if ( v19 )
        goto LABEL_11;
LABEL_54:
      v23 = *a1;
      v25 = 1;
      v24 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_12;
      goto LABEL_55;
    }
LABEL_56:
    if ( v18 )
    {
      v54 = *a1;
      v55 = v18 + 1;
      v56 = a1[1];
      --v18;
      if ( a1[2] >= (unsigned __int64)(v19 + 1) )
        goto LABEL_58;
    }
    else
    {
      v54 = *a1;
      v56 = 1;
      v55 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_58;
    }
    v92 = v56;
    v85 = v55;
    v64 = qvector_reserve(a1, v54, v55, 1);
    v56 = v92;
    v55 = v85;
    *a1 = v64;
    v54 = v64;
LABEL_58:
    a1[1] = v55;
    *(_BYTE *)(v54 + v18) = -81;
    *(_BYTE *)(*a1 + v56) = 0;
    v57 = a1[1];
    v58 = (v20 > 0) + 0x80;
    if ( v57 )
    {
      v59 = v57 + 1;
      v60 = a1[1];
      v61 = *a1;
      --v57;
      if ( a1[2] >= v59 )
        goto LABEL_60;
    }
    else
    {
      v61 = *a1;
      v60 = 1;
      v59 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_60;
    }
    v97 = v60;
    v84 = v59;
    v63 = qvector_reserve(a1, v61, v59, 1);
    v60 = v97;
    v58 = (v20 > 0) + 0x80;
    *a1 = v63;
    v59 = v84;
    v61 = v63;
LABEL_60:
    a1[1] = v59;
    *(_BYTE *)(v61 + v57) = v58;
    *(_BYTE *)(*a1 + v60) = 0;
    sub_6926A0(a1, *(_DWORD *)(a4 + 24) & 0x1E3F);
    if ( v20 )
    {
      sub_692580(a1, (unsigned int)v20);
      if ( !(unsigned __int8)sub_686160(a1, v20, a4) )
        return 0;
    }
    v19 = a1[1];
    goto LABEL_10;
  }
  if ( (v17 & 0x1E00) != 0 )
    goto LABEL_56;
  if ( (v17 & 0x3E) == 0 )
    goto LABEL_10;
LABEL_45:
  v44 = v19;
  v45 = (v17 >> 1) & 0x1F;
  if ( v19 )
  {
    v46 = v19 + 1;
    v47 = v19;
    v44 = v19 - 1;
  }
  else
  {
    v47 = 1;
    v46 = 2;
  }
  v48 = *a1;
  if ( a1[2] < v46 )
  {
    v95 = v47;
    v89 = v46;
    v76 = qvector_reserve(a1, v48, v46, 1);
    v47 = v95;
    v46 = v89;
    *a1 = v76;
    v48 = v76;
  }
  a1[1] = v46;
  *(_BYTE *)(v48 + v44) = -81;
  *(_BYTE *)(*a1 + v47) = 0;
  v49 = a1[1];
  if ( v49 )
  {
    v50 = v49 + 1;
    v51 = a1[1];
    --v49;
  }
  else
  {
    v51 = 1;
    v50 = 2;
  }
  v52 = *a1;
  if ( a1[2] < v50 )
  {
    v94 = v51;
    v88 = v50;
    v75 = qvector_reserve(a1, v52, v50, 1);
    v51 = v94;
    v50 = v88;
    *a1 = v75;
    v52 = v75;
  }
  a1[1] = v50;
  *(_BYTE *)(v52 + v49) = v45;
  *(_BYTE *)(*a1 + v51) = 0;
  v19 = a1[1];
  v21 = *(_BYTE *)(a4 + 88);
  v22 = v19;
  if ( !v19 )
    goto LABEL_54;
LABEL_11:
  v23 = *a1;
  v24 = v19 + 1;
  v25 = v19;
  --v22;
  if ( a1[2] >= (unsigned __int64)(v19 + 1) )
    goto LABEL_12;
LABEL_55:
  v91 = v25;
  v83 = v24;
  v53 = qvector_reserve(a1, v23, v24, 1);
  v25 = v91;
  v24 = v83;
  *a1 = v53;
  v23 = v53;
LABEL_12:
  a1[1] = v24;
  *(_BYTE *)(v23 + v22) = v21;
  *(_BYTE *)(*a1 + v25) = 0;
  if ( (*(_BYTE *)(a4 + 88) & 0xF0) == 0xC0 && !(unsigned __int8)sub_6926A0(a1, *(unsigned int *)(a4 + 28))
    || !(unsigned __int8)sub_51D400(a1, 0, 0, a5, 0)
    || (*(_BYTE *)(a4 + 32) & 0xFu) <= 9
    && ((unsigned __int8)get_tinfo_attrs(*(_QWORD *)(a4 + 32), 0, 0)
     || (unsigned __int8)get_tinfo_property(*(_QWORD *)(a4 + 32), 0)) )
  {
    return 0;
  }
  src = nullptr;
  ptr = nullptr;
  v102 = 0;
  v104 = 0;
  v26 = serialize_tinfo(a1, &src, &ptr, a4 + 32, 16);
  if ( !(_BYTE)v26 )
    goto LABEL_78;
  v27 = v8 - 208;
  if ( v8 - 208 <= 0x2F )
  {
    if ( (get_tinfo_property(*(_QWORD *)(a4 + 32), 2) & 0x3F) != 1
      && (!sub_685740(a4 + 40, v8) || !*(_DWORD *)(a4 + 40) || !(unsigned __int8)append_argloc_0(a1, a4 + 40)) )
    {
      goto LABEL_78;
    }
  }
  else if ( v8 == 32 )
  {
    if ( *(_QWORD *)(a4 + 8) )
    {
      if ( !under_debugger )
        interr(1005);
      BUG();
    }
    goto LABEL_19;
  }
  v66 = *(_QWORD *)(a4 + 8);
  if ( (unsigned __int8)sub_692580(a1, (unsigned int)v66) )
  {
    if ( (int)v66 <= 0 )
    {
LABEL_19:
      if ( a2 )
      {
        v28 = v102;
        if ( (_QWORD)v102 )
        {
          v29 = v102 - 1;
          if ( (_QWORD)v102 != 1 )
          {
            v30 = a2[1];
            v31 = v102 - 1;
            if ( v30 )
            {
              --v30;
              v31 = v29 + v30;
              v28 = v102 + v30;
            }
            v32 = *a2;
            if ( a2[2] < v28 )
            {
              v78 = qvector_reserve(a2, v32, v28, 1);
              *a2 = v78;
              v32 = v78;
            }
            a2[1] = v28;
            *(_BYTE *)(v32 + v31) = 0;
            memcpy((void *)(v30 + *a2), src, v29);
          }
        }
      }
      if ( a3 )
      {
        v33 = v104;
        if ( (_QWORD)v104 )
        {
          v34 = v104 - 1;
          if ( (_QWORD)v104 != 1 )
          {
            v35 = a3[1];
            v36 = v104 - 1;
            if ( v35 )
            {
              --v35;
              v36 = v34 + v35;
              v33 = v104 + v35;
            }
            v37 = *a3;
            if ( a3[2] < v33 )
            {
              v79 = qvector_reserve(a3, v37, v33, 1);
              *a3 = v79;
              v37 = v79;
            }
            a3[1] = v33;
            *(_BYTE *)(v37 + v36) = 0;
            memcpy((void *)(v35 + *a3), ptr, v34);
          }
        }
      }
      goto LABEL_79;
    }
    v67 = (unsigned int)(v66 - 1);
    v68 = 0;
    v87 = 16 * (5 * v67 + 5);
    while ( 1 )
    {
      v69 = v68 + *(_QWORD *)a4;
      if ( a2 )
      {
        v70 = haystack;
        if ( *(_QWORD *)(v69 + 24) )
          v70 = *(const char **)(v69 + 16);
        if ( !(unsigned __int8)sub_6891C0(a2, v70) )
          break;
      }
      if ( a3 && !(unsigned __int8)sub_689540(a3, v69 + 40) )
        break;
      if ( *(_DWORD *)(v69 + 72) )
      {
        v71 = a1[1];
        v72 = 2;
        if ( v71 )
          v72 = v71-- + 1;
        v73 = *a1;
        if ( a1[2] < v72 )
        {
          v99 = v71;
          v96 = v72;
          v77 = qvector_reserve(a1, v73, v72, 1);
          *a1 = v77;
          v71 = v99;
          v73 = v77;
          v72 = v96;
        }
        a1[1] = v72;
        *(_BYTE *)(v73 + v71) = -1;
        *(_BYTE *)(*a1 + v71 + 1) = 0;
        sub_6926A0(a1, *(unsigned int *)(v69 + 72));
      }
      if ( !(unsigned __int8)serialize_tinfo(a1, a2, a3, v69 + 64, 16) )
        break;
      if ( v27 <= 0x2F )
      {
        v74 = *(_QWORD *)a4;
        v100[0] = 0;
        copy_argloc(v100, v68 + v74);
        if ( v100[0] == 1 )
        {
          if ( (*(_BYTE *)(a4 + 25) & 2) == 0 )
          {
            cleanup_argloc(v100);
            v100[0] = 1;
            v100[2] = 0;
          }
        }
        else if ( !v100[0] )
        {
          goto LABEL_77;
        }
        if ( !(unsigned __int8)append_argloc_0(a1, v100) )
        {
LABEL_77:
          cleanup_argloc(v100);
          break;
        }
        cleanup_argloc(v100);
      }
      v68 += 80;
      if ( v68 == v87 )
        goto LABEL_19;
    }
  }
LABEL_78:
  v26 = 0;
LABEL_79:
  if ( ptr )
  {
    *(_QWORD *)&v104 = 0;
    qfree(ptr);
  }
  if ( src )
  {
    *(_QWORD *)&v102 = 0;
    qfree(src);
  }
  return v26;
}

