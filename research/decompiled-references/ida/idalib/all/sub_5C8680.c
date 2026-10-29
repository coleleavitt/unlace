__int64 __fastcall sub_5C8680(__m128i *a1, unsigned __int64 *a2, char a3, __m128 a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  char *v8; // rbx
  char *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 *v12; // rax
  int *v13; // r12
  unsigned __int64 v14; // rdx
  char v15; // cl
  int *v16; // rax
  bool v17; // r14
  __int64 v18; // rax
  char v19; // r8
  unsigned __int64 v20; // r14
  int *v21; // rax
  int *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  bool v25; // al
  bool v26; // r8
  bool v27; // r9
  int *v28; // rdx
  unsigned __int64 v29; // rsi
  bool v30; // di
  int *v31; // rax
  __int64 v32; // rax
  char v33; // al
  unsigned __int64 v34; // rax
  __int64 v35; // r15
  int *v36; // rbx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rdx
  char v39; // cl
  int *v40; // rax
  bool v41; // r14
  __int64 v42; // rax
  int *v43; // rbx
  void *v44; // rax
  unsigned int v45; // ebx
  int *v47; // rdx
  unsigned __int64 v48; // rsi
  bool v49; // di
  int *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned __int64 *v55; // rax
  int *v56; // r15
  int *v57; // rdi
  int *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  char v62; // cl
  int *v63; // rax
  bool v64; // r12
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // eax
  unsigned __int64 *v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  bool v71; // [rsp+0h] [rbp-2A8h]
  bool v72; // [rsp+0h] [rbp-2A8h]
  bool v73; // [rsp+0h] [rbp-2A8h]
  int *v74; // [rsp+0h] [rbp-2A8h]
  int *v75; // [rsp+0h] [rbp-2A8h]
  unsigned int v77; // [rsp+18h] [rbp-290h]
  unsigned __int64 v78; // [rsp+18h] [rbp-290h]
  unsigned __int64 v79; // [rsp+28h] [rbp-280h]
  int *v82; // [rsp+48h] [rbp-260h]
  int *v83; // [rsp+48h] [rbp-260h]
  bool v84; // [rsp+48h] [rbp-260h]
  bool v85; // [rsp+48h] [rbp-260h]
  unsigned int v86; // [rsp+50h] [rbp-258h] BYREF
  unsigned __int64 v87; // [rsp+58h] [rbp-250h]
  char v88; // [rsp+61h] [rbp-247h]
  __int64 v89; // [rsp+70h] [rbp-238h] BYREF
  int v90; // [rsp+78h] [rbp-230h] BYREF
  int v91[2]; // [rsp+80h] [rbp-228h]
  int v92[2]; // [rsp+88h] [rbp-220h]
  int v93[2]; // [rsp+90h] [rbp-218h]
  int v94[2]; // [rsp+98h] [rbp-210h]
  int v95; // [rsp+A8h] [rbp-200h] BYREF
  int v96[2]; // [rsp+B0h] [rbp-1F8h]
  int v97[2]; // [rsp+B8h] [rbp-1F0h]
  int v98[2]; // [rsp+C0h] [rbp-1E8h]
  int v99[2]; // [rsp+C8h] [rbp-1E0h]
  int v100; // [rsp+D8h] [rbp-1D0h] BYREF
  int v101[2]; // [rsp+E0h] [rbp-1C8h]
  int v102[2]; // [rsp+E8h] [rbp-1C0h]
  int v103[2]; // [rsp+F0h] [rbp-1B8h]
  int v104[2]; // [rsp+F8h] [rbp-1B0h]
  int v105[4]; // [rsp+100h] [rbp-1A8h] BYREF
  int v106[2]; // [rsp+110h] [rbp-198h]
  int v107[2]; // [rsp+118h] [rbp-190h]
  int v108[2]; // [rsp+120h] [rbp-188h]
  char v109; // [rsp+128h] [rbp-180h] BYREF
  unsigned __int64 v110; // [rsp+268h] [rbp-40h] BYREF

  v110 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *a2;
  v5 = sub_505D70((__int64)&a1[101].m128i_i64[1], *a2);
  if ( !v5 )
    return 0;
  v6 = v5[1];
  if ( (a3 & 2) != 0 )
  {
LABEL_4:
    if ( (a3 & 4) == 0 )
      goto LABEL_8;
    v7 = a2[1];
    if ( v7 != -1 )
    {
      if ( v6 > v7 )
        v6 = a2[1];
LABEL_8:
      v8 = (char *)v4;
      v90 = 0;
      *(_QWORD *)v92 = &v90;
      *(_QWORD *)v93 = &v90;
      *(_QWORD *)v97 = &v95;
      *(_QWORD *)v98 = &v95;
      *(_QWORD *)v91 = 0;
      *(_QWORD *)v94 = 0;
      v95 = 0;
      *(_QWORD *)v96 = 0;
      *(_QWORD *)v99 = 0;
      v100 = 0;
      *(_QWORD *)v101 = 0;
      *(_QWORD *)v102 = &v100;
      *(_QWORD *)v103 = &v100;
      *(_QWORD *)v104 = 0;
      v79 = v4;
LABEL_9:
      v9 = v8;
      LOWORD(v11) = sub_3BE900(a1, (unsigned __int64)v8, 4);
      while ( 1 )
      {
        if ( (v11 & 0x600) == 0x600 )
        {
          v77 = get_item_end(v8, v9, v10, 1536) - (_DWORD)v8;
        }
        else
        {
          v12 = (unsigned __int64 *)&v109;
          a4.m128_u64[0] = 0;
          *(_QWORD *)v106 = -1;
          *(_QWORD *)v107 = 0;
          *(_QWORD *)v108 = 0;
          *(_OWORD *)v105 = -1;
          do
          {
            *(_WORD *)v12 = 0;
            v12 += 5;
            *((_WORD *)v12 - 19) = 0;
            *((_WORD *)v12 - 18) = 0;
            *((_DWORD *)v12 - 2) = 0;
            *((_WORD *)v12 - 17) = 0;
            *((_OWORD *)v12 - 2) = 0;
            *(v12 - 2) = 0;
          }
          while ( v12 != &v110 );
          if ( (v11 & 0x600) != 0 || (a3 & 1) == 0 || (v77 = sub_577F80(a1, v8, (__int128 *)v105)) == 0 )
          {
            v86 = 0;
            if ( (a3 & 4) != 0 )
              goto LABEL_96;
            goto LABEL_117;
          }
          LOWORD(v11) = sub_3BE900(a1, (unsigned __int64)v8, 4);
        }
        if ( (v11 & 0x1000) == 0 )
          goto LABEL_29;
        v13 = *(int **)v96;
        if ( !*(_QWORD *)v96 )
          break;
        while ( 1 )
        {
          v14 = *((_QWORD *)v13 + 4);
          v15 = 0;
          v16 = *((int **)v13 + 3);
          if ( (unsigned __int64)v8 < v14 )
          {
            v16 = *((int **)v13 + 2);
            v15 = 1;
          }
          if ( !v16 )
            break;
          v13 = v16;
        }
        if ( v15 )
        {
          if ( *(int **)v97 == v13 )
          {
LABEL_26:
            v17 = 1;
            if ( v13 != &v95 )
              v17 = (unsigned __int64)v8 < *((_QWORD *)v13 + 4);
            goto LABEL_28;
          }
          goto LABEL_98;
        }
LABEL_25:
        if ( v14 < (unsigned __int64)v8 )
          goto LABEL_26;
LABEL_29:
        v19 = xrefblk_t_first_from(&v86, v8, 5);
        if ( v19 )
        {
          while ( 1 )
          {
            v20 = v87;
            v71 = v19;
            if ( v87 >= v6 || v87 < v4 )
              goto LABEL_53;
            if ( (unsigned __int8)(v88 - 16) <= 1u || (unsigned __int8)sub_40E8C0(a1, v87) )
            {
              if ( (unsigned __int64)v8 < v20 )
                v6 = v20;
              goto LABEL_53;
            }
            v21 = *(int **)v96;
            if ( *(_QWORD *)v96 )
            {
              v22 = &v95;
              do
              {
                while ( 1 )
                {
                  v23 = *((_QWORD *)v21 + 2);
                  v24 = *((_QWORD *)v21 + 3);
                  if ( *((_QWORD *)v21 + 4) < v20 )
                    break;
                  v22 = v21;
                  v21 = *((int **)v21 + 2);
                  if ( !v23 )
                    goto LABEL_39;
                }
                v21 = *((int **)v21 + 3);
              }
              while ( v24 );
LABEL_39:
              if ( v22 != &v95 && v20 >= *((_QWORD *)v22 + 4) )
                goto LABEL_53;
            }
            v25 = sub_5C6440(v4, v79, (__int64)v8, v20);
            v26 = v71;
            v27 = v25;
            if ( !v25 )
            {
              v47 = *(int **)v91;
              if ( !*(_QWORD *)v91 )
              {
                v47 = &v90;
                if ( *(int **)v92 == &v90 )
                {
                  v47 = &v90;
LABEL_109:
                  v83 = v47;
                  v73 = v26;
                  v51 = operator new(0x28u);
                  *(_QWORD *)(v51 + 32) = v20;
                  std::_Rb_tree_insert_and_rebalance(v73, v51, v83, &v90);
                  ++*(_QWORD *)v94;
                  v33 = xrefblk_t_next_from(&v86);
                  goto LABEL_54;
                }
                goto LABEL_115;
              }
              while ( 1 )
              {
                v48 = *((_QWORD *)v47 + 4);
                v49 = 0;
                v50 = *((int **)v47 + 3);
                if ( v20 < v48 )
                {
                  v50 = *((int **)v47 + 2);
                  v49 = v71;
                }
                if ( !v50 )
                  break;
                v47 = v50;
              }
              if ( v49 )
              {
                if ( *(int **)v92 == v47 )
                {
LABEL_107:
                  if ( v47 != &v90 )
                    v26 = v20 < *((_QWORD *)v47 + 4);
                  goto LABEL_109;
                }
LABEL_115:
                v85 = v71;
                v75 = v47;
                v53 = std::_Rb_tree_decrement(v47);
                v26 = v85;
                v47 = v75;
                v48 = *(_QWORD *)(v53 + 32);
              }
              if ( v48 < v20 )
                goto LABEL_107;
              goto LABEL_53;
            }
            v28 = *(int **)v101;
            if ( !*(_QWORD *)v101 )
              break;
            while ( 1 )
            {
              v29 = *((_QWORD *)v28 + 4);
              v30 = 0;
              v31 = *((int **)v28 + 3);
              if ( v20 < v29 )
              {
                v31 = *((int **)v28 + 2);
                v30 = v27;
              }
              if ( !v31 )
                break;
              v28 = v31;
            }
            if ( v30 )
            {
              if ( *(int **)v102 == v28 )
              {
LABEL_50:
                if ( v28 != &v100 )
                  v27 = v20 < *((_QWORD *)v28 + 4);
LABEL_52:
                v82 = v28;
                v72 = v27;
                v32 = operator new(0x28u);
                *(_QWORD *)(v32 + 32) = v20;
                std::_Rb_tree_insert_and_rebalance(v72, v32, v82, &v100);
                ++*(_QWORD *)v104;
                goto LABEL_53;
              }
              goto LABEL_113;
            }
LABEL_49:
            if ( v29 < v20 )
              goto LABEL_50;
LABEL_53:
            v33 = xrefblk_t_next_from(&v86);
LABEL_54:
            v19 = v33;
            if ( !v33 )
              goto LABEL_55;
          }
          v28 = *(int **)v102;
          if ( *(int **)v102 == &v100 )
            goto LABEL_52;
          v28 = &v100;
LABEL_113:
          v84 = v27;
          v74 = v28;
          v52 = std::_Rb_tree_decrement(v28);
          v27 = v84;
          v28 = v74;
          v29 = *(_QWORD *)(v52 + 32);
          goto LABEL_49;
        }
LABEL_55:
        v8 += v77;
        if ( (unsigned __int64)v8 >= v6 )
          goto LABEL_94;
        v9 = v8;
        v11 = sub_3BE900(a1, (unsigned __int64)v8, 4);
        if ( (v11 & 0x1000) != 0 )
        {
          v9 = v8;
          if ( (unsigned __int8)sub_40E8C0(a1, (unsigned __int64)v8) )
          {
            v6 = (unsigned __int64)v8;
LABEL_94:
            v8 = (char *)v6;
LABEL_95:
            v86 = 1;
            if ( (a3 & 4) != 0 )
            {
LABEL_96:
              sub_3792E0(0x38u, &v86, a2, v6, *(double *)a4.m128_u64);
              v45 = v86;
              sub_5C5C20(*(_QWORD **)v101);
              sub_5C5C20(*(_QWORD **)v96);
              sub_5C5C20(*(_QWORD **)v91);
              return v45;
            }
LABEL_117:
            a4 = (__m128)_mm_unpacklo_epi64((__m128i)v4, (__m128i)(unsigned __int64)v8);
            *(__m128 *)a2 = a4;
            goto LABEL_96;
          }
        }
        if ( (v11 & 0x10000) == 0 )
        {
          if ( v79 >= (unsigned __int64)v8 )
            v8 = (char *)v79;
          v79 = (unsigned __int64)v8;
LABEL_61:
          while ( 2 )
          {
            if ( *(_QWORD *)v94 )
              goto LABEL_62;
LABEL_67:
            v35 = *(_QWORD *)v102;
            if ( *(int **)v102 == &v100 )
            {
LABEL_85:
              v8 = (char *)v79;
              goto LABEL_95;
            }
LABEL_70:
            while ( sub_5C6440(v4, v79, -1, *(_QWORD *)(v35 + 32)) )
            {
              v35 = std::_Rb_tree_increment(v35);
              if ( (int *)v35 == &v100 )
                goto LABEL_84;
            }
            if ( (unsigned __int8)sub_40E8C0(a1, *(_QWORD *)(v35 + 32)) )
              goto LABEL_83;
            v36 = *(int **)v91;
            v37 = *(_QWORD *)(v35 + 32);
            if ( *(_QWORD *)v91 )
            {
              while ( 1 )
              {
                v38 = *((_QWORD *)v36 + 4);
                v39 = 0;
                v40 = *((int **)v36 + 3);
                if ( v37 < v38 )
                {
                  v40 = *((int **)v36 + 2);
                  v39 = 1;
                }
                if ( !v40 )
                  break;
                v36 = v40;
              }
              if ( !v39 )
                goto LABEL_79;
              if ( *(int **)v92 != v36 )
                goto LABEL_140;
LABEL_80:
              v41 = 1;
              if ( v36 != &v90 )
                v41 = v37 < *((_QWORD *)v36 + 4);
            }
            else
            {
              v36 = *(int **)v92;
              if ( *(int **)v92 != &v90 )
              {
                v36 = &v90;
LABEL_140:
                v78 = *(_QWORD *)(v35 + 32);
                v66 = std::_Rb_tree_decrement(v36);
                v37 = v78;
                v38 = *(_QWORD *)(v66 + 32);
LABEL_79:
                if ( v38 < v37 )
                  goto LABEL_80;
LABEL_83:
                v43 = (int *)std::_Rb_tree_increment(v35);
                v44 = (void *)std::_Rb_tree_rebalance_for_erase(v35, &v100);
                v35 = (__int64)v43;
                operator delete(v44, 0x28u);
                --*(_QWORD *)v104;
                if ( v43 == &v100 )
                {
LABEL_84:
                  if ( !*(_QWORD *)v94 )
                    goto LABEL_85;
                  while ( 1 )
                  {
LABEL_62:
                    v8 = *(char **)(*(_QWORD *)v92 + 32LL);
                    sub_5C5E00(&v89, (unsigned __int64)v8);
                    if ( (unsigned __int64)v8 >= v6 )
                      goto LABEL_61;
                    if ( !(unsigned __int8)sub_40E8C0(a1, (unsigned __int64)v8) )
                      break;
                    v34 = v79;
                    v6 = (unsigned __int64)v8;
                    if ( v79 > (unsigned __int64)v8 )
                      v34 = (unsigned __int64)v8;
                    v79 = v34;
                    if ( !*(_QWORD *)v94 )
                      goto LABEL_67;
                  }
                  v56 = *(int **)v96;
                  if ( !*(_QWORD *)v96 )
                  {
                    v56 = *(int **)v97;
                    if ( *(int **)v97 == &v95 )
                    {
                      v64 = 1;
LABEL_138:
                      v65 = operator new(0x28u);
                      *(_QWORD *)(v65 + 32) = v8;
                      std::_Rb_tree_insert_and_rebalance(v64, v65, v56, &v95);
                      ++*(_QWORD *)v99;
                      goto LABEL_9;
                    }
                    v56 = &v95;
LABEL_156:
                    v61 = *(_QWORD *)(std::_Rb_tree_decrement(v56) + 32);
LABEL_135:
                    if ( v61 >= (unsigned __int64)v8 )
                      goto LABEL_9;
                    goto LABEL_136;
                  }
                  v57 = &v95;
                  v58 = *(int **)v96;
                  do
                  {
                    while ( 1 )
                    {
                      v59 = *((_QWORD *)v58 + 2);
                      v60 = *((_QWORD *)v58 + 3);
                      if ( *((_QWORD *)v58 + 4) < (unsigned __int64)v8 )
                        break;
                      v57 = v58;
                      v58 = *((int **)v58 + 2);
                      if ( !v59 )
                        goto LABEL_127;
                    }
                    v58 = *((int **)v58 + 3);
                  }
                  while ( v60 );
LABEL_127:
                  if ( v57 == &v95 || (unsigned __int64)v8 < *((_QWORD *)v57 + 4) )
                  {
                    while ( 1 )
                    {
                      v61 = *((_QWORD *)v56 + 4);
                      v62 = 0;
                      v63 = *((int **)v56 + 3);
                      if ( (unsigned __int64)v8 < v61 )
                      {
                        v63 = *((int **)v56 + 2);
                        v62 = 1;
                      }
                      if ( !v63 )
                        break;
                      v56 = v63;
                    }
                    if ( !v62 )
                      goto LABEL_135;
                    if ( *(int **)v97 == v56 )
                    {
LABEL_136:
                      v64 = 1;
                      if ( v56 != &v95 )
                        v64 = (unsigned __int64)v8 < *((_QWORD *)v56 + 4);
                      goto LABEL_138;
                    }
                    goto LABEL_156;
                  }
                  continue;
                }
                goto LABEL_70;
              }
              v41 = 1;
            }
            break;
          }
          v42 = operator new(0x28u);
          *(_QWORD *)(v42 + 32) = *(_QWORD *)(v35 + 32);
          std::_Rb_tree_insert_and_rebalance(v41, v42, v36, &v90);
          ++*(_QWORD *)v94;
          goto LABEL_83;
        }
      }
      v13 = *(int **)v97;
      if ( *(int **)v97 == &v95 )
      {
        v17 = 1;
LABEL_28:
        v18 = operator new(0x28u);
        *(_QWORD *)(v18 + 32) = v8;
        std::_Rb_tree_insert_and_rebalance(v17, v18, v13, &v95);
        ++*(_QWORD *)v99;
        goto LABEL_29;
      }
      v13 = &v95;
LABEL_98:
      v14 = *(_QWORD *)(std::_Rb_tree_decrement(v13) + 32);
      goto LABEL_25;
    }
    return 0;
  }
  v54 = (__int64)&a1[106].m128i_i64[1];
  v55 = sub_505D70((__int64)&a1[106].m128i_i64[1], v4);
  if ( !v55 )
  {
    v67 = sub_503F40(v54, v4);
    v68 = sub_505DE0(v54, v67);
    if ( v68 )
    {
      v69 = *v68;
      if ( v6 > v69 )
        v6 = v69;
    }
    v70 = sub_3A1F40((__int64)a1, v4 + 1, 30);
    if ( v6 > v70 )
      v6 = v70;
    goto LABEL_4;
  }
  if ( (a3 & 4) == 0 )
  {
    *a2 = *v55;
    a2[1] = v55[1];
  }
  v86 = 2;
  sub_3792E0(0x38u, &v86, a2, v6);
  return v86;
}
