__int64 __fastcall sub_993400(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void **a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // ecx
  int *v15; // rax
  int v16; // r9d
  char *v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r12d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  __int64 v29; // r12
  unsigned int v30; // eax
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r12
  unsigned int v37; // eax
  unsigned __int64 v38; // r12
  _QWORD *v39; // r12
  char v40; // al
  unsigned int v41; // edx
  _QWORD *v42; // rcx
  int v43; // eax
  int v44; // edx
  _QWORD *v45; // rsi
  __int64 v46; // rax
  unsigned __int8 **v48; // rax
  unsigned __int8 **v49; // rbx
  bool v50; // si
  __int64 v51; // rsi
  unsigned __int8 **v52; // rax
  unsigned __int8 **v53; // rbx
  __int64 v54; // rsi
  void *v55; // rcx
  size_t v56; // r15
  _QWORD *v57; // rax
  unsigned __int8 **v58; // rax
  unsigned __int8 **v59; // rbx
  void *v60; // rax
  unsigned __int8 **v61; // rbx
  void *v62; // rax
  _QWORD *v63; // rdi
  int v64; // r10d
  __int64 v65; // rax
  int v66; // r15d
  unsigned int v67; // r15d
  int v68; // eax
  unsigned int v69; // eax
  _QWORD *v70; // rsi
  int v71; // edi
  unsigned __int8 **v72; // rax
  unsigned int v74; // [rsp+0h] [rbp-198h]
  void *src; // [rsp+8h] [rbp-190h]
  unsigned int srca; // [rsp+8h] [rbp-190h]
  void *srcb; // [rsp+8h] [rbp-190h]
  int srcc; // [rsp+8h] [rbp-190h]
  bool v79; // [rsp+10h] [rbp-188h]
  unsigned int v80; // [rsp+1Ch] [rbp-17Ch]
  unsigned int v81; // [rsp+1Ch] [rbp-17Ch]
  unsigned __int64 v82; // [rsp+20h] [rbp-178h]
  unsigned __int64 v83; // [rsp+28h] [rbp-170h]
  __int64 v84; // [rsp+30h] [rbp-168h]
  __int64 v85; // [rsp+38h] [rbp-160h]
  __int64 v86; // [rsp+48h] [rbp-150h] BYREF
  size_t v87; // [rsp+50h] [rbp-148h]
  __int64 v88; // [rsp+58h] [rbp-140h]
  void *v89; // [rsp+60h] [rbp-138h] BYREF
  unsigned int v90; // [rsp+68h] [rbp-130h]
  void *v91; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v92; // [rsp+78h] [rbp-120h]
  void *v93; // [rsp+80h] [rbp-118h] BYREF
  size_t v94; // [rsp+88h] [rbp-110h]
  _QWORD v95[2]; // [rsp+90h] [rbp-108h] BYREF
  _QWORD v96[3]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-E0h]
  __int64 v98; // [rsp+C0h] [rbp-D8h]
  int v99; // [rsp+D0h] [rbp-C8h]
  _QWORD v100[3]; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+F8h] [rbp-A0h]
  __int64 v102; // [rsp+100h] [rbp-98h]
  int v103; // [rsp+110h] [rbp-88h]
  void *ptr; // [rsp+120h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+128h] [rbp-70h]
  __int64 v106; // [rsp+138h] [rbp-60h] BYREF
  unsigned int v107; // [rsp+140h] [rbp-58h]
  int v108; // [rsp+150h] [rbp-48h]

  v9 = sub_98F360(a3, **(_DWORD **)(*(_QWORD *)(a3 + 32) + 448LL));
  sub_A1BFE0(v96, v9);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v11 = *(unsigned int *)(a3 + 208);
  v12 = *(_QWORD *)(a3 + 192);
  src = (void *)v10;
  v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 448LL) + 4LL);
  if ( !(_DWORD)v11 )
    goto LABEL_49;
  v14 = (v11 - 1) & (37 * v13);
  v15 = (int *)(v12 + 16LL * v14);
  v16 = *v15;
  if ( (_DWORD)v13 != *v15 )
  {
    v43 = 1;
    while ( v16 != -1 )
    {
      v64 = v43 + 1;
      v65 = ((_DWORD)v11 - 1) & (v14 + v43);
      v14 = v65;
      v15 = (int *)(v12 + 16 * v65);
      v16 = *v15;
      if ( (_DWORD)v13 == *v15 )
        goto LABEL_3;
      v43 = v64;
    }
    goto LABEL_49;
  }
LABEL_3:
  if ( v15 == (int *)(v12 + 16 * v11) )
  {
LABEL_49:
    v17 = (char *)(*(_QWORD *)(a3 + 168) + v13 - *(unsigned int *)(a3 + 160));
    goto LABEL_7;
  }
  sub_A1BF70(&ptr, *((_QWORD *)v15 + 1));
  if ( v108 )
    goto LABEL_5;
  v51 = *(_QWORD *)(v106 + 32);
  if ( *(_DWORD *)(v51 + 16) != v107 && v107 )
    v51 = *(_QWORD *)(v106 + v107 + 32);
  if ( !*(_BYTE *)(v51 + 51) || (v17 = (char *)ptr + v106 + 72, ptr != (void *)v107) )
LABEL_5:
    v17 = (char *)ptr + v106 + 40;
  sub_A1C0C0(&ptr);
LABEL_7:
  sub_A1BFE0(v100, v17);
  v18 = *(__int64 *)((char *)&a5[((*((_BYTE *)a5 + 2) & 8) != 0) + 3] + *((unsigned __int8 *)a5 + 3));
  if ( (*(_BYTE *)(v18 + 1) & 6) != 0 )
  {
    v19 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 < 2)
        + 13;
  }
  else
  {
    v88 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v18 + 8));
    v19 = v88;
  }
  sub_97E960((__int64)&v91, *(_QWORD *)(a1 + 184), v19, 0);
  if ( (a4 & 0xFFFFFFFD) == 0x391 )
    sub_9908C0(a1, a2, a4);
  v20 = a4 - 914;
  v21 = v92;
  v80 = v20;
  v79 = v20 <= 1;
  if ( v92 > 0x40 )
  {
    v22 = sub_2587400(&v91);
    LOBYTE(a5) = v21 == v22;
    if ( v21 != v22 )
      goto LABEL_13;
LABEL_59:
    v46 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v46, v96);
LABEL_60:
    v21 = v92;
    goto LABEL_61;
  }
  LOBYTE(a5) = v91 == nullptr;
  if ( !v91 )
    goto LABEL_59;
LABEL_13:
  if ( v103 )
  {
    if ( v103 == 2 )
    {
      if ( !v101 )
        goto LABEL_57;
      if ( !v99 )
      {
        v23 = v97;
        if ( v97 )
        {
LABEL_17:
          if ( *(_BYTE *)(*(_QWORD *)(v23 + 32) + 52LL) )
            goto LABEL_61;
          goto LABEL_18;
        }
        goto LABEL_88;
      }
      if ( v99 == 2 )
        goto LABEL_130;
      if ( v99 != 3 )
        goto LABEL_83;
LABEL_21:
      v25 = sub_8E5480((__int64)v96);
      if ( !*(_BYTE *)(v25 + 51) )
      {
        v85 = 1;
        v82 = sub_8E8FB0((__int64)v96);
        v30 = sub_70E2F0((__int64)src, v82);
LABEL_29:
        v84 = v30;
        v31 = sub_2589AE0(&v91, v30);
        if ( v31 )
        {
          v93 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          v60 = (void *)sub_A2E0C0(a1, &v93, 2238, 0);
          ptr = v60;
          v61 = (unsigned __int8 **)v60;
          if ( v60 )
          {
            sub_8356A0((unsigned __int8 **)v60, v79, 2u);
            sub_8356A0(v61, 0, 2u);
            sub_8356A0(v61, 0, 2u);
            sub_8356A0(v61, v82, 8u);
            sub_97DF50((unsigned __int8 ***)&ptr, (__int64)&v91);
            sub_8356A0(v61, v84, 3u);
          }
          goto LABEL_60;
        }
        v32 = sub_8E5480((__int64)v100);
        if ( !*(_BYTE *)(v32 + 51) )
        {
          v31 = 1;
          v83 = sub_8E8FB0((__int64)v100);
          v37 = sub_70E2F0((__int64)src, v83);
LABEL_38:
          if ( *(_QWORD *)(*(_QWORD *)&byte_8[v82 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
          {
            ptr = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
            v58 = (unsigned __int8 **)sub_A2E0C0(a1, &ptr, 2237, 0);
            v59 = v58;
            if ( v58 )
            {
              sub_8356A0(v58, v79, 2u);
              sub_8356A0(v59, v83, 8u);
              sub_8356A0(v59, v82, 8u);
            }
            goto LABEL_60;
          }
          v38 = v37 * v31;
          srca = v92;
          if ( v92 > 0x40 )
          {
            if ( srca - (unsigned int)sub_2587400(&v91) <= 0x40
              && (unsigned __int64)(v84 * v85) >= *(_QWORD *)v91
              && v38 >= *(_QWORD *)v91 )
            {
              v39 = v91;
              if ( v80 <= 1 )
                goto LABEL_139;
LABEL_43:
              v40 = sub_A1D150(v100, v96);
              v41 = v92;
              if ( !v40 )
              {
                v42 = v91;
                goto LABEL_45;
              }
              v39 = v91;
              v81 = v92;
              v66 = sub_8E92E0((__int64)v100);
              v67 = sub_8E9110((__int64)v100) * v66;
              srcc = sub_8E92E0((__int64)v96);
              v68 = sub_8E9110((__int64)v96);
              v41 = v81;
              v42 = v39;
              v69 = srcc * v68;
              if ( v81 <= 0x40 )
              {
                v71 = (int)v39;
                if ( v69 < v67 )
                {
                  if ( v67 >= (unsigned int)v39 + v69 )
                    goto LABEL_140;
                  goto LABEL_167;
                }
                if ( v69 < v67 + (unsigned int)v39 )
                  goto LABEL_167;
                if ( v67 != v69 )
                  goto LABEL_140;
              }
              else
              {
                v70 = (_QWORD *)*v39;
                v71 = *v39;
                if ( v69 < v67 )
                {
                  if ( v67 >= (unsigned int)v70 + v69 )
                    goto LABEL_139;
                  goto LABEL_167;
                }
                if ( v69 < v67 + (unsigned int)v70 )
                  goto LABEL_167;
                if ( v67 != v69 )
                  goto LABEL_139;
              }
              if ( v67 >= v69 + v71 )
              {
LABEL_45:
                v39 = v42;
                if ( v41 <= 0x40 )
                {
LABEL_140:
                  LODWORD(a5) = sub_99DB00(a1, a2, v100, v96, 8LL * (_QWORD)v39);
                  if ( !(_BYTE)a5 )
                    goto LABEL_60;
                  goto LABEL_59;
                }
LABEL_139:
                v39 = (_QWORD *)*v39;
                goto LABEL_140;
              }
LABEL_167:
              ptr = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
              v72 = (unsigned __int8 **)sub_A2E0C0(a1, &ptr, 2236, 0);
              if ( v72 )
                sub_8356A0(v72, 0, 2u);
              goto LABEL_60;
            }
          }
          else if ( v84 * v85 >= (unsigned __int64)v91 && v38 >= (unsigned __int64)v91 )
          {
            v39 = v91;
            if ( v80 <= 1 )
              goto LABEL_140;
            goto LABEL_43;
          }
          a5 = &v89;
          sub_2588C40(&v89, &v91, v84);
          v86 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          v52 = (unsigned __int8 **)sub_A2E0C0(a1, &v86, 2238, 0);
          v53 = v52;
          if ( !v52 )
          {
LABEL_103:
            ptr = &v106;
            *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
            sub_2593F40((unsigned int)&v89, (unsigned int)&ptr, 10, 0, 0, 1, 0);
            v55 = ptr;
            v56 = n[0];
            v93 = v95;
            LOBYTE(a5) = n[0] != 0 && ptr == nullptr;
            if ( (_BYTE)a5 )
              std::__throw_logic_error("basic_string: construction from null is not valid");
            v87 = n[0];
            if ( n[0] > 0xF )
            {
              srcb = ptr;
              v62 = (void *)std::string::_M_create();
              v55 = srcb;
              v93 = v62;
              v63 = v62;
              v95[0] = v87;
            }
            else
            {
              if ( n[0] == 1 )
              {
                LOBYTE(v95[0]) = *(_BYTE *)ptr;
                goto LABEL_107;
              }
              if ( !n[0] )
              {
LABEL_107:
                v57 = v95;
LABEL_108:
                v94 = v56;
                *((_BYTE *)v57 + v56) = 0;
                if ( ptr != &v106 )
                  free(ptr);
                if ( v53 )
                  sub_838D50(v53, v93, v94);
                if ( v93 != v95 )
                  operator delete(v93, v95[0] + 1LL);
                if ( v90 > 0x40 && v89 )
                  operator delete[](v89);
                goto LABEL_60;
              }
              v63 = v95;
            }
            memcpy(v63, v55, v56);
            v56 = v87;
            v57 = v93;
            goto LABEL_108;
          }
          sub_8356A0(v52, v79, 2u);
          sub_8356A0(v53, 0, 2u);
          if ( v92 > 0x40 )
          {
            v74 = v92;
            v54 = 1;
            if ( v74 - (unsigned int)sub_2587400(&v91) > 0x40 || v38 < *(_QWORD *)v91 )
              goto LABEL_102;
          }
          else
          {
            v54 = 1;
            if ( v38 < (unsigned __int64)v91 )
            {
LABEL_102:
              sub_8356A0(v53, v54, 2u);
              sub_8356A0(v53, v82, 8u);
              goto LABEL_103;
            }
          }
          v54 = 2;
          goto LABEL_102;
        }
        v83 = sub_BEE000(v32);
        if ( v103 )
        {
          v36 = 0xFFFFFFFFLL;
        }
        else
        {
          v33 = sub_8E5480((__int64)v100);
          v34 = *(_DWORD *)(v33 + 12);
          if ( v34 == -1 )
          {
LABEL_37:
            v37 = sub_70E2F0((__int64)src, v83);
            goto LABEL_38;
          }
          if ( (_DWORD)v102 == -1 )
            v35 = *(unsigned int *)(*(_QWORD *)(v101 + 32) + 12LL);
          else
            v35 = *(unsigned int *)(v33 + 8);
          v36 = v34 / v35;
        }
        v31 = v36 - sub_8E92E0((__int64)v100);
        goto LABEL_37;
      }
      v82 = sub_BEE000(v25);
      if ( v99 )
      {
        v29 = 0xFFFFFFFFLL;
      }
      else
      {
        v26 = sub_8E5480((__int64)v96);
        v85 = 0;
        v27 = *(unsigned int *)(v26 + 12);
        if ( (_DWORD)v27 == -1 )
        {
LABEL_28:
          v30 = sub_70E2F0((__int64)src, v82);
          goto LABEL_29;
        }
        if ( (_DWORD)v98 == -1 )
          v28 = *(unsigned int *)(*(_QWORD *)(v97 + 32) + 12LL);
        else
          v28 = *(unsigned int *)(v26 + 8);
        v29 = v27 / v28;
      }
      v85 = v29 - sub_8E92E0((__int64)v96);
      goto LABEL_28;
    }
    if ( v103 == 3 )
    {
      if ( v99 )
      {
        if ( v99 == 2 )
        {
          if ( !v97 )
            goto LABEL_88;
        }
        else if ( v99 != 3 && !v98 && !v96[0] )
        {
          goto LABEL_88;
        }
        goto LABEL_21;
      }
    }
    else
    {
      if ( !v102 )
      {
        if ( !v100[0] )
          goto LABEL_57;
        v44 = v99;
        if ( !v99 )
        {
          v24 = v97;
          if ( v97 )
            goto LABEL_20;
          goto LABEL_56;
        }
        if ( v99 == 2 )
        {
          if ( !v97 )
          {
LABEL_86:
            if ( v103 != 2 )
              goto LABEL_87;
LABEL_66:
            v45 = v96;
            if ( !v101 )
              v45 = v100;
            goto LABEL_68;
          }
          goto LABEL_21;
        }
        goto LABEL_94;
      }
      v44 = v99;
      if ( v99 )
      {
        if ( v99 == 2 )
        {
          if ( !v97 )
          {
LABEL_87:
            if ( v102 )
              goto LABEL_88;
LABEL_56:
            if ( v100[0] )
            {
LABEL_88:
              v45 = v96;
              goto LABEL_68;
            }
LABEL_57:
            v45 = v100;
LABEL_68:
            sub_A1BFE0(&ptr, v45);
            v89 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
            v48 = (unsigned __int8 **)sub_A2E0C0(a1, &v89, 2235, 0);
            v49 = v48;
            if ( v48 )
            {
              sub_8356A0(v48, v79, 2u);
              sub_8356A0(v49, 0, 2u);
              if ( !v103 || v103 == 2 )
              {
                v50 = v101 != 0;
              }
              else
              {
                v50 = 1;
                if ( v103 != 3 )
                  v50 = (v102 | v100[0]) != 0;
              }
              sub_8356A0(v49, v50, 2u);
              sub_A248F0(&v93, &ptr, src);
              sub_838D50(v49, v93, v94);
            }
            else
            {
              sub_A248F0(&v93, &ptr, src);
            }
            if ( v93 != v95 )
              operator delete(v93, v95[0] + 1LL);
            sub_A1C0C0(&ptr);
            v21 = v92;
            goto LABEL_61;
          }
          goto LABEL_21;
        }
LABEL_94:
        if ( v44 != 3 && !v98 )
        {
LABEL_84:
          if ( !v96[0] )
            goto LABEL_85;
          goto LABEL_18;
        }
        goto LABEL_21;
      }
    }
    v24 = v97;
    if ( v97 )
      goto LABEL_20;
    goto LABEL_88;
  }
  if ( !v101 )
    goto LABEL_66;
  if ( !v99 )
  {
    v23 = v97;
    if ( v97 )
      goto LABEL_17;
    goto LABEL_66;
  }
  if ( v99 != 2 )
  {
    if ( v99 == 3 )
      goto LABEL_19;
LABEL_83:
    if ( v98 )
      goto LABEL_18;
    goto LABEL_84;
  }
LABEL_130:
  if ( !v97 )
  {
LABEL_85:
    if ( !v103 )
      goto LABEL_66;
    goto LABEL_86;
  }
LABEL_18:
  if ( v103 )
    goto LABEL_21;
LABEL_19:
  v24 = v101;
  if ( !v101 )
    goto LABEL_21;
LABEL_20:
  if ( !*(_BYTE *)(*(_QWORD *)(v24 + 32) + 52LL) )
    goto LABEL_21;
LABEL_61:
  if ( v21 > 0x40 && v91 )
    operator delete[](v91);
  sub_A1C0C0(v100);
  sub_A1C0C0(v96);
  return (unsigned int)a5;
}

