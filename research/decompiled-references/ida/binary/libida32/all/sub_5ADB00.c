__int64 __fastcall sub_5ADB00(__m128i *a1, unsigned int *a2, char a3)
{
  unsigned int v3; // r13d
  unsigned int *v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // rax
  __int64 v12; // r12
  unsigned int v13; // edx
  char v14; // cl
  __int64 v15; // rax
  char v16; // r8
  unsigned int v17; // r14d
  __int64 v18; // rax
  int *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // r9
  __int64 v23; // rdx
  unsigned int v24; // esi
  bool v25; // di
  __int64 v26; // rax
  char v27; // al
  unsigned int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rbx
  unsigned int v31; // r9d
  unsigned int v32; // edx
  char v33; // cl
  __int64 v34; // rax
  int *v35; // rbx
  void *v36; // rax
  unsigned int v37; // ebx
  __int64 v39; // rdx
  unsigned int v40; // esi
  char v41; // di
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned int *v44; // rax
  __int64 v45; // r15
  int *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned int v50; // edx
  char v51; // cl
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // eax
  unsigned int *v55; // rax
  unsigned int v56; // eax
  unsigned int v57; // eax
  char v58; // [rsp+8h] [rbp-200h]
  int v60; // [rsp+28h] [rbp-1E0h]
  unsigned int v61; // [rsp+28h] [rbp-1E0h]
  unsigned int v62; // [rsp+2Ch] [rbp-1DCh]
  unsigned int v65; // [rsp+54h] [rbp-1B4h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-1B0h]
  char v67; // [rsp+5Dh] [rbp-1ABh]
  __int64 v68; // [rsp+60h] [rbp-1A8h] BYREF
  int v69; // [rsp+68h] [rbp-1A0h] BYREF
  int v70[2]; // [rsp+70h] [rbp-198h]
  int v71[2]; // [rsp+78h] [rbp-190h]
  int v72[2]; // [rsp+80h] [rbp-188h]
  int v73[2]; // [rsp+88h] [rbp-180h]
  int v74; // [rsp+98h] [rbp-170h] BYREF
  int v75[2]; // [rsp+A0h] [rbp-168h]
  int v76[2]; // [rsp+A8h] [rbp-160h]
  int v77[2]; // [rsp+B0h] [rbp-158h]
  int v78[2]; // [rsp+B8h] [rbp-150h]
  int v79; // [rsp+C8h] [rbp-140h] BYREF
  int v80[2]; // [rsp+D0h] [rbp-138h]
  int v81[2]; // [rsp+D8h] [rbp-130h]
  int v82[2]; // [rsp+E0h] [rbp-128h]
  int v83[2]; // [rsp+E8h] [rbp-120h]
  int v84[2]; // [rsp+F0h] [rbp-118h] BYREF
  int v85[2]; // [rsp+F8h] [rbp-110h]
  int v86[2]; // [rsp+100h] [rbp-108h]
  char v87; // [rsp+108h] [rbp-100h] BYREF
  unsigned __int64 v88; // [rsp+1C8h] [rbp-40h] BYREF

  v88 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = *a2;
  v4 = sub_4EE820((__int64)a1[97].m128i_i64, *a2);
  if ( !v4 )
    return 0;
  v5 = v4[1];
  if ( (a3 & 2) != 0 )
  {
LABEL_4:
    if ( (a3 & 4) == 0 )
      goto LABEL_8;
    v6 = a2[1];
    if ( v6 != -1 )
    {
      if ( v5 > v6 )
        v5 = a2[1];
LABEL_8:
      v7 = v3;
      v69 = 0;
      *(_QWORD *)v71 = &v69;
      *(_QWORD *)v72 = &v69;
      *(_QWORD *)v76 = &v74;
      *(_QWORD *)v77 = &v74;
      *(_QWORD *)v70 = 0;
      *(_QWORD *)v73 = 0;
      v74 = 0;
      *(_QWORD *)v75 = 0;
      *(_QWORD *)v78 = 0;
      v79 = 0;
      *(_QWORD *)v80 = 0;
      *(_QWORD *)v81 = &v79;
      *(_QWORD *)v82 = &v79;
      *(_QWORD *)v83 = 0;
      v62 = v3;
LABEL_9:
      v8 = v7;
      LOWORD(v10) = sub_3B9AA0((__int64)a1, v7, 4);
      while ( 1 )
      {
        if ( (v10 & 0x600) == 0x600 )
        {
          v60 = get_item_end(v7, v8, v9, 1536) - v7;
        }
        else
        {
          *(_QWORD *)v86 = 0;
          *(_QWORD *)v84 = -1;
          *(_QWORD *)v85 = 0xFFFFFFFFLL;
          v11 = (unsigned __int64 *)&v87;
          do
          {
            *(_WORD *)v11 = 0;
            v11 += 3;
            *((_WORD *)v11 - 11) = 0;
            *((_WORD *)v11 - 10) = 0;
            *((_DWORD *)v11 - 1) = 0;
            *((_WORD *)v11 - 9) = 0;
            *(v11 - 2) = 0;
            *((_DWORD *)v11 - 2) = 0;
          }
          while ( v11 != &v88 );
          if ( (v10 & 0x600) != 0 || (a3 & 1) == 0 || (v60 = sub_55E700(a1, v7, v84)) == 0 )
          {
            v65 = 0;
            if ( (a3 & 4) != 0 )
              goto LABEL_90;
            goto LABEL_109;
          }
          LOWORD(v10) = sub_3B9AA0((__int64)a1, v7, 4);
        }
        if ( (v10 & 0x1000) == 0 )
          goto LABEL_27;
        v12 = *(_QWORD *)v75;
        if ( !*(_QWORD *)v75 )
          break;
        while ( 1 )
        {
          v13 = *(_DWORD *)(v12 + 32);
          v14 = 0;
          v15 = *(_QWORD *)(v12 + 24);
          if ( v7 < v13 )
          {
            v15 = *(_QWORD *)(v12 + 16);
            v14 = 1;
          }
          if ( !v15 )
            break;
          v12 = v15;
        }
        if ( v14 )
        {
          if ( *(_QWORD *)v76 == v12 )
            goto LABEL_26;
LABEL_92:
          v13 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
        }
        if ( v13 < v7 )
          goto LABEL_26;
LABEL_27:
        v16 = xrefblk_t_first_from(&v65, v7, 5);
        if ( v16 )
        {
          while ( 1 )
          {
            v17 = v66;
            v58 = v16;
            if ( v66 >= v5 || v66 < v3 )
              goto LABEL_49;
            if ( (unsigned __int8)(v67 - 16) <= 1u || (unsigned __int8)sub_3FB750(a1, v66) )
            {
              if ( v7 < v17 )
                v5 = v17;
              goto LABEL_49;
            }
            v18 = *(_QWORD *)v75;
            if ( *(_QWORD *)v75 )
            {
              v19 = &v74;
              do
              {
                while ( 1 )
                {
                  v20 = *(_QWORD *)(v18 + 16);
                  v21 = *(_QWORD *)(v18 + 24);
                  if ( *(_DWORD *)(v18 + 32) < v17 )
                    break;
                  v19 = (int *)v18;
                  v18 = *(_QWORD *)(v18 + 16);
                  if ( !v20 )
                    goto LABEL_37;
                }
                v18 = *(_QWORD *)(v18 + 24);
              }
              while ( v21 );
LABEL_37:
              if ( v19 != &v74 && v17 >= v19[8] )
                goto LABEL_49;
            }
            v22 = sub_5AB9C0(v3, v62, v7, v17);
            if ( !v22 )
            {
              v39 = *(_QWORD *)v70;
              if ( *(_QWORD *)v70 )
              {
                while ( 1 )
                {
                  v40 = *(_DWORD *)(v39 + 32);
                  v41 = 0;
                  v42 = *(_QWORD *)(v39 + 24);
                  if ( v17 < v40 )
                  {
                    v42 = *(_QWORD *)(v39 + 16);
                    v41 = v58;
                  }
                  if ( !v42 )
                    break;
                  v39 = v42;
                }
                if ( v41 )
                {
                  if ( *(_QWORD *)v71 == v39 )
                    goto LABEL_101;
                  goto LABEL_107;
                }
              }
              else
              {
                if ( *(int **)v71 == &v69 )
                {
LABEL_101:
                  *(_DWORD *)(operator new(0x28u) + 32) = v17;
                  std::_Rb_tree_insert_and_rebalance();
                  ++*(_QWORD *)v73;
                  v27 = xrefblk_t_next_from(&v65);
                  goto LABEL_50;
                }
LABEL_107:
                v40 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
              }
              if ( v40 < v17 )
                goto LABEL_101;
              goto LABEL_49;
            }
            v23 = *(_QWORD *)v80;
            if ( !*(_QWORD *)v80 )
              break;
            while ( 1 )
            {
              v24 = *(_DWORD *)(v23 + 32);
              v25 = 0;
              v26 = *(_QWORD *)(v23 + 24);
              if ( v17 < v24 )
              {
                v26 = *(_QWORD *)(v23 + 16);
                v25 = v22;
              }
              if ( !v26 )
                break;
              v23 = v26;
            }
            if ( v25 )
            {
              if ( *(_QWORD *)v81 == v23 )
                goto LABEL_48;
LABEL_105:
              v24 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
            }
            if ( v24 < v17 )
              goto LABEL_48;
LABEL_49:
            v27 = xrefblk_t_next_from(&v65);
LABEL_50:
            v16 = v27;
            if ( !v27 )
              goto LABEL_51;
          }
          if ( *(int **)v81 == &v79 )
          {
LABEL_48:
            *(_DWORD *)(operator new(0x28u) + 32) = v17;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)v83;
            goto LABEL_49;
          }
          goto LABEL_105;
        }
LABEL_51:
        v7 += v60;
        if ( v7 >= v5 )
          goto LABEL_88;
        v8 = v7;
        v10 = sub_3B9AA0((__int64)a1, v7, 4);
        if ( (v10 & 0x1000) != 0 )
        {
          v8 = v7;
          if ( (unsigned __int8)sub_3FB750(a1, v7) )
          {
            v5 = v7;
LABEL_88:
            v7 = v5;
LABEL_89:
            v65 = 1;
            if ( (a3 & 4) != 0 )
            {
LABEL_90:
              sub_375980(0x38u, &v65, a2, v5);
              v37 = v65;
              sub_5AB1C0(*(_QWORD **)v80);
              sub_5AB1C0(*(_QWORD **)v75);
              sub_5AB1C0(*(_QWORD **)v70);
              return v37;
            }
LABEL_109:
            *(_QWORD *)a2 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v7)).m128i_u64[0];
            goto LABEL_90;
          }
        }
        if ( (v10 & 0x10000) == 0 )
        {
          if ( v62 >= v7 )
            v7 = v62;
          v62 = v7;
LABEL_57:
          while ( 2 )
          {
            if ( *(_QWORD *)v73 )
              goto LABEL_58;
LABEL_63:
            v29 = *(_QWORD *)v81;
            if ( *(int **)v81 == &v79 )
            {
LABEL_79:
              v7 = v62;
              goto LABEL_89;
            }
LABEL_66:
            while ( sub_5AB9C0(v3, v62, 0xFFFFFFFFLL, *(unsigned int *)(v29 + 32)) )
            {
              v29 = std::_Rb_tree_increment();
              if ( (int *)v29 == &v79 )
                goto LABEL_78;
            }
            if ( !(unsigned __int8)sub_3FB750(a1, *(_DWORD *)(v29 + 32)) )
            {
              v30 = *(_QWORD *)v70;
              v31 = *(_DWORD *)(v29 + 32);
              if ( *(_QWORD *)v70 )
              {
                while ( 1 )
                {
                  v32 = *(_DWORD *)(v30 + 32);
                  v33 = 0;
                  v34 = *(_QWORD *)(v30 + 24);
                  if ( v31 < v32 )
                  {
                    v34 = *(_QWORD *)(v30 + 16);
                    v33 = 1;
                  }
                  if ( !v34 )
                    break;
                  v30 = v34;
                }
                if ( v33 )
                {
                  if ( *(_QWORD *)v71 != v30 )
                    goto LABEL_130;
                  goto LABEL_76;
                }
LABEL_75:
                if ( v32 < v31 )
                  goto LABEL_76;
              }
              else
              {
                if ( *(int **)v71 != &v69 )
                {
LABEL_130:
                  v61 = *(_DWORD *)(v29 + 32);
                  v53 = std::_Rb_tree_decrement();
                  v31 = v61;
                  v32 = *(_DWORD *)(v53 + 32);
                  goto LABEL_75;
                }
LABEL_76:
                *(_DWORD *)(operator new(0x28u) + 32) = *(_DWORD *)(v29 + 32);
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)v73;
              }
            }
            v35 = (int *)std::_Rb_tree_increment();
            v36 = (void *)std::_Rb_tree_rebalance_for_erase();
            v29 = (__int64)v35;
            operator delete(v36, 0x28u);
            --*(_QWORD *)v83;
            if ( v35 == &v79 )
            {
LABEL_78:
              if ( !*(_QWORD *)v73 )
                goto LABEL_79;
              while ( 1 )
              {
LABEL_58:
                v7 = *(_DWORD *)(*(_QWORD *)v71 + 32LL);
                sub_5AB390(&v68, v7);
                if ( v7 >= v5 )
                  goto LABEL_57;
                if ( !(unsigned __int8)sub_3FB750(a1, v7) )
                  break;
                v28 = v62;
                v5 = v7;
                if ( v62 > v7 )
                  v28 = v7;
                v62 = v28;
                if ( !*(_QWORD *)v73 )
                  goto LABEL_63;
              }
              v45 = *(_QWORD *)v75;
              if ( !*(_QWORD *)v75 )
              {
                if ( *(int **)v76 == &v74 )
                  goto LABEL_128;
                goto LABEL_145;
              }
              v46 = &v74;
              v47 = *(_QWORD *)v75;
              do
              {
                while ( 1 )
                {
                  v48 = *(_QWORD *)(v47 + 16);
                  v49 = *(_QWORD *)(v47 + 24);
                  if ( *(_DWORD *)(v47 + 32) < v7 )
                    break;
                  v46 = (int *)v47;
                  v47 = *(_QWORD *)(v47 + 16);
                  if ( !v48 )
                    goto LABEL_119;
                }
                v47 = *(_QWORD *)(v47 + 24);
              }
              while ( v49 );
LABEL_119:
              if ( v46 == &v74 || v7 < v46[8] )
              {
                while ( 1 )
                {
                  v50 = *(_DWORD *)(v45 + 32);
                  v51 = 0;
                  v52 = *(_QWORD *)(v45 + 24);
                  if ( v7 < v50 )
                  {
                    v52 = *(_QWORD *)(v45 + 16);
                    v51 = 1;
                  }
                  if ( !v52 )
                    break;
                  v45 = v52;
                }
                if ( !v51 )
                  goto LABEL_127;
                if ( *(_QWORD *)v76 == v45 )
                {
LABEL_128:
                  *(_DWORD *)(operator new(0x28u) + 32) = v7;
                  std::_Rb_tree_insert_and_rebalance();
                  ++*(_QWORD *)v78;
                  goto LABEL_9;
                }
LABEL_145:
                v50 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_127:
                if ( v50 >= v7 )
                  goto LABEL_9;
                goto LABEL_128;
              }
              continue;
            }
            goto LABEL_66;
          }
        }
      }
      if ( *(int **)v76 == &v74 )
      {
LABEL_26:
        *(_DWORD *)(operator new(0x28u) + 32) = v7;
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)v78;
        goto LABEL_27;
      }
      goto LABEL_92;
    }
    return 0;
  }
  v43 = (__int64)&a1[101].m128i_i64[1];
  v44 = sub_4EE820((__int64)&a1[101].m128i_i64[1], v3);
  if ( !v44 )
  {
    v54 = sub_4ECA50(v43, v3);
    v55 = sub_4EE890(v43, v54);
    if ( v55 )
    {
      v56 = *v55;
      if ( v5 > v56 )
        v5 = v56;
    }
    v57 = sub_39D100((__int64)a1, v3 + 1, 30);
    if ( v5 > v57 )
      v5 = v57;
    goto LABEL_4;
  }
  if ( (a3 & 4) == 0 )
  {
    *a2 = *v44;
    a2[1] = v44[1];
  }
  v65 = 2;
  sub_375980(0x38u, &v65, a2, v5);
  return v65;
}

