unsigned __int64 __fastcall sub_3A3200(int *a1, unsigned int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  bool v4; // zf
  unsigned __int64 v6; // rsi
  int *v7; // rdi
  int *v8; // rdx
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  char *v18; // rsi
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 i; // rax
  char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r15
  size_t v33; // rax
  size_t v34; // r14
  __int64 v35; // r13
  unsigned __int64 v36; // r10
  unsigned int v37; // ebp
  int *v38; // rsi
  int *v39; // rdi
  unsigned int v40; // r14d
  __int64 v41; // rax
  bool v42; // bp
  __int64 v43; // rax
  unsigned int v45; // r14d
  _QWORD *v46; // rax
  int *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r13
  unsigned int v51; // r14d
  unsigned int v52; // r15d
  unsigned int v53; // ebp
  unsigned int v54; // ebp
  int v55; // [rsp+0h] [rbp-1B8h]
  __int64 v56; // [rsp+8h] [rbp-1B0h]
  int *v57; // [rsp+10h] [rbp-1A8h]
  int v58[2]; // [rsp+18h] [rbp-1A0h]
  int v59[2]; // [rsp+18h] [rbp-1A0h]
  unsigned int v60; // [rsp+18h] [rbp-1A0h]
  int v61[2]; // [rsp+18h] [rbp-1A0h]
  int v62[2]; // [rsp+18h] [rbp-1A0h]
  size_t n; // [rsp+20h] [rbp-198h]
  unsigned int na; // [rsp+20h] [rbp-198h]
  size_t nb; // [rsp+20h] [rbp-198h]
  int v66[2]; // [rsp+28h] [rbp-190h]
  unsigned int v67; // [rsp+28h] [rbp-190h]
  int v68[2]; // [rsp+28h] [rbp-190h]
  __int64 v69; // [rsp+30h] [rbp-188h]
  int v70; // [rsp+38h] [rbp-180h]
  unsigned int v71; // [rsp+3Ch] [rbp-17Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-178h] BYREF
  int v73[4]; // [rsp+48h] [rbp-170h]
  int v74; // [rsp+58h] [rbp-160h]
  int v75; // [rsp+60h] [rbp-158h] BYREF
  int v76; // [rsp+68h] [rbp-150h] BYREF
  _QWORD *v77; // [rsp+70h] [rbp-148h]
  int *v78; // [rsp+78h] [rbp-140h]
  int *v79; // [rsp+80h] [rbp-138h]
  __int64 v80; // [rsp+88h] [rbp-130h]
  int v81[4]; // [rsp+90h] [rbp-128h] BYREF
  int v82[2]; // [rsp+A0h] [rbp-118h]
  __int64 v83; // [rsp+A8h] [rbp-110h] BYREF
  int v84; // [rsp+B0h] [rbp-108h]
  int v85; // [rsp+B8h] [rbp-100h]
  int v86; // [rsp+C0h] [rbp-F8h]
  int v87; // [rsp+C8h] [rbp-F0h]
  int v88; // [rsp+D0h] [rbp-E8h]
  int v89; // [rsp+D8h] [rbp-E0h]
  int v90; // [rsp+E0h] [rbp-D8h]
  int v91; // [rsp+E8h] [rbp-D0h]
  int v92; // [rsp+F0h] [rbp-C8h]
  int v93; // [rsp+F8h] [rbp-C0h]
  int v94; // [rsp+100h] [rbp-B8h]
  int v95; // [rsp+108h] [rbp-B0h]
  int v96; // [rsp+110h] [rbp-A8h]
  int v97; // [rsp+118h] [rbp-A0h]
  int v98; // [rsp+120h] [rbp-98h]
  int v99; // [rsp+128h] [rbp-90h]
  int v100; // [rsp+130h] [rbp-88h]
  int v101; // [rsp+138h] [rbp-80h]
  __int64 v102; // [rsp+140h] [rbp-78h]
  _BYTE v103[11]; // [rsp+168h] [rbp-50h] BYREF
  _BYTE src[5]; // [rsp+173h] [rbp-45h] BYREF
  _QWORD v105[8]; // [rsp+178h] [rbp-40h] BYREF

  v71 = a2;
  v105[0] = __readfsqword(0x28u);
  v2 = *(_QWORD *)a1;
  v76 = 0;
  v77 = nullptr;
  v80 = 0;
  v3 = *(_QWORD **)(v2 + 1344);
  v57 = &v76;
  v4 = v3[8] == 0;
  v78 = &v76;
  v79 = &v76;
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(46);
    BUG();
  }
  v6 = (unsigned __int64)&v71;
  v7 = (int *)(v3 + 3);
  v69 = (__int64)(v3 + 3);
  sub_39E5E0(v3 + 3, &v71, 0x77u);
  v56 = (__int64)(v3 + 4);
  if ( v3[8] )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v3[6] + 32LL);
      v10 = v3[5];
      if ( v10 )
      {
        v11 = v56;
        do
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v10 + 16);
            v13 = *(_QWORD *)(v10 + 24);
            if ( *(_DWORD *)(v10 + 32) >= v9 )
              break;
            v10 = *(_QWORD *)(v10 + 24);
            if ( !v13 )
              goto LABEL_8;
          }
          v11 = v10;
          v10 = *(_QWORD *)(v10 + 16);
        }
        while ( v12 );
LABEL_8:
        if ( v56 != v11 && v9 >= *(_DWORD *)(v11 + 32) )
          break;
      }
LABEL_20:
      v6 = v9;
      v7 = a1;
      if ( (sub_4DC440(a1, v9) & 1) != 0 )
      {
        if ( v9 == v71 )
          goto LABEL_71;
        if ( *(char *)(*((_QWORD *)a1 + 2) + 10LL) >= 0 )
          goto LABEL_71;
        *(_QWORD *)v81 = -1;
        *(_QWORD *)v82 = 0;
        *(_QWORD *)&v81[2] = 0xFFFFFFFFLL;
        v23 = &v83;
        do
        {
          *(_WORD *)v23 = 0;
          v23 += 3;
          *((_WORD *)v23 - 11) = 0;
          *((_WORD *)v23 - 10) = 0;
          *((_DWORD *)v23 - 1) = 0;
          *((_WORD *)v23 - 9) = 0;
          *(v23 - 2) = 0;
          *((_DWORD *)v23 - 2) = 0;
        }
        while ( v103 != (_BYTE *)v23 );
        v6 = v9;
        v7 = v81;
        if ( (int)decode_insn(v81, v9, v103, v21, v22, 0) <= 0 )
          goto LABEL_71;
        v6 = (unsigned __int64)v81;
        v7 = (_DWORD *)(&qword_20 + 5);
        if ( sub_375980(0x25u, v81, 1) < 0 )
          goto LABEL_71;
      }
      v24 = sub_3B9AA0(a1, v9, 4) & 0x600;
      v25 = v24;
      if ( v24 == 512 )
      {
        v37 = v9;
        if ( (sub_3B9AA0(a1, v9, 4) & 0x600) == 0x200 )
          v37 = sub_3BD5D0(a1, v9);
        v6 = v37;
        v7 = a1;
        if ( (sub_3B9AA0(a1, v37, 4) & 0x600) != 0x400 )
        {
LABEL_71:
          if ( v9 == -1 )
            goto LABEL_35;
          if ( (debug & 0x1000) != 0 )
            sub_383DA0();
          if ( v80 )
          {
            while ( 1 )
            {
              sub_4DBE60(a1, v9, 1);
              BYTE4(ptr) = 0;
              LODWORD(ptr) = -1;
              sub_3DD670(a1, &ptr, v9);
              v45 = (unsigned int)ptr;
              if ( (unsigned __int8)(BYTE4(ptr) - 18) > 1u && BYTE4(ptr) != 21 )
                break;
              v46 = v77;
              if ( !v77 )
                break;
              v47 = v57;
              do
              {
                while ( 1 )
                {
                  v48 = v46[2];
                  v49 = v46[3];
                  if ( *((_DWORD *)v46 + 8) >= (unsigned int)ptr )
                    break;
                  v46 = (_QWORD *)v46[3];
                  if ( !v49 )
                    goto LABEL_81;
                }
                v47 = (int *)v46;
                v46 = (_QWORD *)v46[2];
              }
              while ( v48 );
LABEL_81:
              if ( v47 == v57 )
                break;
              if ( (unsigned int)ptr < v47[8] )
                break;
              if ( (sub_3B9AA0(a1, v9, 4) & 0x10000) == 0 )
              {
                sub_3DD450(a1, &ptr, v45);
                sub_3DD610(a1, &ptr, v45);
                if ( (_DWORD)ptr != -1 )
                  break;
              }
              if ( (sub_4DC440(a1, v45) & 1) != 0 )
                break;
              v9 = v45;
            }
          }
          v50 = (__int64)v78;
          v51 = -1;
          v52 = -1;
          v67 = v71 + 1;
          while ( 2 )
          {
            if ( (int *)v50 == v57 )
            {
              if ( v52 == -1 )
                goto LABEL_100;
              v60 = 0;
              na = 0;
              goto LABEL_95;
            }
            v53 = *(_DWORD *)(v50 + 32);
            na = v53;
            v60 = sub_3BCF60(a1, v53);
            if ( v51 != v53 )
            {
              if ( v52 != -1 )
              {
LABEL_95:
                *(_QWORD *)v82 = 0;
                v83 = 0;
                *(_OWORD *)v81 = 0;
                sub_3CC010((_DWORD)a1, v52, 0);
                if ( *(_QWORD *)v82 )
                  (*(void (__fastcall **)(int *, int *, __int64))v82)(v81, v81, 3);
                sub_3A15E0(a1, v52, v51);
                if ( v67 >= v51 )
                  v51 = v67;
                v67 = v51;
                if ( (int *)v50 == v57 )
                {
LABEL_100:
                  v54 = v71;
                  sub_4DBE60(a1, v71, 1);
                  sub_4DBC20(v54);
                  v6 = v54;
                  v7 = (_DWORD *)(byte_9 + 4);
                  forget_problem(13, v54);
                  if ( (get_merge_state(13, v54) & 2) == 0 && v54 != -1 )
                  {
                    v6 = v54;
                    v7 = a1;
                    sub_3A1890(a1, v54, v67, 0xC8u);
                  }
                  goto LABEL_35;
                }
              }
              v52 = na;
            }
            v51 = v60;
            v50 = std::_Rb_tree_increment();
            continue;
          }
        }
        v9 = v37;
      }
      else if ( v24 != 1024 )
      {
        goto LABEL_29;
      }
      v6 = v9;
      v7 = (_DWORD *)(byte_9 + 4);
      if ( !(unsigned __int8)is_problem_present(13, v9) )
        goto LABEL_71;
      v38 = (int *)v9;
      v39 = a1;
      v40 = sub_3BCF60(a1, v9);
      *(_QWORD *)v82 = 0;
      v83 = 0;
      *(_OWORD *)v81 = 0;
      sub_3CC010((_DWORD)a1, v9, 0);
      if ( *(_QWORD *)v82 )
      {
        v38 = v81;
        v39 = v81;
        (*(void (__fastcall **)(int *, int *, __int64))v82)(v81, v81, 3);
      }
      if ( (get_merge_state(v39, v38) & 2) == 0 && v9 != -1 )
        sub_3A1890(a1, v9, v40, 0xC8u);
      sub_4DBE60(a1, v9, 2);
      v25 = 1024;
LABEL_29:
      *(_QWORD *)v81 = -1;
      *(_QWORD *)v82 = 0;
      *(_QWORD *)&v81[2] = 0xFFFFFFFFLL;
      v26 = &v83;
      do
      {
        *(_WORD *)v26 = 0;
        v26 += 3;
        *((_WORD *)v26 - 11) = 0;
        *((_WORD *)v26 - 10) = 0;
        *((_DWORD *)v26 - 1) = 0;
        *((_WORD *)v26 - 9) = 0;
        *(v26 - 2) = 0;
        *((_DWORD *)v26 - 2) = 0;
      }
      while ( v103 != (_BYTE *)v26 );
      v6 = v9;
      v7 = a1;
      if ( (int)sub_55E700(
                  (int)a1,
                  v9,
                  v55,
                  v56,
                  (int)v57,
                  v58[0],
                  n,
                  v66[0],
                  v69,
                  v70,
                  (int)ptr,
                  v73[0],
                  v73[2],
                  v74,
                  v75,
                  v76,
                  (int)v77,
                  (int)v78,
                  (int)v79,
                  v80,
                  v81[0],
                  v81[2],
                  v82[0],
                  v83,
                  v84,
                  v85,
                  v86,
                  v87,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92,
                  v93,
                  v94,
                  v95,
                  v96,
                  v97,
                  v98,
                  v99,
                  v100,
                  v101,
                  v102) <= 0 )
        goto LABEL_71;
      v6 = v9;
      v7 = a1;
      v27 = sub_3B9AA0(a1, v9, 4);
      if ( v25 != 1536 && (~BYTE1(v27) & 6) == 0 )
      {
        v7 = &v75;
        v6 = v9;
        v41 = sub_39B300((__int64)&v75, v9);
        if ( v8 )
        {
          v42 = v8 == v57 || v41 != 0;
          if ( !v42 )
            v42 = v9 < v8[8];
          v43 = operator new(0x28u);
          *(_DWORD *)(v43 + 32) = v9;
          v6 = v43;
          v7 = (int *)v42;
          std::_Rb_tree_insert_and_rebalance();
          ++v80;
        }
      }
      if ( !v3[8] )
        goto LABEL_35;
    }
    if ( !(unsigned __int8)must_journal(v7, v6, v12) )
    {
LABEL_19:
      v20 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v20, 0x28u);
      --v3[8];
      goto LABEL_20;
    }
    *(_OWORD *)v73 = 0;
    ptr = nullptr;
    v14 = pack_dd(src, v105, v9) - (_QWORD)src;
    v15 = v14;
    if ( !v14 )
    {
LABEL_17:
      add_undo_record(120, ptr, *(_QWORD *)v73);
      if ( ptr )
      {
        *(_QWORD *)v73 = 0;
        qfree(ptr);
      }
      goto LABEL_19;
    }
    v16 = *(_QWORD *)v73;
    v17 = *(_QWORD *)v73 + v14;
    if ( __CFADD__(*(_QWORD *)v73, v14) )
    {
      if ( *(_QWORD *)v73 > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( *(_QWORD *)v73 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)v73 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 = (char *)ptr;
    v19 = *(_QWORD *)v73;
    if ( *(_QWORD *)&v73[2] < v17 )
    {
      *(_QWORD *)v68 = *(_QWORD *)v73;
      nb = v15;
      *(_QWORD *)v62 = v17;
      ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
      v18 = (char *)ptr;
      v16 = *(_QWORD *)v68;
      v19 = *(_QWORD *)v73;
      v15 = nb;
      v17 = *(_QWORD *)v62;
    }
    *(_QWORD *)v66 = v16;
    n = v15;
    *(_QWORD *)v58 = v17;
    memset(&v18[v19], 0, v17 - v19);
    v15 = n;
    v16 = *(_QWORD *)v66;
    *(_QWORD *)v73 = *(_QWORD *)v58;
LABEL_16:
    memcpy((char *)ptr + v16, src, v15);
    goto LABEL_17;
  }
LABEL_35:
  v28 = v3[6];
  if ( !(unsigned __int8)must_journal(v7, v6, v8) )
    goto LABEL_66;
  ptr = nullptr;
  *(_OWORD *)v73 = 0;
  if ( v56 != v28 )
  {
    for ( i = pack_dd(src, v105, *(unsigned int *)(v28 + 32)); ; i = pack_dd(src, v105, *(unsigned int *)(v32 + 32)) )
    {
      v33 = i - (_QWORD)src;
      v34 = v33;
      if ( v33 )
        break;
LABEL_41:
      v32 = std::_Rb_tree_increment();
      if ( v56 == v32 )
      {
        if ( *(_QWORD *)v73 )
        {
          add_undo_record(120, ptr, *(_QWORD *)v73);
          if ( ptr )
          {
            *(_QWORD *)v73 = 0;
            qfree(ptr);
          }
LABEL_66:
          sub_3A2EB0(v69, v28, v56);
        }
        else if ( ptr )
        {
          qfree(ptr);
        }
        goto LABEL_67;
      }
    }
    v35 = *(_QWORD *)v73;
    v36 = *(_QWORD *)v73 + v33;
    if ( __CFADD__(*(_QWORD *)v73, v33) )
    {
      if ( *(_QWORD *)v73 > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( *(_QWORD *)v73 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)v73 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_40;
      }
      v30 = (char *)ptr;
      v31 = *(_QWORD *)v73;
      v36 = 0x7FFFFFFFFFFFFFFFLL;
      if ( *(_QWORD *)&v73[2] < 0x7FFFFFFFFFFFFFFFuLL )
        goto LABEL_106;
    }
    else
    {
      v30 = (char *)ptr;
      v31 = *(_QWORD *)v73;
      if ( *(_QWORD *)&v73[2] < v36 )
      {
LABEL_106:
        *(_QWORD *)v61 = v36;
        ptr = (void *)qvector_reserve(&ptr, v30, v36, 1);
        v30 = (char *)ptr;
        v36 = *(_QWORD *)v61;
        v31 = *(_QWORD *)v73;
      }
    }
    *(_QWORD *)v59 = v36;
    memset(&v30[v31], 0, v36 - v31);
    *(_QWORD *)v73 = *(_QWORD *)v59;
LABEL_40:
    memcpy((char *)ptr + v35, src, v34);
    goto LABEL_41;
  }
LABEL_67:
  sub_39B6A0(v77);
  return v105[0] - __readfsqword(0x28u);
}

