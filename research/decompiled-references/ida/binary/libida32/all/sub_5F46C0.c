__int64 __fastcall sub_5F46C0(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int *func; // r13
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  char *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  char *v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  char *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  char *v18; // rbp
  void *v19; // rdi
  void *v20; // rdi
  unsigned __int64 v22; // r14
  char *v23; // rax
  __int64 v24; // rbx
  char *v25; // r15
  _DWORD *v26; // rbx
  char *v27; // r14
  int v28; // edx
  int v29; // r14d
  __int64 v30; // rax
  int v31; // r14d
  int v32; // ebx
  unsigned int v33; // eax
  int v34; // eax
  int v35; // r14d
  unsigned int v36; // r15d
  int v37; // ebx
  int v38; // r15d
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rax
  char *v42; // rbx
  int v43; // r13d
  unsigned int v44; // r12d
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // r8d
  void *v49; // rdi
  _DWORD *v50; // rax
  char *v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rbx
  unsigned int v57; // edx
  unsigned int tinfo_size; // eax
  char *v59; // r14
  int v60; // eax
  int *v61; // rcx
  int **v62; // rax
  char v63; // al
  int v64; // eax
  int *v65; // [rsp+8h] [rbp-140h]
  int v66; // [rsp+14h] [rbp-134h]
  int v68; // [rsp+1Ch] [rbp-12Ch]
  unsigned __int8 tinfo_details; // [rsp+2Bh] [rbp-11Dh]
  unsigned int v70; // [rsp+2Ch] [rbp-11Ch]
  __int64 tinfo_property; // [rsp+38h] [rbp-110h] BYREF
  void *v72; // [rsp+40h] [rbp-108h] BYREF
  __int128 v73; // [rsp+48h] [rbp-100h]
  void *v74; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v75; // [rsp+68h] [rbp-E0h]
  void *ptr[3]; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v77; // [rsp+98h] [rbp-B0h]
  void *v78; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+A8h] [rbp-A0h]
  __int64 v80; // [rsp+B8h] [rbp-90h]
  __int64 v81; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v82[2]; // [rsp+C8h] [rbp-80h] BYREF
  int v83; // [rsp+D8h] [rbp-70h]
  void *v84; // [rsp+E0h] [rbp-68h]
  __int128 v85; // [rsp+E8h] [rbp-60h]
  char v86; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+108h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  if ( (getinf(10) & 0xC00) == 0 )
    return 0;
  func = (unsigned int *)get_func(a2);
  if ( !func )
    return 0;
  tinfo_property = get_tinfo_property(*a3, 10);
  v78 = nullptr;
  v80 = 0;
  v81 = 0;
  v82[0] = 0;
  v82[1] = 0;
  v83 = 0;
  v84 = nullptr;
  v86 = 16;
  v79 = 0;
  v85 = 0;
  tinfo_details = get_tinfo_details(tinfo_property, 12, &v78);
  if ( tinfo_details )
  {
    if ( (_QWORD)v79 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        sub_5ECA80((_QWORD *)v78 + 10 * v7 + 8);
        v7 = ++v6;
      }
      while ( v6 < (unsigned __int64)v79 );
      v8 = *a1;
      v72 = nullptr;
      v73 = 0;
      if ( (sub_614FB0(v8, 10) & 0x800) == 0
        || (v55 = 0,
            v56 = v79,
            ptr[2] = nullptr,
            v77 = -1,
            *(__m128i *)ptr = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_2B08580,
                                (__m128i)(unsigned __int64)&v72),
            !(_QWORD)v79) )
      {
LABEL_8:
        if ( !(_QWORD)v73 && (sub_614FB0(*a1, 10) & 0x400) == 0 )
        {
          tinfo_details = 0;
LABEL_11:
          v9 = (char *)v72;
          if ( v72 )
          {
            v10 = v73;
            if ( (_QWORD)v73 )
            {
              v11 = 0;
              do
              {
                v12 = &v9[80 * v11];
                clear_tinfo_t(v12 + 64);
                v13 = *((void **)v12 + 5);
                if ( v13 )
                {
                  *((_QWORD *)v12 + 6) = 0;
                  qfree(v13);
                }
                v14 = *((void **)v12 + 2);
                if ( v14 )
                {
                  *((_QWORD *)v12 + 3) = 0;
                  qfree(v14);
                }
                ++v11;
                cleanup_argloc(v12);
                v9 = (char *)v72;
              }
              while ( v10 != v11 );
            }
            *(_QWORD *)&v73 = 0;
            qfree(v9);
          }
          goto LABEL_21;
        }
        v22 = v79;
        v74 = nullptr;
        v75 = 0;
        if ( (_QWORD)v79 )
        {
          ptr[2] = nullptr;
          LODWORD(ptr[0]) = 0;
          ptr[1] = nullptr;
          v23 = (char *)qvector_reserve(&v74, 0, v79, 24);
          v24 = v75;
          v74 = v23;
          if ( (unsigned __int64)v75 < v22 )
          {
            while ( 1 )
            {
              v25 = &v23[24 * v24];
              *(_DWORD *)v25 = 0;
              copy_argloc(v25, ptr);
              ++v24;
              *((_DWORD *)v25 + 4) = ptr[2];
              if ( v22 == v24 )
                break;
              v23 = (char *)v74;
            }
          }
          *(_QWORD *)&v75 = v22;
          cleanup_argloc(ptr);
          v26 = v74;
          v27 = (char *)v78;
          if ( 24LL * (_QWORD)v75 )
          {
            do
            {
              copy_argloc(v26, v27);
              v26[4] = -1;
              v26 += 6;
              v27 += 80;
            }
            while ( v26 != (_DWORD *)((char *)v74 + 24 * (_QWORD)v75) );
          }
          if ( (*(_BYTE *)(a1[2] + 10) & 0x20) == 0 )
            goto LABEL_50;
          if ( (_QWORD)v79 )
          {
            v28 = 0;
            v29 = 0;
            v30 = 0;
            do
            {
              ++v28;
              v29 += *((_DWORD *)v78 + 20 * v30) != 1;
              v30 = v28;
            }
            while ( v28 < (unsigned __int64)v79 );
LABEL_45:
            *(_QWORD *)(*(_QWORD *)(*a1 + 1456) + 104LL) = &v74;
            sub_375980(0x7E0u, a2, &v78, &v72);
            *(_QWORD *)(*(_QWORD *)(*a1 + 1456) + 104LL) = 0;
            if ( v29 == (_QWORD)v79 && !(_QWORD)v73 )
            {
LABEL_79:
              v43 = v75;
              v44 = v75;
              if ( (int)v75 <= 0 )
              {
LABEL_87:
                sub_5F0670(a2);
                tinfo_details = 0;
              }
              else
              {
                memset(ptr, 0, sizeof(ptr));
                ptr[0] = (void *)qvector_reserve(ptr, 0, (int)v75, 4);
                memset((char *)ptr[0] + 4 * (__int64)ptr[1], 0, 4 * (v43 - (unsigned __int64)ptr[1]));
                v45 = (unsigned int)(v43 - 1);
                v46 = 0;
                v47 = 0;
                ptr[1] = (void *)v43;
                do
                {
                  v48 = *(_DWORD *)((char *)v74 + v47 + 16);
                  v47 += 24;
                  *(_DWORD *)((char *)ptr[0] + v46) = v48;
                  v46 += 4;
                }
                while ( v46 != 4 * v45 + 4 );
                v49 = ptr[0];
                v50 = ptr[0];
                while ( *v50 == -1 )
                {
                  if ( (char *)ptr[0] + 4 * v45 + 4 == (char *)++v50 )
                    goto LABEL_85;
                }
                v64 = sub_375980(0x7E1u, a2, v44, &tinfo_property, ptr[0]);
                v49 = ptr[0];
                if ( v64 < 0 )
                {
LABEL_85:
                  if ( v49 )
                  {
                    ptr[1] = nullptr;
                    qfree(v49);
                  }
                  goto LABEL_87;
                }
                sub_5F0480(a2, ptr);
                if ( ptr[0] )
                {
                  ptr[1] = nullptr;
                  qfree(ptr[0]);
                }
              }
              v51 = (char *)v74;
              if ( v74 )
              {
                v52 = v75;
                if ( (_QWORD)v75 )
                {
                  v53 = 0;
                  do
                  {
                    v54 = 3 * v53++;
                    cleanup_argloc(&v51[8 * v54]);
                    v51 = (char *)v74;
                  }
                  while ( v52 != v53 );
                }
                *(_QWORD *)&v75 = 0;
                qfree(v51);
              }
              goto LABEL_11;
            }
LABEL_50:
            v66 = v83;
            v31 = sub_59EE50(a1, (__int64)func, a2);
            v32 = sub_5EB800(*(_QWORD *)(*a1 + 1480), a2);
            ptr[0] = nullptr;
            ptr[1] = (void *)0xFFFFFFFFLL;
            ptr[2] = nullptr;
            v33 = a2;
            v77 = -1;
            if ( a2 == -1 )
              v33 = *func;
            v77 = v33;
            if ( (unsigned __int8)func_tail_iterator_set(ptr, func, a2) )
            {
              v34 = v31 + v32;
              v35 = 0;
              v68 = v34;
LABEL_54:
              if ( (_QWORD)v73 )
                goto LABEL_56;
LABEL_55:
              if ( (sub_614FB0(*a1, 10) & 0x400) != 0 )
              {
LABEL_56:
                while ( 1 )
                {
                  v36 = v77;
                  v37 = sub_59F050(a1, (__int64)func, v77);
                  v38 = sub_59EE50(a1, (__int64)func, v36) - v68;
                  if ( v66 <= v38 && !(_QWORD)v73 )
                    break;
                  if ( !(unsigned __int8)func_item_iterator_prev(ptr, sub_3B3450, 0) )
                    break;
                  if ( v37 > 0 )
                  {
                    v35 += v37;
                    goto LABEL_54;
                  }
                  if ( !v37 )
                  {
                    sub_5EC6F0(*a1, (__int64 *)&v74, v77, (char **)&v72);
                    goto LABEL_54;
                  }
                  if ( v35 <= 0 )
                  {
                    if ( (_QWORD)v79 )
                    {
                      v40 = 0;
                      v41 = 0;
                      while ( 1 )
                      {
                        v42 = (char *)v78 + 80 * v41;
                        if ( *(_DWORD *)v42 == 1 && v38 == *((_DWORD *)v42 + 2) )
                          break;
                        v41 = ++v40;
                        if ( v40 >= (unsigned __int64)v79 )
                          goto LABEL_54;
                      }
                      if ( v42[64] )
                      {
                        v70 = v77;
                        if ( sub_375980(0x7DEu, v77, (char *)v78 + 80 * v41, v39, v78) <= 0 )
                          sub_5EB9D0(*a1, (__int64 *)&v74, v70, (__int64)v42);
                        clear_tinfo_t(v42 + 64);
                      }
                    }
                    goto LABEL_54;
                  }
                  v35 += v37;
                  if ( v35 < 0 )
                    v35 = 0;
                  if ( !(_QWORD)v73 )
                    goto LABEL_55;
                }
              }
            }
            if ( ptr[0] )
              lock_func_range(ptr[0], 0);
            goto LABEL_79;
          }
        }
        else if ( (*(_BYTE *)(a1[2] + 10) & 0x20) == 0 )
        {
          goto LABEL_50;
        }
        v29 = 0;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v59 = (char *)v78 + 80 * v55;
        if ( *(_DWORD *)v59 == 1 )
          goto LABEL_99;
        ptr[2] = (char *)v78 + 80 * v55;
        v60 = *(_DWORD *)v59;
        v61 = (int *)ptr[2];
        if ( *(_DWORD *)v59 != 2 )
          goto LABEL_95;
        v62 = *((int ***)v59 + 1);
        if ( v62[1] )
          break;
        v57 = -1;
LABEL_98:
        v77 = v57;
        tinfo_size = get_tinfo_size(0, *((_QWORD *)v59 + 8), 0);
        for_all_arglocs(ptr, v59, tinfo_size, 0);
LABEL_99:
        if ( v56 == ++v55 )
          goto LABEL_8;
      }
      v61 = *v62;
      v60 = **v62;
LABEL_95:
      v57 = -1;
      if ( (unsigned int)(v60 - 3) <= 1 )
      {
        if ( v60 == 4 && (v65 = v61, v63 = getinf_flag(3, 32), v61 = v65, v63) )
          v57 = *((unsigned __int16 *)v65 + 5);
        else
          v57 = *((unsigned __int16 *)v61 + 4);
      }
      goto LABEL_98;
    }
    tinfo_details = 0;
  }
LABEL_21:
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  cleanup_argloc(v82);
  clear_tinfo_t(&v81);
  v15 = (char *)v78;
  if ( v78 )
  {
    v16 = v79;
    if ( (_QWORD)v79 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[80 * v17];
        clear_tinfo_t(v18 + 64);
        v19 = *((void **)v18 + 5);
        if ( v19 )
        {
          *((_QWORD *)v18 + 6) = 0;
          qfree(v19);
        }
        v20 = *((void **)v18 + 2);
        if ( v20 )
        {
          *((_QWORD *)v18 + 3) = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc(v18);
        v15 = (char *)v78;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v79 = 0;
    qfree(v15);
  }
  clear_tinfo_t(&tinfo_property);
  return tinfo_details;
}

