void __fastcall sub_1EEF2B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // edx
  _DWORD *v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  void *v32; // rax
  const void *v33; // rsi
  char v34; // al
  char v35; // al
  char v36; // al
  char v37; // al
  __int64 v38; // rax
  void **v39; // rbx
  __int64 v40; // rax
  unsigned int *v41; // rdx
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rbx
  unsigned int v48; // r14d
  unsigned int v49; // r13d
  unsigned int v50; // r12d
  unsigned int v51; // r15d
  unsigned int v52; // ebp
  char v53; // bl
  char v54; // r15
  int v55; // r14d
  int v56; // r13d
  int v57; // r12d
  __int64 v58; // r9
  int v59; // ebp
  __int64 v60; // r8
  int v61; // eax
  unsigned __int64 v62; // rcx
  __int64 v63; // rdx
  _BYTE *v64; // rax
  unsigned int v65; // r8d
  __int64 *v66; // rax
  int v67; // eax
  _QWORD *v68; // rcx
  int v69; // ebx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rbx
  int v81; // eax
  __int64 v82; // rax
  unsigned __int64 v83; // rbp
  __int64 *v84; // rax
  _DWORD *v85; // rdi
  int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // rsi
  unsigned __int64 v89; // r12
  __int64 *v90; // rax
  int v91; // [rsp+0h] [rbp-258h]
  _DWORD *v92; // [rsp+0h] [rbp-258h]
  __int64 v93; // [rsp+8h] [rbp-250h]
  int v94; // [rsp+14h] [rbp-244h]
  unsigned __int64 v95; // [rsp+18h] [rbp-240h]
  int v96; // [rsp+20h] [rbp-238h]
  int v97; // [rsp+24h] [rbp-234h]
  int v98; // [rsp+2Ch] [rbp-22Ch]
  int v99; // [rsp+30h] [rbp-228h]
  int v100; // [rsp+34h] [rbp-224h]
  int v101; // [rsp+38h] [rbp-220h]
  int v102; // [rsp+3Ch] [rbp-21Ch]
  _DWORD *v103; // [rsp+40h] [rbp-218h]
  __int64 v104; // [rsp+48h] [rbp-210h]
  __int64 v105; // [rsp+50h] [rbp-208h]
  __int64 v106; // [rsp+58h] [rbp-200h]
  int v107; // [rsp+60h] [rbp-1F8h]
  int v108; // [rsp+64h] [rbp-1F4h]
  _DWORD *v110; // [rsp+78h] [rbp-1E0h]
  __int64 *v111; // [rsp+80h] [rbp-1D8h]
  __int64 *v112; // [rsp+88h] [rbp-1D0h]
  __int64 v114; // [rsp+A0h] [rbp-1B8h]
  __int64 v115; // [rsp+A8h] [rbp-1B0h]
  unsigned int v116; // [rsp+B4h] [rbp-1A4h] BYREF
  _DWORD *v117; // [rsp+B8h] [rbp-1A0h] BYREF
  _QWORD *v118; // [rsp+C0h] [rbp-198h] BYREF
  unsigned int *v119; // [rsp+C8h] [rbp-190h]
  void **p_ptr; // [rsp+D0h] [rbp-188h]
  __int64 v121; // [rsp+D8h] [rbp-180h]
  _DWORD *v122[2]; // [rsp+E0h] [rbp-178h] BYREF
  unsigned int v123; // [rsp+F0h] [rbp-168h]
  char v124; // [rsp+F8h] [rbp-160h]
  char v125; // [rsp+F9h] [rbp-15Fh]
  __int64 v126; // [rsp+100h] [rbp-158h]
  void *ptr; // [rsp+110h] [rbp-148h] BYREF
  __int64 v128; // [rsp+118h] [rbp-140h]
  _BYTE v129[312]; // [rsp+120h] [rbp-138h] BYREF

  v2 = *(unsigned int *)(a1 + 168);
  ptr = v129;
  v128 = 0x2000000000LL;
  v111 = *(__int64 **)(a1 + 160);
  v112 = &v111[v2];
  if ( v111 != v112 )
  {
    while ( 1 )
    {
      v3 = *v111;
      v116 = 0;
      v105 = v3;
      if ( !*(_DWORD *)(v3 + 3168) )
        goto LABEL_3;
      LODWORD(v128) = 0;
      v118 = (_QWORD *)(v3 + 3160);
      v119 = &v116;
      p_ptr = &ptr;
      v121 = a2;
      v4 = *(_DWORD *)(v3 + 4);
      if ( !v4 )
      {
        v9 = *(_QWORD *)(a2 + 144);
        v11 = 0;
        if ( !HIDWORD(v128) )
        {
          sub_2237220(&ptr, v129, 1, 8);
          v11 = 8LL * (unsigned int)v128;
        }
        *(_QWORD *)((char *)ptr + v11) = v9;
        LODWORD(v128) = v128 + 1;
        v5 = *(__int64 **)(v3 + 3160);
        v86 = 2 * *((_DWORD *)v5 + 4);
        v87 = (unsigned int)(v86 + 4);
        v88 = (unsigned int)(v86 + 3);
        v10 = v86 + 5;
        LODWORD(v11) = v87;
        v8 = v88;
        v7 = v87;
        goto LABEL_10;
      }
      v5 = *(__int64 **)(v3 + 3160);
      v6 = v5[1];
      if ( v4 <= 1 || v4 == 5 )
        break;
      v116 = 2;
      if ( !(_DWORD)v6 )
      {
        v9 = sub_1EA8980((__int64)&v118, *(_QWORD *)(a2 + 152), 0);
LABEL_73:
        v5 = *(__int64 **)(v105 + 3160);
        v8 = v116;
        v11 = v116 + 1;
        v10 = v116 + 2;
        v7 = v11;
        goto LABEL_10;
      }
      v7 = 3;
      v8 = 2;
      v9 = *((_QWORD *)ptr + (unsigned int)(v6 - 1));
      v10 = 4;
      LODWORD(v11) = 3;
LABEL_10:
      v12 = v5[v8];
      v116 = v11;
      v108 = v12 - 1;
      if ( (_DWORD)v12 )
      {
        v106 = v9;
        do
        {
          v13 = v5[(unsigned int)v11];
          if ( v13 )
            v13 = *(_DWORD *)(v105 + 1644) + v13 - 1;
          LODWORD(v117) = v13;
          v14 = (_DWORD *)(a2 + 104);
          v116 = v11 + 2;
          v15 = v5[(unsigned int)(v11 + 1)];
          v16 = *(_QWORD *)(a2 + 112);
          v107 = v15;
          if ( !v16 )
            goto LABEL_21;
          do
          {
            while ( v13 <= *(_DWORD *)(v16 + 32) )
            {
              v14 = (_DWORD *)v16;
              v16 = *(_QWORD *)(v16 + 16);
              if ( !v16 )
                goto LABEL_19;
            }
            v16 = *(_QWORD *)(v16 + 24);
          }
          while ( v16 );
LABEL_19:
          if ( v14 == (_DWORD *)(a2 + 104) || v13 < v14[8] )
          {
LABEL_21:
            v122[0] = &v117;
            v14 = (_DWORD *)sub_1ED0EB0((_QWORD *)(a2 + 96), (__int64)v14, v122);
          }
          v17 = (unsigned int)v14[16] + (unsigned __int64)(unsigned int)v15;
          if ( v17 > (unsigned int)v14[17] )
          {
            v92 = v14;
            sub_2237220(v14 + 14, v14 + 18, v17, 16);
            v14 = v92;
          }
          v94 = 0;
          v110 = v14 + 14;
          if ( (_DWORD)v15 )
          {
            v103 = v14;
            do
            {
              while ( 1 )
              {
                v20 = v116;
                v21 = v118;
                ++v116;
                v104 = *(_QWORD *)(*(_QWORD *)(v105 + 3160) + 8 * v20);
                v22 = *v119;
                *v119 = v22 + 1;
                v23 = *(_QWORD *)(*v21 + 8 * v22);
                if ( (_DWORD)v23 )
                {
                  v93 = *((_QWORD *)*p_ptr + (unsigned int)(v23 - 1));
                }
                else
                {
                  v24 = v121;
                  v25 = operator new(0x38u);
                  *(_QWORD *)(v25 + 16) = 0;
                  v26 = v25;
                  *(_QWORD *)(v25 + 24) = 0;
                  *(_DWORD *)(v25 + 32) = 0;
                  operator delete(0, 0, 4);
                  v31 = *(unsigned int *)(v106 + 16);
                  *(_DWORD *)(v26 + 32) = v31;
                  if ( (_DWORD)v31 )
                  {
                    v32 = (void *)sub_22300B0(8 * v31, 4, v27, v28, v29, v30);
                    *(_QWORD *)(v26 + 16) = v32;
                    *(_DWORD *)(v26 + 24) = *(_DWORD *)(v106 + 8);
                    v33 = *(const void **)v106;
                    *(_DWORD *)(v26 + 28) = *(_DWORD *)(v106 + 12);
                    memcpy(v32, v33, 8LL * *(unsigned int *)(v26 + 32));
                  }
                  else
                  {
                    *(_QWORD *)(v26 + 16) = 0;
                    *(_QWORD *)(v26 + 24) = 0;
                  }
                  v34 = *(_BYTE *)(v106 + 24) & 1 | *(_BYTE *)(v26 + 40) & 0xFE;
                  *(_BYTE *)(v26 + 40) = v34;
                  v35 = *(_BYTE *)(v106 + 24) & 2 | v34 & 0xFD;
                  *(_BYTE *)(v26 + 40) = v35;
                  v36 = *(_BYTE *)(v106 + 24) & 4 | v35 & 0xFB;
                  *(_BYTE *)(v26 + 40) = v36;
                  v37 = *(_BYTE *)(v106 + 24) & 8 | v36 & 0xF7;
                  *(_BYTE *)(v26 + 40) = v37;
                  *(_BYTE *)(v26 + 40) = *(_BYTE *)(v106 + 24) & 0x10 | v37 & 0xEF;
                  *(_BYTE *)(v26 + 41) = *(_BYTE *)(v106 + 25);
                  *(_QWORD *)(v26 + 48) = *(_QWORD *)(v106 + 32);
                  std::__detail::_List_node_base::_M_hook(
                    (std::__detail::_List_node_base *)v26,
                    (std::__detail::_List_node_base *)(v24 + 72));
                  v38 = v121;
                  ++*(_QWORD *)(v24 + 88);
                  v39 = p_ptr;
                  v93 = *(_QWORD *)(v38 + 80) + 16LL;
                  v40 = *((unsigned int *)p_ptr + 2);
                  if ( v40 + 1 > (unsigned __int64)*((unsigned int *)p_ptr + 3) )
                  {
                    sub_2237220(p_ptr, p_ptr + 2, v40 + 1, 8);
                    v40 = *((unsigned int *)v39 + 2);
                  }
                  *((_QWORD *)*v39 + v40) = v93;
                  v41 = v119;
                  ++*((_DWORD *)v39 + 2);
                  v42 = v118;
                  v43 = *v41;
                  *v41 = v43 + 1;
                  v44 = *(_QWORD *)(*v42 + 8 * v43);
                  v91 = v44 - 1;
                  if ( (_DWORD)v44 )
                  {
                    while ( 1 )
                    {
                      v45 = *v42;
                      v46 = *(_QWORD *)(v45 + 8LL * *v41);
                      v47 = *(_QWORD *)(v45 + 8LL * (*v41 + 1));
                      *v41 += 2;
                      v48 = v47;
                      v49 = v47;
                      v50 = v47;
                      v51 = (unsigned int)v47 >> 7;
                      v52 = v47;
                      v53 = v47 & 7;
                      v54 = v51 & 1;
                      v55 = (v48 >> 6) & 1;
                      v56 = (v49 >> 5) & 1;
                      v57 = (v50 >> 4) & 1;
                      v58 = 16 * (v55 & 1u);
                      v59 = (v52 >> 3) & 1;
                      v60 = 32 * (v56 & 1u);
                      v61 = v60 | v58 | (8 * (v54 & 1)) & 0xCF | v53 & 7 | v96 & 0xFFFFFFC0;
                      v62 = (unsigned __int8)(v57 & 1) << 6;
                      LOBYTE(v61) = (32 * (v56 & 1)) & 0x3F | (16 * (v55 & 1)) & 0x3F | (8 * (v54 & 1)) & 0xF | v53 & 7;
                      v63 = (unsigned __int8)(v59 & 1) << 7;
                      v96 = v63 | v62 | v61;
                      if ( (v96 & 0x10) != 0 )
                      {
                        v102 = (v59 & 1) << 7;
                        v101 = (v57 & 1) << 6;
                        v100 = 32 * (v56 & 1);
                        v99 = 16 * (v55 & 1);
                        v98 = 8 * (v54 & 1);
                        v64 = (_BYTE *)sub_FCE460(v93, v46, v63, v62, v60, v58);
                        v65 = v97 & 0xFFFFFFC0 | v53 & 7 | v98 & 0xFFFFFFCF | v99 | v100;
                        LOBYTE(v65) = v53 & 7 | v98 & 0xF | v99 & 0x3F | v100 & 0x3F;
                        v97 = v102 | v65 | v101;
                        if ( ((v102 | v65 | v101) & 0x80u) != 0 && (unsigned __int8)((*v64 & 7) - 4) >= 2u )
                        {
                          LOBYTE(v59) = 0;
                          v53 = 3;
                        }
                        *v64 = (32 * v56) & 0x3F
                             | (16 * v55) & 0x3F
                             | (8 * v54) & 0xF
                             | v53 & 0xF
                             | ((_BYTE)v57 << 6)
                             | ((_BYTE)v59 << 7);
                      }
                      if ( --v91 == -1 )
                        break;
                      v42 = v118;
                      v41 = v119;
                    }
                  }
                }
                v18 = (unsigned int)v103[16];
                v95 = (unsigned int)v104 | v95 & 0xFFFFFFFF00000000LL;
                if ( v18 + 1 > (unsigned __int64)(unsigned int)v103[17] )
                  break;
                v19 = (__int64 *)(*((_QWORD *)v103 + 7) + 16 * v18);
                ++v94;
                *v19 = v93;
                v19[1] = v95;
                ++v103[16];
                if ( v107 == v94 )
                  goto LABEL_45;
              }
              sub_2237220(v110, v103 + 18, v18 + 1, 16);
              ++v94;
              v66 = (__int64 *)(*((_QWORD *)v103 + 7) + 16LL * (unsigned int)v103[16]);
              *v66 = v93;
              v66[1] = v95;
              ++v103[16];
            }
            while ( v107 != v94 );
          }
LABEL_45:
          --v108;
          LODWORD(v11) = v116;
          v5 = *(__int64 **)(v105 + 3160);
        }
        while ( v108 != -1 );
        v9 = v106;
        v10 = v116 + 1;
        v7 = v116;
      }
      v116 = v10;
      v67 = sub_1EE4770(a1, v105, v5[v7]);
      v68 = v118;
      v69 = v67;
      v70 = *v119;
      *v119 = v70 + 1;
      v71 = *(_QWORD *)(*v68 + 8 * v70);
      if ( (_DWORD)v71 )
        v72 = *((_QWORD *)*p_ptr + (unsigned int)(v71 - 1));
      else
        v72 = sub_1EA8980((__int64)&v118, v9, 0);
      v73 = *(_DWORD *)(v105 + 4);
      if ( v73 > 1 && v73 != 5 )
      {
        LODWORD(v117) = 0;
        *(_DWORD *)(a2 + 160) = v69;
        *(_QWORD *)(a2 + 152) = v72;
        v74 = *(_QWORD *)(a2 + 112);
        v75 = a2 + 104;
        if ( !v74 )
          goto LABEL_80;
        do
        {
          while ( *(int *)(v74 + 32) >= 0 )
          {
            v75 = v74;
            v74 = *(_QWORD *)(v74 + 16);
            if ( !v74 )
              goto LABEL_56;
          }
          v74 = *(_QWORD *)(v74 + 24);
        }
        while ( v74 );
LABEL_56:
        if ( v75 == a2 + 104 || *(int *)(v75 + 32) > 0 )
        {
LABEL_80:
          v122[0] = &v117;
          v75 = sub_1ED0EB0((_QWORD *)(a2 + 96), v75, v122);
          v76 = *(unsigned int *)(v75 + 64);
          if ( !(_DWORD)v76 )
          {
LABEL_81:
            v89 = v115 & 0xFFFFFFFF00000000LL;
            v115 &= 0xFFFFFFFF00000000LL;
            if ( !*(_DWORD *)(v75 + 68) )
            {
              sub_2237220(v75 + 56, v75 + 72, 1, 16);
              v76 = *(unsigned int *)(v75 + 64);
            }
            v90 = (__int64 *)(*(_QWORD *)(v75 + 56) + 16 * v76);
            *v90 = v72;
            v90[1] = v89;
            ++*(_DWORD *)(v75 + 64);
            *(_DWORD *)(v105 + 3168) = 0;
            goto LABEL_3;
          }
        }
        else
        {
          v76 = *(unsigned int *)(v75 + 64);
          if ( !(_DWORD)v76 )
            goto LABEL_81;
        }
        **(_QWORD **)(v75 + 56) = v72;
      }
      *(_DWORD *)(v105 + 3168) = 0;
LABEL_3:
      if ( v112 == ++v111 )
      {
        if ( ptr != v129 )
          free(ptr);
        return;
      }
    }
    v77 = *v5;
    v122[0] = nullptr;
    v122[1] = nullptr;
    v78 = *(_QWORD *)(a2 + 32);
    v123 = 0;
    v116 = 2;
    v126 = v78;
    v125 = (unsigned int)v77 >> 5;
    v124 = ((v77 & 0x10) != 0)
         | (2 * ((v77 & 8) != 0))
         | (4 * ((v77 & 4) != 0))
         | (8 * ((v77 & 2) != 0))
         | (16 * (v77 & 1))
         | v124 & 0xE0;
    if ( (_DWORD)v6 )
      v9 = *((_QWORD *)ptr + (unsigned int)(v6 - 1));
    else
      v9 = sub_1EA8980((__int64)&v118, (__int64)v122, 1);
    v79 = *(_QWORD *)(a2 + 112);
    if ( v79 )
    {
      v80 = a2 + 104;
      v81 = *(_DWORD *)(v105 + 168);
      do
      {
        while ( *(_DWORD *)(v79 + 32) >= v81 )
        {
          v80 = v79;
          v79 = *(_QWORD *)(v79 + 16);
          if ( !v79 )
            goto LABEL_68;
        }
        v79 = *(_QWORD *)(v79 + 24);
      }
      while ( v79 );
LABEL_68:
      if ( a2 + 104 != v80 && v81 >= *(_DWORD *)(v80 + 32) )
        goto LABEL_70;
    }
    else
    {
      v80 = a2 + 104;
    }
    v117 = (_DWORD *)(v105 + 168);
    v80 = sub_1ED0EB0((_QWORD *)(a2 + 96), v80, &v117);
LABEL_70:
    v82 = *(unsigned int *)(v80 + 64);
    v83 = v114 & 0xFFFFFFFF00000000LL;
    v114 &= 0xFFFFFFFF00000000LL;
    if ( v82 + 1 > (unsigned __int64)*(unsigned int *)(v80 + 68) )
    {
      sub_2237220(v80 + 56, v80 + 72, v82 + 1, 16);
      v82 = *(unsigned int *)(v80 + 64);
    }
    v84 = (__int64 *)(*(_QWORD *)(v80 + 56) + 16 * v82);
    *v84 = v9;
    v84[1] = v83;
    v85 = v122[0];
    ++*(_DWORD *)(v80 + 64);
    operator delete(v85, 8LL * v123, 4);
    goto LABEL_73;
  }
}
