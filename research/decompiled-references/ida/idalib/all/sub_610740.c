__int64 __fastcall sub_610740(__m128i *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 *func; // r13
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
  _QWORD *v26; // rbx
  char *v27; // r14
  int v28; // edx
  int v29; // r14d
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned __int64 v36; // r15
  signed __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rax
  char *v42; // rbx
  int v43; // r13d
  unsigned int v44; // r12d
  __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rdi
  _QWORD *v48; // rax
  char *v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rbx
  __int32 v55; // edx
  unsigned int tinfo_size; // eax
  char *v57; // r14
  int v58; // eax
  int *v59; // rcx
  int **v60; // rax
  char v61; // al
  int v62; // eax
  int *v63; // [rsp+8h] [rbp-160h]
  __int64 v64; // [rsp+10h] [rbp-158h]
  __int64 v65; // [rsp+20h] [rbp-148h]
  unsigned __int8 tinfo_details; // [rsp+2Fh] [rbp-139h]
  __int64 v67; // [rsp+38h] [rbp-130h]
  __int64 tinfo_property; // [rsp+48h] [rbp-120h] BYREF
  void *v69; // [rsp+50h] [rbp-118h] BYREF
  __int128 v70; // [rsp+58h] [rbp-110h]
  void *v71; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v72; // [rsp+78h] [rbp-F0h]
  __m256i ptr; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-B8h]
  void *v75; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v76; // [rsp+C8h] [rbp-A0h]
  __int64 v77; // [rsp+D8h] [rbp-90h]
  __int64 v78; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-78h]
  void *v81; // [rsp+100h] [rbp-68h]
  __int128 v82; // [rsp+108h] [rbp-60h]
  char v83; // [rsp+118h] [rbp-50h]
  unsigned __int64 v84; // [rsp+128h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  if ( (getinf(10) & 0xC00) == 0 )
    return 0;
  func = (__int64 *)get_func(a2);
  if ( !func )
    return 0;
  tinfo_property = get_tinfo_property(*a3, 10);
  v75 = nullptr;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v81 = nullptr;
  v83 = 16;
  v76 = 0;
  v80 = 0;
  v82 = 0;
  tinfo_details = get_tinfo_details(tinfo_property, 12, &v75);
  if ( tinfo_details )
  {
    if ( (_QWORD)v76 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        sub_608940((unsigned __int64 *)v75 + 10 * v7 + 8);
        v7 = ++v6;
      }
      while ( v6 < (unsigned __int64)v76 );
      v8 = a1->m128i_i64[0];
      v69 = nullptr;
      v70 = 0;
      if ( (sub_631AD0(v8, 10) & 0x800) == 0
        || (v53 = 0,
            v54 = v76,
            ptr.m256i_i64[2] = 0,
            ptr.m256i_i32[6] = -1,
            *(__m128i *)ptr.m256i_i8 = _mm_unpacklo_epi64(
                                         (__m128i)(unsigned __int64)&off_2B32540,
                                         (__m128i)(unsigned __int64)&v69),
            !(_QWORD)v76) )
      {
LABEL_8:
        if ( !(_QWORD)v70 && (sub_631AD0(a1->m128i_i64[0], 10) & 0x400) == 0 )
        {
          tinfo_details = 0;
LABEL_11:
          v9 = (char *)v69;
          if ( v69 )
          {
            v10 = v70;
            if ( (_QWORD)v70 )
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
                v9 = (char *)v69;
              }
              while ( v10 != v11 );
            }
            *(_QWORD *)&v70 = 0;
            qfree(v9);
          }
          goto LABEL_21;
        }
        v22 = v76;
        v71 = nullptr;
        v72 = 0;
        if ( (_QWORD)v76 )
        {
          ptr.m256i_i32[0] = 0;
          *(_OWORD *)&ptr.m256i_u64[1] = 0;
          v23 = (char *)qvector_reserve(&v71, 0, v76, 24);
          v24 = v72;
          v71 = v23;
          if ( (unsigned __int64)v72 < v22 )
          {
            while ( 1 )
            {
              v25 = &v23[24 * v24];
              *(_DWORD *)v25 = 0;
              copy_argloc(v25, &ptr);
              ++v24;
              *((_QWORD *)v25 + 2) = ptr.m256i_i64[2];
              if ( v22 == v24 )
                break;
              v23 = (char *)v71;
            }
          }
          *(_QWORD *)&v72 = v22;
          cleanup_argloc(&ptr);
          v26 = v71;
          v27 = (char *)v75;
          if ( 24LL * (_QWORD)v72 )
          {
            do
            {
              copy_argloc(v26, v27);
              v26[2] = -1;
              v26 += 3;
              v27 += 80;
            }
            while ( v26 != (_QWORD *)((char *)v71 + 24 * (_QWORD)v72) );
          }
          if ( (*(_BYTE *)(a1[1].m128i_i64[0] + 10) & 0x20) == 0 )
            goto LABEL_50;
          if ( (_QWORD)v76 )
          {
            v28 = 0;
            v29 = 0;
            v30 = 0;
            do
            {
              ++v28;
              v29 += *((_DWORD *)v75 + 20 * v30) != 1;
              v30 = v28;
            }
            while ( v28 < (unsigned __int64)v76 );
LABEL_45:
            *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 1648) + 104LL) = &v71;
            sub_3792E0(0x7E0u, a2, &v75, &v69);
            *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 1648) + 104LL) = 0;
            if ( v29 == (_QWORD)v76 && !(_QWORD)v70 )
            {
LABEL_79:
              v43 = v72;
              v44 = v72;
              if ( (int)v72 <= 0 )
              {
LABEL_87:
                sub_60C640(a2);
                tinfo_details = 0;
              }
              else
              {
                memset(&ptr, 0, 24);
                ptr.m256i_i64[0] = qvector_reserve(&ptr, 0, (int)v72, 8);
                memset((void *)(ptr.m256i_i64[0] + 8 * ptr.m256i_i64[1]), 0, 8 * (v43 - ptr.m256i_i64[1]));
                ptr.m256i_i64[1] = v43;
                v45 = (unsigned int)(v43 - 1);
                v46 = 0;
                do
                {
                  *(_QWORD *)(ptr.m256i_i64[0] + v46) = *(_QWORD *)((char *)v71 + 3 * v46 + 16);
                  v46 += 8;
                }
                while ( v46 != 8 * v45 + 8 );
                v47 = (void *)ptr.m256i_i64[0];
                v48 = (_QWORD *)ptr.m256i_i64[0];
                while ( *v48 == -1 )
                {
                  if ( (_QWORD *)(ptr.m256i_i64[0] + 8 * v45 + 8) == ++v48 )
                    goto LABEL_85;
                }
                v62 = sub_3792E0(0x7E1u, a2, v44, &tinfo_property, ptr.m256i_i64[0]);
                v47 = (void *)ptr.m256i_i64[0];
                if ( v62 < 0 )
                {
LABEL_85:
                  if ( v47 )
                  {
                    ptr.m256i_i64[1] = 0;
                    qfree(v47);
                  }
                  goto LABEL_87;
                }
                sub_60C450(a2, &ptr);
                if ( ptr.m256i_i64[0] )
                {
                  ptr.m256i_i64[1] = 0;
                  qfree((void *)ptr.m256i_i64[0]);
                }
              }
              v49 = (char *)v71;
              if ( v71 )
              {
                v50 = v72;
                if ( (_QWORD)v72 )
                {
                  v51 = 0;
                  do
                  {
                    v52 = 3 * v51++;
                    cleanup_argloc(&v49[8 * v52]);
                    v49 = (char *)v71;
                  }
                  while ( v50 != v51 );
                }
                *(_QWORD *)&v72 = 0;
                qfree(v49);
              }
              goto LABEL_11;
            }
LABEL_50:
            v64 = *((_QWORD *)&v80 + 1);
            v31 = sub_5B9190(a1, (__int64)func, a2);
            v32 = (int)sub_6076C0(*(_QWORD *)(a1->m128i_i64[0] + 1672), a2);
            ptr.m256i_i64[1] = 0xFFFFFFFFLL;
            ptr.m256i_i64[0] = 0;
            v33 = a2;
            v74 = -1;
            *(_OWORD *)&ptr.m256i_u64[2] = 0;
            if ( a2 == -1 )
              v33 = *func;
            v74 = v33;
            if ( (unsigned __int8)func_tail_iterator_set(&ptr, func, a2) )
            {
              v34 = v32 + v31;
              v35 = 0;
              v65 = v34;
LABEL_54:
              if ( (_QWORD)v70 )
                goto LABEL_56;
LABEL_55:
              if ( (sub_631AD0(a1->m128i_i64[0], 10) & 0x400) != 0 )
              {
LABEL_56:
                while ( 1 )
                {
                  v36 = v74;
                  v37 = sub_5B93D0(a1, (__int64)func, v74);
                  v38 = sub_5B9190(a1, (__int64)func, v36) - v65;
                  if ( v64 <= v38 && !(_QWORD)v70 )
                    break;
                  if ( !(unsigned __int8)func_item_iterator_prev(
                                           (__int64)&ptr,
                                           (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3B7CE0,
                                           nullptr) )
                    break;
                  if ( v37 > 0 )
                  {
                    v35 += v37;
                    goto LABEL_54;
                  }
                  if ( !v37 )
                  {
                    sub_6085B0(a1->m128i_i64[0], (__int64 *)&v71, v74, (char **)&v69);
                    goto LABEL_54;
                  }
                  if ( v35 <= 0 )
                  {
                    if ( (_QWORD)v76 )
                    {
                      v40 = 0;
                      v41 = 0;
                      while ( 1 )
                      {
                        v42 = (char *)v75 + 80 * v41;
                        if ( *(_DWORD *)v42 == 1 && v38 == *((_QWORD *)v42 + 1) )
                          break;
                        v41 = ++v40;
                        if ( v40 >= (unsigned __int64)v76 )
                          goto LABEL_54;
                      }
                      if ( v42[64] )
                      {
                        v67 = v74;
                        if ( sub_3792E0(0x7DEu, v74, (char *)v75 + 80 * v41, v39, v75) <= 0 )
                          sub_607890(a1->m128i_i64[0], (__int64 *)&v71, v67, (__int64)v42);
                        clear_tinfo_t(v42 + 64);
                      }
                    }
                    goto LABEL_54;
                  }
                  v35 += v37;
                  if ( v35 < 0 )
                    v35 = 0;
                  if ( !(_QWORD)v70 )
                    goto LABEL_55;
                }
              }
            }
            if ( ptr.m256i_i64[0] )
              lock_func_range(ptr.m256i_i64[0], 0);
            goto LABEL_79;
          }
        }
        else if ( (*(_BYTE *)(a1[1].m128i_i64[0] + 10) & 0x20) == 0 )
        {
          goto LABEL_50;
        }
        v29 = 0;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v57 = (char *)v75 + 80 * v53;
        if ( *(_DWORD *)v57 == 1 )
          goto LABEL_99;
        ptr.m256i_i64[2] = (__int64)v75 + 80 * v53;
        v58 = *(_DWORD *)v57;
        v59 = (int *)ptr.m256i_i64[2];
        if ( *(_DWORD *)v57 != 2 )
          goto LABEL_95;
        v60 = *((int ***)v57 + 1);
        if ( v60[1] )
          break;
        v55 = -1;
LABEL_98:
        ptr.m256i_i32[6] = v55;
        tinfo_size = get_tinfo_size(0, *((_QWORD *)v57 + 8), 0);
        for_all_arglocs(&ptr, v57, tinfo_size, 0);
LABEL_99:
        if ( v54 == ++v53 )
          goto LABEL_8;
      }
      v59 = *v60;
      v58 = **v60;
LABEL_95:
      v55 = -1;
      if ( (unsigned int)(v58 - 3) <= 1 )
      {
        if ( v58 == 4 && (v63 = v59, v61 = getinf_flag(3, 32), v59 = v63, v61) )
          v55 = *((unsigned __int16 *)v63 + 5);
        else
          v55 = *((unsigned __int16 *)v59 + 4);
      }
      goto LABEL_98;
    }
    tinfo_details = 0;
  }
LABEL_21:
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  cleanup_argloc(&v79);
  clear_tinfo_t(&v78);
  v15 = (char *)v75;
  if ( v75 )
  {
    v16 = v76;
    if ( (_QWORD)v76 )
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
        v15 = (char *)v75;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v76 = 0;
    qfree(v15);
  }
  clear_tinfo_t(&tinfo_property);
  return tinfo_details;
}
