char *__fastcall sub_87A280(__int64 a1, __int64 a2, char *a3, double *a4, int a5)
{
  double v5; // rbx
  char v8; // r13
  char *v11; // rax
  bool v12; // zf
  bool v13; // si
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128 *v17; // rax
  __m128 *v18; // rax
  unsigned int *v20; // rdi
  _BOOL4 v21; // r13d
  char *v22; // rax
  char *v23; // rax
  unsigned int *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128 *v28; // rax
  __m128 *v29; // rax
  unsigned int *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __m128 *v34; // rax
  __m128 *v35; // rax
  __int64 v36; // r10
  unsigned __int8 v37; // r9
  char v38; // al
  unsigned int *v39; // rdi
  unsigned __int8 v40; // r15
  unsigned __int8 v41; // r12
  __int64 v42; // r9
  int v43; // esi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __m128 *v47; // rax
  __m128 *v48; // rax
  unsigned int *v49; // rdi
  _QWORD *v50; // rax
  _QWORD *v51; // r13
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // r15
  char *v56; // rax
  _QWORD *v57; // r13
  _QWORD *v58; // rax
  _QWORD *j; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  unsigned int *v62; // rdi
  int v63; // esi
  int v64; // eax
  char *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __m128 *v69; // rax
  __m128 *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // r15
  _QWORD *v73; // r8
  __int64 v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // r13
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  __m128 *v81; // rax
  __m128 *v82; // rax
  _QWORD *i; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rax
  unsigned int *v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  char v90; // al
  unsigned __int8 v91; // r9
  __int64 v92; // r10
  __int64 v93; // r12
  _QWORD *v94; // r13
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rcx
  __m128 *v98; // rax
  __m128 *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rcx
  __m128 *v104; // rax
  __m128 *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rcx
  __m128 *v109; // rax
  __m128 *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __m128 *v115; // rax
  __m128 *v116; // rax
  _QWORD *v117; // [rsp+0h] [rbp-78h]
  _QWORD *v118; // [rsp+0h] [rbp-78h]
  unsigned __int8 v119; // [rsp+0h] [rbp-78h]
  __int64 v120; // [rsp+0h] [rbp-78h]
  __int64 v121; // [rsp+0h] [rbp-78h]
  __int64 v122; // [rsp+0h] [rbp-78h]
  __int64 v123; // [rsp+8h] [rbp-70h]
  _QWORD *v124; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v125; // [rsp+20h] [rbp-58h] BYREF
  int v126; // [rsp+28h] [rbp-50h]
  unsigned __int64 v127; // [rsp+38h] [rbp-40h]

  v5 = *(double *)a1;
  v127 = __readfsqword(0x28u);
  v8 = a2;
  switch ( (char)a2 )
  {
    case 6:
    case 7:
      if ( a5 )
        sub_86E800(a1, a4);
      sub_877770(a1);
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        v11 = sub_867CC0(*(__int64 *)&v5, 1u, 127, 8, 1, 0);
        if ( v11 )
          *v11 = -9;
      }
      v12 = (_BYTE)a2 == 7;
      goto LABEL_8;
    case 8:
    case 9:
      if ( a5 )
        sub_86E800(a1, a4);
      sub_877770(a1);
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        v22 = sub_867CC0(*(__int64 *)&v5, 1u, 127, 1, 1, 0);
        if ( v22 )
          *v22 = -9;
      }
      v12 = (_BYTE)a2 == 9;
      goto LABEL_8;
    case 10:
    case 11:
      if ( a5 )
        sub_86E800(a1, a4);
      sub_877770(a1);
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        v23 = sub_867CC0(*(__int64 *)&v5, 1u, 127, 16, 1, 0);
        if ( v23 )
          *v23 = -9;
      }
      v12 = (_BYTE)a2 == 11;
LABEL_8:
      v13 = !v12;
      goto LABEL_9;
    case 12:
      v62 = *(unsigned int **)&v5;
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v62 = *(unsigned int **)a1;
      }
      sub_876A60(v62);
      v63 = *(_DWORD *)(a1 + 204);
      if ( v63 || (v64 = *(_DWORD *)(a1 + 216), v64 <= 255) )
      {
        sub_86E120((const double *)a1, v63, a4, 1);
        return a3;
      }
      v71 = sub_86E080(*(unsigned int **)&v5, 1, 1, 0, 127, BYTE1(v64));
      v12 = *(_DWORD *)(a1 + 168) == 4;
      v124 = nullptr;
      v72 = v71;
      if ( v12 )
      {
        sub_86EE90(a1, (double *)&v124);
        v77 = v124;
      }
      else
      {
        v73 = sub_86E080(*(unsigned int **)&v5, 3, 2, 0, 13, 0);
        if ( !**(_DWORD **)&v5 )
        {
          v74 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          v75 = *(_QWORD *)(v74 + 8);
          if ( (unsigned __int64)(v75 + 16) <= 0xFF0 )
          {
            v77 = (_QWORD *)(v74 + v75 + 16);
            *(_QWORD *)(v74 + 8) = v75 + 16;
            if ( v74 + v75 != -16 )
              goto LABEL_133;
          }
          else
          {
            v118 = v73;
            v76 = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                              4096,
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
            v73 = v118;
            if ( v76 )
            {
              v77 = v76 + 2;
              *v76 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
              *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v76;
              v76[1] = 16;
LABEL_133:
              v77[1] = 0;
              *v77 = v73;
              v124 = v77;
              goto LABEL_134;
            }
            **(_DWORD **)&v5 = 2;
          }
        }
        v77 = nullptr;
      }
LABEL_134:
      sub_86B8E0(*(unsigned int **)&v5, 33, 1, 0, 130, 0);
      sub_86E080(*(unsigned int **)&v5, 0, 1, 0, 127, *(unsigned __int8 *)(a1 + 216));
      if ( **(_DWORD **)&v5 )
        goto LABEL_139;
      v78 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v79 = *(_QWORD *)(v78 + 8);
      v80 = v79 + 16;
      if ( (unsigned __int64)(v79 + 16) <= 0xFF0 )
      {
        v82 = (__m128 *)(v78 + v79 + 16);
        *(_QWORD *)(v78 + 8) = v80;
        if ( v82 )
          goto LABEL_138;
      }
      else
      {
        v81 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( v81 )
        {
          v81->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v81;
          v82 = v81 + 1;
          v82[-1].m128_u64[1] = 16;
LABEL_138:
          *v82 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v82;
          goto LABEL_139;
        }
        **(_DWORD **)&v5 = 2;
      }
LABEL_139:
      for ( i = sub_868BC0(*(__int64 *)&v5); v77; v77 = (_QWORD *)v77[1] )
      {
        v84 = *v77;
        if ( *v77 && i )
        {
          *(_QWORD *)(v84 + 16) &= ~1uLL;
          *(_QWORD *)(v84 + 24) = i;
        }
      }
      v85 = sub_868BC0(*(__int64 *)&v5);
      if ( v85 && v72 )
      {
        v72[2] &= ~1uLL;
        v72[3] = v85;
      }
      return a3;
    case 13:
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v5 = *(double *)a1;
      }
      goto LABEL_99;
    case 14:
      if ( a5 )
        sub_86E800(a1, a4);
LABEL_99:
      sub_86D900(*(unsigned int **)&v5, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
      return a3;
    case 17:
      v49 = *(unsigned int **)&v5;
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v49 = *(unsigned int **)a1;
      }
      sub_876A60(v49);
      v50 = sub_86E080(*(unsigned int **)&v5, 1, 1, 0, 127, 13);
      v12 = *(_DWORD *)(a1 + 168) == 4;
      v124 = nullptr;
      v117 = v50;
      if ( v12 )
      {
        sub_86EE90(a1, (double *)&v124);
        v55 = v124;
      }
      else
      {
        v51 = sub_86E080(*(unsigned int **)&v5, 3, 2, 0, 13, 0);
        if ( !**(_DWORD **)&v5 )
        {
          v52 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          v53 = *(_QWORD *)(v52 + 8);
          if ( (unsigned __int64)(v53 + 16) <= 0xFF0 )
          {
            v55 = (_QWORD *)(v52 + v53 + 16);
            *(_QWORD *)(v52 + 8) = v53 + 16;
            if ( v52 + v53 != -16 )
              goto LABEL_77;
          }
          else
          {
            v54 = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                              4096,
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
            if ( v54 )
            {
              v55 = v54 + 2;
              *v54 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
              *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v54;
              v54[1] = 16;
LABEL_77:
              v55[1] = 0;
              *v55 = v51;
              v124 = v55;
              goto LABEL_78;
            }
            **(_DWORD **)&v5 = 2;
          }
        }
        v55 = nullptr;
      }
LABEL_78:
      sub_86B8E0(*(unsigned int **)&v5, 33, 1, 0, 130, 0);
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        v56 = sub_867CC0(*(__int64 *)&v5, 0x11u, 127, 10, 1, 0);
        if ( v56 )
          v56[1] |= 0x38u;
      }
      sub_870770(*(__int64 *)&v5, 32, 1, 0);
      sub_86D900(*(unsigned int **)&v5, 0x40u, 2, 0, 2, 0, 1u, 0);
      v57 = sub_868C70(*(__int64 *)&v5, 36);
      v58 = sub_868BC0(*(__int64 *)&v5);
      if ( v58 && v117 )
      {
        v117[2] &= ~1uLL;
        v117[3] = v58;
      }
      sub_86E120((const double *)a1, *(_DWORD *)(a1 + 220), a4, 0);
      for ( j = sub_868BC0(*(__int64 *)&v5); v55; v55 = (_QWORD *)v55[1] )
      {
        v60 = *v55;
        if ( *v55 && j )
        {
          *(_QWORD *)(v60 + 16) &= ~1uLL;
          *(_QWORD *)(v60 + 24) = j;
        }
      }
      v61 = sub_868BC0(*(__int64 *)&v5);
      if ( v57 && v61 )
      {
        v57[2] &= ~1uLL;
        v57[3] = v61;
      }
      return a3;
    case 18:
    case 19:
      v24 = *(unsigned int **)&v5;
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v24 = *(unsigned int **)a1;
      }
      sub_876A60(v24);
      sub_868C70(*(__int64 *)&v5, 37);
      if ( **(_DWORD **)&v5 )
        goto LABEL_38;
      v25 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v26 = *(_QWORD *)(v25 + 8);
      v27 = v26 + 16;
      if ( (unsigned __int64)(v26 + 16) <= 0xFF0 )
      {
        v29 = (__m128 *)(v25 + v26 + 16);
        *(_QWORD *)(v25 + 8) = v27;
        if ( v29 )
          goto LABEL_37;
      }
      else
      {
        v28 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( v28 )
        {
          v28->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v28;
          v29 = v28 + 1;
          v29[-1].m128_u64[1] = 16;
LABEL_37:
          *v29 = _mm_loadh_ps((const double *)(a1 + 432));
          *(_QWORD *)(a1 + 432) = v29;
          goto LABEL_38;
        }
        **(_DWORD **)&v5 = 2;
      }
LABEL_38:
      v13 = (_BYTE)a2 == 18;
      goto LABEL_9;
    case 20:
    case 21:
      v30 = *(unsigned int **)&v5;
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v30 = *(unsigned int **)a1;
      }
      sub_876A60(v30);
      sub_868C70(*(__int64 *)&v5, 37);
      if ( **(_DWORD **)&v5 )
        goto LABEL_46;
      v31 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v32 = *(_QWORD *)(v31 + 8);
      v33 = v32 + 16;
      if ( (unsigned __int64)(v32 + 16) <= 0xFF0 )
      {
        v35 = (__m128 *)(v31 + v32 + 16);
        *(_QWORD *)(v31 + 8) = v33;
        if ( v35 )
          goto LABEL_45;
      }
      else
      {
        v34 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( v34 )
        {
          v34->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v34;
          v35 = v34 + 1;
          v35[-1].m128_u64[1] = 16;
LABEL_45:
          *v35 = _mm_loadh_ps((const double *)(a1 + 440));
          *(_QWORD *)(a1 + 440) = v35;
          goto LABEL_46;
        }
        **(_DWORD **)&v5 = 2;
      }
LABEL_46:
      v13 = (_BYTE)a2 == 20;
LABEL_9:
      sub_868C70(*(__int64 *)&v5, v13);
      if ( **(_DWORD **)&v5 )
        return a3;
      v14 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v15 = *(_QWORD *)(v14 + 8);
      v16 = v15 + 16;
      if ( (unsigned __int64)(v15 + 16) <= 0xFF0 )
      {
        v18 = (__m128 *)(v14 + v15 + 16);
        *(_QWORD *)(v14 + 8) = v16;
        if ( v18 )
          goto LABEL_13;
      }
      else
      {
        v17 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( v17 )
        {
          v17->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v17;
          v18 = v17 + 1;
          v18[-1].m128_u64[1] = 16;
LABEL_13:
          *v18 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v18;
          return a3;
        }
        **(_DWORD **)&v5 = 2;
      }
      return a3;
    case 29:
    case 30:
      if ( a5 )
      {
        if ( *(_DWORD *)(a1 + 168) != 1 )
        {
          a2 = (__int64)a4;
          sub_86E800(a1, a4);
        }
        if ( v8 == 29
          || (v36 = (unsigned __int8)*a3, v37 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v36), v38 = *a3, (_BYTE)v36 == v37) )
        {
          sub_86D900(*(unsigned int **)&v5, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
LABEL_56:
          if ( *(_DWORD *)(a1 + 168) != 1 )
            goto LABEL_57;
          sub_86E080(*(unsigned int **)&v5, 4, 2, 0, 13, 0);
          if ( **(_DWORD **)&v5 )
            goto LABEL_57;
          v106 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          v107 = *(_QWORD *)(v106 + 8);
          v108 = v107 + 16;
          if ( (unsigned __int64)(v107 + 16) <= 0xFF0 )
          {
            v110 = (__m128 *)(v106 + v107 + 16);
            *(_QWORD *)(v106 + 8) = v108;
            if ( !v110 )
              goto LABEL_57;
          }
          else
          {
            v109 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                               4096,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
            if ( !v109 )
            {
              **(_DWORD **)&v5 = 2;
              goto LABEL_57;
            }
            v109->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
            *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v109;
            v110 = v109 + 1;
            v110[-1].m128_u64[1] = 16;
          }
          *v110 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v110;
LABEL_57:
          v125 = 0xFFFFFFFF00000001LL;
          v126 = 0;
          return sub_872BC0(a1, v8 == 30, a3, (__int64)&v125, a4);
        }
      }
      else if ( (_BYTE)a2 == 29
             || (v36 = (unsigned __int8)*a3, v37 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v36), v38 = *a3, (_BYTE)v36 == v37) )
      {
        sub_86D900(*(unsigned int **)&v5, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
        goto LABEL_57;
      }
      if ( v38 >= 0 && (v37 ^ (unsigned __int8)v38) == 32
        || ((unsigned __int8)(v37 ^ v38) & ((unsigned __int8)(v37 ^ v38) - 1)) == 0 )
      {
        sub_86D900(*(unsigned int **)&v5, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
        if ( !a5 )
          goto LABEL_57;
        goto LABEL_56;
      }
      if ( !a5 || *(_DWORD *)(a1 + 168) != 1 )
        goto LABEL_151;
      a2 = 3;
      v122 = v36;
      sub_86E080(*(unsigned int **)&v5, 3, 2, 0, 13, 0);
      v36 = v122;
      if ( **(_DWORD **)&v5 )
        goto LABEL_198;
      v111 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v112 = *(_QWORD *)(v111 + 8);
      v113 = v112 + 16;
      if ( (unsigned __int64)(v112 + 16) <= 0xFF0 )
      {
        v116 = (__m128 *)(v111 + v112 + 16);
        *(_QWORD *)(v111 + 8) = v113;
        if ( !v116 )
          goto LABEL_198;
        goto LABEL_197;
      }
      v114 = *(_QWORD *)(*(_QWORD *)&v5 + 56LL);
      a2 = *(_QWORD *)(v114 + 16);
      v115 = (__m128 *)(*(__int64 (__fastcall **)(__int64, __int64))v114)(4096, a2);
      v36 = v122;
      if ( v115 )
      {
        v115->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
        *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v115;
        v116 = v115 + 1;
        v116[-1].m128_u64[1] = 16;
LABEL_197:
        *v116 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v116;
LABEL_198:
        v37 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v36);
        goto LABEL_151;
      }
      **(_DWORD **)&v5 = 2;
      v37 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v122);
LABEL_151:
      v86 = *(unsigned int **)a1;
      v123 = v36;
      v119 = v37;
      sub_876A60(v86);
      v90 = dword_2CD6FCC;
      v91 = v119;
      v92 = v123;
      if ( !dword_2CD6FCC )
      {
        sub_866DC0(v86, a2, v87, v88, v89, v119);
        v90 = dword_2CD6FCC;
      }
      v93 = v91;
      if ( (v90 & 0x20) != 0 )
      {
        if ( !**(_DWORD **)&v5 )
        {
          *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
          v120 = v92;
          sub_868840(*(unsigned int **)&v5, 1, 0, 127, v91);
          v92 = v120;
        }
        v121 = v92;
        sub_86B2A0(*(unsigned int **)&v5, 0, 1, 127, v92, 1);
        v42 = v121;
        v43 = 1;
        goto LABEL_64;
      }
      v94 = sub_86E080(*(unsigned int **)&v5, 0, 1, 0, 127, v92);
      sub_86E080(*(unsigned int **)&v5, 1, 1, 0, 127, v93);
      if ( **(_DWORD **)&v5 )
        goto LABEL_166;
      v95 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v96 = *(_QWORD *)(v95 + 8);
      v97 = v96 + 16;
      if ( (unsigned __int64)(v96 + 16) <= 0xFF0 )
      {
        v99 = (__m128 *)(v95 + v96 + 16);
        *(_QWORD *)(v95 + 8) = v97;
        if ( v99 )
          goto LABEL_165;
      }
      else
      {
        v98 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( v98 )
        {
          v98->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v98;
          v99 = v98 + 1;
          v99[-1].m128_u64[1] = 16;
LABEL_165:
          *v99 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v99;
          goto LABEL_166;
        }
        **(_DWORD **)&v5 = 2;
      }
LABEL_166:
      v100 = sub_868BC0(*(__int64 *)&v5);
      if ( v100 && v94 )
      {
        v94[2] &= ~1uLL;
        v94[3] = v100;
      }
      return a3 + 1;
    case 31:
    case 32:
      v39 = *(unsigned int **)&v5;
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v39 = *(unsigned int **)a1;
      }
      v40 = *a3;
      if ( (_BYTE)a2 == 31 || (v41 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v40), v40 == v41) )
      {
        sub_876A60(v39);
        v42 = v40;
        goto LABEL_63;
      }
      sub_876A60(v39);
      if ( ((unsigned __int8)(v41 ^ v40) & ((unsigned __int8)(v41 ^ v40) - 1)) != 0 )
      {
        sub_86E080(*(unsigned int **)&v5, 0, 1, 0, 127, v40);
        if ( !**(_DWORD **)&v5 )
        {
          v101 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          v102 = *(_QWORD *)(v101 + 8);
          v103 = v102 + 16;
          if ( (unsigned __int64)(v102 + 16) <= 0xFF0 )
          {
            v105 = (__m128 *)(v101 + v102 + 16);
            *(_QWORD *)(v101 + 8) = v103;
            if ( !v105 )
              goto LABEL_174;
          }
          else
          {
            v104 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                               4096,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
            if ( !v104 )
            {
              **(_DWORD **)&v5 = 2;
              goto LABEL_174;
            }
            v104->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
            *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v104;
            v105 = v104 + 1;
            v105[-1].m128_u64[1] = 16;
          }
          *v105 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v105;
        }
LABEL_174:
        v42 = v41;
        goto LABEL_63;
      }
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        sub_86D220(*(unsigned int **)&v5, 0xD0B0908u, 1, 0, 1, 0, 127, (unsigned __int8)(v41 ^ v40));
      }
      v42 = (unsigned __int8)(v41 | v40);
LABEL_63:
      v43 = 0;
LABEL_64:
      sub_86E080(*(unsigned int **)&v5, v43, 1, 0, 127, v42);
      if ( **(_DWORD **)&v5 )
        return a3 + 1;
      v44 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v45 = *(_QWORD *)(v44 + 8);
      v46 = v45 + 16;
      if ( (unsigned __int64)(v45 + 16) <= 0xFF0 )
      {
        v48 = (__m128 *)(v44 + v45 + 16);
        *(_QWORD *)(v44 + 8) = v46;
        if ( !v48 )
          return a3 + 1;
      }
      else
      {
        v47 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( !v47 )
        {
          **(_DWORD **)&v5 = 2;
          return a3 + 1;
        }
        v47->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
        *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v47;
        v48 = v47 + 1;
        v48[-1].m128_u64[1] = 16;
      }
      *v48 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v48;
      return a3 + 1;
    case 110:
    case 111:
      v20 = *(unsigned int **)&v5;
      if ( a5 )
      {
        sub_86E800(a1, a4);
        v20 = *(unsigned int **)a1;
      }
      sub_876A60(v20);
      v21 = (_BYTE)a2 == 111;
      if ( (unsigned int)sub_8798A0(*(_QWORD *)a1, (unsigned __int8 *)a3, v21, a4)
        || (unsigned int)sub_8794E0(*(_QWORD *)a1, (__int64)a3, v21, a4) )
      {
        return a3 + 32;
      }
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        sub_86D220(*(unsigned int **)&v5, 0x25232120u, 4, 0, 1, 0, 127, 7);
        if ( !**(_DWORD **)&v5 )
        {
          *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
          sub_86D720(*(unsigned int **)&v5, 40, 0, 1, 0, 1, 0, 127, 3);
        }
      }
      sub_86B8E0(*(unsigned int **)&v5, 33, 1, 0, 129, (__int64)a3);
      if ( !**(_DWORD **)&v5 )
      {
        *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
        sub_86D720(*(unsigned int **)&v5, 32, 0, 4, 0, 127, 1, 4, 0);
        if ( !**(_DWORD **)&v5 )
        {
          *(_DWORD *)(*(_QWORD *)&v5 + 144LL) = 0;
          v65 = sub_867CC0(*(__int64 *)&v5, 1u, 1, 0, 4, 0);
          if ( v65 )
            *v65 = -123;
        }
      }
      sub_868C70(*(__int64 *)&v5, 0);
      if ( **(_DWORD **)&v5 )
        return a3 + 32;
      v66 = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
      v67 = *(_QWORD *)(v66 + 8);
      v68 = v67 + 16;
      if ( (unsigned __int64)(v67 + 16) <= 0xFF0 )
      {
        v70 = (__m128 *)(v66 + v67 + 16);
        *(_QWORD *)(v66 + 8) = v68;
        if ( v70 )
          goto LABEL_119;
      }
      else
      {
        v69 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)&v5 + 56LL))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 56LL) + 16LL));
        if ( v69 )
        {
          v69->m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v5 + 80LL);
          *(_QWORD *)(*(_QWORD *)&v5 + 80LL) = v69;
          v70 = v69 + 1;
          v70[-1].m128_u64[1] = 16;
LABEL_119:
          *v70 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v70;
          return a3 + 32;
        }
        **(_DWORD **)&v5 = 2;
      }
      return a3 + 32;
    default:
      return a3;
  }
}
