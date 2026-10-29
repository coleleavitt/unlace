__int64 __fastcall sub_A8AFE0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rbp
  __int64 v42; // rbx
  __int64 *v43; // r14
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rbp
  __int64 v52; // r12
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r13
  __int64 v56; // rdx
  __int64 v57; // rbx
  unsigned int v58; // esi
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rbx
  unsigned int v65; // esi
  bool v66; // zf
  __int64 v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rdx
  int v75; // r12d
  void *v76; // rbx
  __int64 v77; // rbx
  unsigned __int64 v78; // rax
  void *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rsi
  void *v82; // rbx
  __int64 v83; // rax
  unsigned int v84; // eax
  __int64 *v85; // rbx
  __int64 *v86; // r12
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 *v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // r13
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r14
  unsigned int v97; // esi
  __int64 v98; // r10
  unsigned int v99; // edi
  __int64 v100; // r9
  __int64 v101; // r14
  int v102; // r10d
  __int64 *v103; // r14
  int v104; // ecx
  int v105; // r10d
  __int64 *v106; // r11
  int v107; // ecx
  int v108; // edi
  __int64 *v109; // rcx
  unsigned int v110; // [rsp+0h] [rbp-D8h]
  __int64 *v111; // [rsp+8h] [rbp-D0h]
  __int64 v112; // [rsp+8h] [rbp-D0h]
  __int64 v113; // [rsp+8h] [rbp-D0h]
  __int64 *v114; // [rsp+10h] [rbp-C8h]
  __int64 v115; // [rsp+18h] [rbp-C0h]
  char *v116; // [rsp+20h] [rbp-B8h]
  __int64 v117; // [rsp+28h] [rbp-B0h]
  int v118; // [rsp+30h] [rbp-A8h]
  __int64 v119; // [rsp+50h] [rbp-88h]
  __int64 v120; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v121; // [rsp+68h] [rbp-70h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __int64 v123; // [rsp+78h] [rbp-60h]
  _BYTE v124[88]; // [rsp+80h] [rbp-58h] BYREF

  v5 = a2;
  v115 = sub_EBA840(a1, a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
  {
    v67 = 0;
    v110 = a3;
  }
  else
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v6, v7, v8, v9);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 4) != 0 )
      return v117;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v10, v11, v12, v13);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 128) + 20LL) )
      return v117;
    v19 = *(_QWORD *)(a2 + 104);
    ptr = v124;
    v123 = 0x400000000LL;
    sub_6E4DB0((__int64 *)(v19 + 96), v19, v15, v16, v17, v18);
    v24 = *(_QWORD *)(v5 + 128);
    if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
      v25 = sub_B72C40(v24, v19, v20);
    else
      v25 = *(_QWORD *)(v24 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v5 + 104) + 96LL), *(_QWORD *)(v5 + 104), v20, v21, v22, v23);
    v26 = *(_QWORD *)(v5 + 104);
    v27 = v25 + 24LL * *(unsigned int *)(*(_QWORD *)(v5 + 128) + 16LL);
    sub_6E4DB0((__int64 *)(v26 + 96), v26, v28, v29, v30, v31);
    v35 = *(_QWORD *)(v5 + 128);
    if ( (*(_BYTE *)(v35 + 24) & 1) != 0 )
      v36 = sub_B72C40(v35, v26, v32);
    else
      v36 = *(_QWORD *)(v35 + 24);
    if ( v27 == v36 )
    {
      v40 = (unsigned int)v123;
    }
    else
    {
      do
      {
        v121 = **(__int64 ***)(v36 + 16);
        v37 = sub_6B4E70(&v121);
        v38 = sub_F3F530(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL));
        v39 = (unsigned int)v123;
        if ( (unsigned int)v123 >= (unsigned __int64)HIDWORD(v123) )
        {
          if ( HIDWORD(v123) < (unsigned __int64)(unsigned int)v123 + 1 )
          {
            v113 = v38;
            sub_22134E0(&ptr, v124, (unsigned int)v123 + 1LL, 8);
            v39 = (unsigned int)v123;
            v38 = v113;
          }
          *((_QWORD *)ptr + v39) = v38;
          v40 = (unsigned int)(v123 + 1);
          LODWORD(v123) = v123 + 1;
        }
        else
        {
          v40 = (unsigned int)(v123 + 1);
          *((_QWORD *)ptr + (unsigned int)v123) = v38;
          LODWORD(v123) = v40;
        }
        v36 += 24;
      }
      while ( v27 != v36 );
    }
    v41 = (__int64 *)ptr;
    v42 = 8 * v40;
    v110 = a3;
    v43 = (__int64 *)((char *)ptr + 8 * v40);
    v116 = (char *)v43;
    if ( ptr == v43 )
    {
      v67 = 0;
    }
    else
    {
      _BitScanReverse64(&v44, v42 >> 3);
      sub_A6B4E0((__m128i *)ptr, (char *)ptr + 8 * v40, 2LL * (int)(63 - (v44 ^ 0x3F)), v115, v33, v34);
      if ( (unsigned __int64)v42 > 0x80 )
      {
        v114 = v41 + 16;
        sub_A6A090(v41, v41 + 16, v115, v45, v46, v47);
        if ( v43 == v41 + 16 )
          goto LABEL_73;
        v119 = v5;
        while ( 1 )
        {
          v51 = v114;
          v52 = *v114;
          while ( 1 )
          {
            v62 = *(v51 - 1);
            v111 = v51;
            v120 = v62;
            v63 = *(_QWORD *)(v62 + 128);
            if ( v63
              || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v62 + 104) + 96LL), *(_QWORD *)(v62 + 104), 0, v48, v49, v50),
                  (v63 = *(_QWORD *)(v62 + 128)) != 0) )
            {
              v63 = *(_QWORD *)(v63 + 88);
            }
            v64 = *(_QWORD *)(v115 + 72);
            v120 = v63;
            v65 = *(_DWORD *)(v64 + 80);
            if ( v65 )
            {
              v50 = v65 - 1;
              v49 = *(_QWORD *)(v64 + 64);
              v48 = (unsigned int)v50 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
              v53 = (__int64 *)(v49 + 16 * v48);
              v54 = *v53;
              if ( v63 == *v53 )
                goto LABEL_19;
              v102 = 1;
              v103 = nullptr;
              if ( v54 != -4096 )
              {
                while ( 1 )
                {
                  if ( v54 == -8192 && !v103 )
                    v103 = v53;
                  v48 = (unsigned int)v50 & (v102 + (_DWORD)v48);
                  v53 = (__int64 *)(v49 + 16LL * (unsigned int)v48);
                  v54 = *v53;
                  if ( v63 == *v53 )
                    break;
                  if ( v54 == -4096 )
                  {
                    if ( v103 )
                      v53 = v103;
                    goto LABEL_86;
                  }
                  ++v102;
                }
LABEL_19:
                v55 = v53[1];
                goto LABEL_20;
              }
LABEL_86:
              v104 = *(_DWORD *)(v64 + 72);
              v121 = v53;
              v48 = (unsigned int)(v104 + 1);
              v49 = (unsigned int)(4 * v48);
              if ( (unsigned int)v49 < 3 * v65 )
              {
                v49 = v65 >> 3;
                if ( v65 - *(_DWORD *)(v64 + 76) - (unsigned int)v48 > (unsigned int)v49 )
                  goto LABEL_33;
                goto LABEL_32;
              }
            }
            else
            {
              v121 = nullptr;
            }
            v65 *= 2;
LABEL_32:
            sub_6E50A0(v64 + 64, v65, v63, v48, v49, v50);
            sub_A49FE0((__int64 *)(v64 + 64), &v120, &v121);
            v63 = v120;
            v48 = (unsigned int)(*(_DWORD *)(v64 + 72) + 1);
            v53 = v121;
LABEL_33:
            v66 = *v53 == -4096;
            *(_DWORD *)(v64 + 72) = v48;
            if ( !v66 )
              --*(_DWORD *)(v64 + 76);
            *v53 = v63;
            v55 = 0;
            v53[1] = 0;
LABEL_20:
            v120 = v52;
            v56 = *(_QWORD *)(v52 + 128);
            if ( v56
              || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v52 + 104) + 96LL), *(_QWORD *)(v52 + 104), 0, v48, v49, v50),
                  (v56 = *(_QWORD *)(v52 + 128)) != 0) )
            {
              v56 = *(_QWORD *)(v56 + 88);
            }
            v57 = *(_QWORD *)(v115 + 72);
            v120 = v56;
            v58 = *(_DWORD *)(v57 + 80);
            if ( !v58 )
            {
              v121 = nullptr;
LABEL_96:
              v58 *= 2;
LABEL_97:
              sub_6E50A0(v57 + 64, v58, v56, v48, v49, v50);
              sub_A49FE0((__int64 *)(v57 + 64), &v120, &v121);
              v56 = v120;
              v48 = (unsigned int)(*(_DWORD *)(v57 + 72) + 1);
              v59 = v121;
              goto LABEL_92;
            }
            v50 = v58 - 1;
            v49 = *(_QWORD *)(v57 + 64);
            v48 = (unsigned int)v50 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
            v59 = (__int64 *)(v49 + 16 * v48);
            v60 = *v59;
            if ( *v59 == v56 )
              goto LABEL_24;
            v105 = 1;
            v106 = nullptr;
            if ( v60 != -4096 )
            {
              while ( 1 )
              {
                if ( v60 == -8192 && !v106 )
                  v106 = v59;
                v48 = (unsigned int)v50 & (v105 + (_DWORD)v48);
                v59 = (__int64 *)(v49 + 16LL * (unsigned int)v48);
                v60 = *v59;
                if ( v56 == *v59 )
                  break;
                if ( v60 == -4096 )
                {
                  if ( v106 )
                    v59 = v106;
                  goto LABEL_90;
                }
                ++v105;
              }
LABEL_24:
              v61 = v59[1];
              goto LABEL_25;
            }
LABEL_90:
            v107 = *(_DWORD *)(v57 + 72);
            v121 = v59;
            v48 = (unsigned int)(v107 + 1);
            v49 = (unsigned int)(4 * v48);
            if ( (unsigned int)v49 >= 3 * v58 )
              goto LABEL_96;
            v49 = v58 >> 3;
            if ( v58 - *(_DWORD *)(v57 + 76) - (unsigned int)v48 <= (unsigned int)v49 )
              goto LABEL_97;
LABEL_92:
            v66 = *v59 == -4096;
            *(_DWORD *)(v57 + 72) = v48;
            if ( !v66 )
              --*(_DWORD *)(v57 + 76);
            *v59 = v56;
            v59[1] = 0;
            v61 = 0;
LABEL_25:
            --v51;
            if ( v55 <= v61 )
              break;
            v51[1] = *v51;
          }
          ++v114;
          *v111 = v52;
          if ( v116 == (char *)v114 )
          {
            v5 = v119;
            goto LABEL_73;
          }
        }
      }
      sub_A6A090(v41, v43, v115, v45, v46, v47);
LABEL_73:
      v85 = (__int64 *)ptr;
      v67 = 0;
      v116 = (char *)ptr + 8 * (unsigned int)v123;
      if ( ptr != v116 )
      {
        v112 = v5;
        v86 = (__int64 *)((char *)ptr + 8 * (unsigned int)v123);
        while ( 1 )
        {
          v87 = *v85;
          v88 = sub_A8AFE0(a1, *v85, v110);
          v93 = v88;
          if ( !(_BYTE)v89 )
          {
LABEL_103:
            if ( ptr != v124 )
              free(ptr);
            return v117;
          }
          if ( v88 )
            break;
LABEL_75:
          if ( v86 == ++v85 )
          {
            v5 = v112;
            v116 = (char *)ptr;
            goto LABEL_106;
          }
        }
        v120 = v87;
        v94 = *(_QWORD *)(v87 + 128);
        if ( v94
          || (sub_6E4DB0(
                (__int64 *)(*(_QWORD *)(v87 + 104) + 96LL),
                *(_QWORD *)(v87 + 104),
                (__int64)v89,
                v90,
                v91,
                v92),
              (v94 = *(_QWORD *)(v87 + 128)) != 0) )
        {
          v94 = *(_QWORD *)(v94 + 88);
        }
        v95 = v115;
        v120 = v94;
        v96 = *(_QWORD *)(v115 + 72);
        v97 = *(_DWORD *)(v96 + 80);
        if ( v97 )
        {
          v98 = *(_QWORD *)(v96 + 64);
          v99 = (v97 - 1) & (((unsigned int)v94 >> 9) ^ ((unsigned int)v94 >> 4));
          v89 = (__int64 *)(v98 + 16LL * v99);
          v100 = *v89;
          if ( *v89 == v94 )
          {
LABEL_82:
            v101 = v89[1];
LABEL_83:
            if ( sub_A74290(a1) * v101 != v67 )
              goto LABEL_103;
            v67 += v93;
            goto LABEL_75;
          }
          if ( v100 != -4096 )
          {
            v118 = 1;
            v109 = nullptr;
            while ( 1 )
            {
              if ( v100 == -8192 && !v109 )
                v109 = v89;
              v99 = (v97 - 1) & (v118 + v99);
              v89 = (__int64 *)(v98 + 16LL * v99);
              v100 = *v89;
              if ( v94 == *v89 )
                goto LABEL_82;
              if ( v100 == -4096 )
              {
                if ( v109 )
                  v89 = v109;
                break;
              }
              ++v118;
            }
          }
          v95 = *(unsigned int *)(v96 + 72);
          v92 = 3 * v97;
          v121 = v89;
          v108 = v95 + 1;
          if ( 4 * ((int)v95 + 1) < (unsigned int)v92 )
          {
            v92 = v97 - *(_DWORD *)(v96 + 76) - v108;
            if ( (unsigned int)v92 > v97 >> 3 )
            {
LABEL_114:
              v66 = *v89 == -4096;
              *(_DWORD *)(v96 + 72) = v108;
              if ( !v66 )
                --*(_DWORD *)(v96 + 76);
              *v89 = v94;
              v101 = 0;
              v89[1] = 0;
              goto LABEL_83;
            }
LABEL_119:
            sub_6E50A0(v96 + 64, v97, (__int64)v89, v95, v96 + 64, v92);
            sub_A49FE0((__int64 *)(v96 + 64), &v120, &v121);
            v94 = v120;
            v89 = v121;
            v108 = *(_DWORD *)(v96 + 72) + 1;
            goto LABEL_114;
          }
        }
        else
        {
          v121 = nullptr;
        }
        v97 *= 2;
        goto LABEL_119;
      }
    }
LABEL_106:
    if ( v116 != v124 )
      free(v116);
  }
  v71 = sub_B5ABC0(v5);
  if ( !v71 )
    return v67;
LABEL_38:
  v72 = *(_QWORD *)(v71 + 48);
  v73 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v73 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v81 = sub_F3F500(v73, v72, v68, v69, v70);
    if ( *(_BYTE *)(v81 + 73) >> 5 != 2 )
    {
      v77 = sub_A8AFE0(a1, v81, v110);
      if ( !(_BYTE)v68 )
        return v117;
      goto LABEL_41;
    }
    v72 = *(_QWORD *)(v71 + 48);
  }
  v74 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
  v75 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v75 - 43) > 1 )
  {
    if ( (_BYTE)v75 != 10 )
    {
      if ( !sub_A8ACF0(a1, v72, v110, v69, v70) )
        return v117;
      sub_A8A610((__int64)&ptr, a1, *(_QWORD *)(*(_QWORD *)(v71 + 48) & 0xFFFFFFFFFFFFFFF0LL));
      v79 = ptr;
      v77 = sub_A74290(a1) * (_QWORD)v79;
      if ( (*(_BYTE *)(v71 + 68) & 1) == 0 )
        goto LABEL_41;
      if ( !*(_QWORD *)(v71 + 40) )
        goto LABEL_44;
      goto LABEL_54;
    }
    sub_A8A610((__int64)&ptr, a1, v74);
    v82 = ptr;
    v83 = sub_A74290(a1);
    if ( (*(_BYTE *)(v71 + 68) & 1) == 0 )
    {
      v77 = v83 * (_QWORD)v82;
      if ( !sub_A8ACF0(a1, *(_QWORD *)(v71 + 48), v110, v69, v70) )
        return v117;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(v71 + 40) )
    {
      v84 = sub_B54430(v71);
      v77 = v84;
      v68 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 32LL) >> 1) & 0xFFFFFF;
      if ( (unsigned int)v68 < v84 )
        return v117;
      goto LABEL_41;
    }
LABEL_44:
    while ( 1 )
    {
      v78 = *(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v71 = v78;
      if ( !v78 )
        return v67;
      if ( (*(_BYTE *)(v78 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_38;
    }
  }
  sub_A8A610((__int64)&ptr, a1, v74);
  v76 = ptr;
  v77 = sub_A74290(a1) * (_QWORD)v76;
  if ( (*(_BYTE *)(v71 + 68) & 1) != 0 )
  {
    if ( !*(_QWORD *)(v71 + 40) )
      goto LABEL_44;
LABEL_54:
    v68 = (unsigned int)sub_B54430(v71);
    if ( v68 > v77 )
      return v117;
    v77 = v68;
  }
LABEL_41:
  if ( !v77 )
    goto LABEL_44;
  v80 = sub_EC20C0(a1, v71, v68, v69);
  if ( v67 == v80 )
  {
    v67 += v77;
    goto LABEL_44;
  }
  return v117;
}

