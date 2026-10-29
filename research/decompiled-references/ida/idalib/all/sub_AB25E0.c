unsigned __int64 __fastcall sub_AB25E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rbp
  unsigned __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64); // rdx
  char *v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // r9
  __int64 (__fastcall *v27)(__int64); // rdx
  __int64 v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rdx
  __int64 v32; // r11
  __int64 *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // r15
  __int64 (__fastcall *v36)(__int64); // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // r12
  unsigned __int64 v43; // rbp
  char v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rsi
  unsigned __int64 v59; // rsi
  char v60; // al
  _QWORD *v61; // rdx
  unsigned __int64 v62; // rcx
  _BYTE *v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rax
  __int64 *v66; // r13
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // r15d
  _QWORD *v73; // rax
  __int64 (__fastcall *v74)(__int64); // rdx
  __int64 v75; // rax
  char v76; // r8
  _QWORD *v77; // r10
  __int64 v78; // rdx
  __int64 v79; // rdi
  __int64 *v80; // rsi
  __int64 v81; // rcx
  unsigned __int64 v82; // rbx
  __int64 v83; // rsi
  _QWORD *v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  _QWORD *v87; // rdx
  unsigned int v88; // r9d
  unsigned int v89; // ecx
  int v90; // r11d
  __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  int v98; // edx
  __int64 v99; // rbp
  _QWORD *v100; // r12
  unsigned __int64 v101; // rbx
  char v102; // bp
  __int64 v103; // rsi
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  unsigned __int64 v113; // rbp
  char v114; // al
  __int64 v115; // r9
  unsigned __int8 v116; // [rsp-10h] [rbp-138h]
  unsigned __int64 v118; // [rsp+0h] [rbp-128h]
  unsigned __int64 v119; // [rsp+0h] [rbp-128h]
  __int64 v120; // [rsp+8h] [rbp-120h]
  char v122; // [rsp+1Fh] [rbp-109h]
  __int64 *v123; // [rsp+20h] [rbp-108h]
  __int64 *v124; // [rsp+20h] [rbp-108h]
  __int64 v125; // [rsp+28h] [rbp-100h]
  __int64 v126; // [rsp+28h] [rbp-100h]
  __int64 *v127; // [rsp+30h] [rbp-F8h]
  __int64 v128; // [rsp+38h] [rbp-F0h]
  __int64 v129; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v130; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v131; // [rsp+58h] [rbp-D0h] BYREF
  unsigned int v132; // [rsp+60h] [rbp-C8h]
  char v133; // [rsp+98h] [rbp-90h] BYREF
  __m128 ptr; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v135[120]; // [rsp+B0h] [rbp-78h] BYREF

  v120 = a2;
  v6 = sub_A5E7C0(a2, a2, a3, a4, a5);
  v10 = sub_A5E7C0(a3, a2, v7, v8, v9);
  v14 = sub_9C7D40(v6, a2, v11, v12, v13);
  v18 = sub_9C7D40(v10, a2, v15, v16, v17);
  if ( !v14 )
    return 0;
  v19 = (_QWORD *)v18;
  if ( !v18 )
    return 0;
  v122 = sub_F66020(v6);
  if ( !v122 )
    v122 = sub_F66020(v10);
  v130 = 1;
  v23 = (__int64 (__fastcall *)(__int64))&v133;
  v24 = (char *)&v131;
  do
  {
    *(_QWORD *)v24 = -4096;
    v24 += 16;
  }
  while ( &v133 != v24 );
  while ( 1 )
  {
    v25 = (_QWORD *)sub_9C7D40(v6, a2, (__int64)v23, v21, v22);
    v27 = *(__int64 (__fastcall **)(__int64))(*v25 + 32LL);
    v28 = v27 == sub_A55E60 ? v25[12] : v27((__int64)v25);
    v129 = v28;
    if ( (v130 & 1) != 0 )
    {
      a2 = 3;
      v29 = &v131;
    }
    else
    {
      a2 = v132;
      v29 = v131;
      if ( !v132 )
      {
        ptr.m128_u64[0] = 0;
        v40 = ((unsigned int)v130 >> 1) + 1;
        goto LABEL_29;
      }
      a2 = v132 - 1;
    }
    v30 = (unsigned int)a2 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
    v31 = &v29[2 * v30];
    v32 = *v31;
    if ( v28 == *v31 )
      goto LABEL_14;
    v72 = 1;
    v26 = 0;
    if ( v32 == -4096 )
    {
LABEL_59:
      ptr.m128_u64[0] = (unsigned __int64)v31;
      v41 = 12;
      a2 = 4;
      v40 = ((unsigned int)v130 >> 1) + 1;
      if ( (v130 & 1) != 0 )
      {
LABEL_30:
        if ( 4 * (int)v40 >= (unsigned int)v41 )
        {
          LODWORD(a2) = 2 * a2;
        }
        else
        {
          v41 = (unsigned int)(a2 - HIDWORD(v130) - v40);
          if ( (unsigned int)v41 > (unsigned int)a2 >> 3 )
          {
LABEL_32:
            v30 = v130 & 1;
            LODWORD(v130) = v30 | (2 * v40);
            v31 = (__int64 *)ptr.m128_u64[0];
            if ( *(_QWORD *)ptr.m128_u64[0] != -4096 )
              --HIDWORD(v130);
            *(_QWORD *)ptr.m128_u64[0] = v28;
            v31[1] = 0;
            goto LABEL_14;
          }
        }
        sub_AB20D0((__int64)&v130, a2, v40, v41, (__int64)v29, v26);
        a2 = (__int64)&v129;
        sub_A6F1E0((__int64)&v130, &v129, &ptr);
        v28 = v129;
        LODWORD(v40) = ((unsigned int)v130 >> 1) + 1;
        goto LABEL_32;
      }
      a2 = v132;
LABEL_29:
      v41 = (unsigned int)(3 * a2);
      goto LABEL_30;
    }
    while ( 1 )
    {
      if ( v32 == -8192 && !v26 )
        v26 = (__int64)v31;
      v30 = (unsigned int)a2 & (v72 + (_DWORD)v30);
      v31 = &v29[2 * (unsigned int)v30];
      v32 = *v31;
      if ( v28 == *v31 )
        break;
      if ( v32 == -4096 )
      {
        if ( v26 )
          v31 = (__int64 *)v26;
        goto LABEL_59;
      }
      ++v72;
    }
LABEL_14:
    v33 = v31 + 1;
    *v33 = v6;
    v34 = (_QWORD *)sub_9C7D40(v6, a2, (__int64)v33, v30, (__int64)v29);
    if ( v34 )
    {
      if ( v34 == v19
        || ((v23 = *(__int64 (__fastcall **)(__int64))(*v34 + 32LL), v23 != sub_A55E60)
          ? (v35 = v23((__int64)v34))
          : (v35 = v34[12]),
            (v36 = *(__int64 (__fastcall **)(__int64))(*v19 + 32LL), v36 != sub_A55E60)
          ? (v37 = v36((__int64)v19))
          : (v37 = v19[12]),
            v35 == v37) )
      {
        v42 = (_QWORD *)(v6 + 48);
        v43 = (*(_WORD *)(v6 + 18) >> 3) & 0x7F;
        if ( (unsigned __int8)sub_F65FA0(v6) && (unsigned __int8)sub_F65FA0(v10) )
        {
          v66 = (__int64 *)sub_F672B0(v10);
          v68 = v67;
          v123 = (__int64 *)sub_F672B0(v6);
          v125 = v69;
          a2 = sub_9C7D40(v6, a2, v69, v69, v70);
          if ( !(unsigned __int8)sub_AAB6B0(a1, a2, v123, v125, v66, v68) )
            goto LABEL_85;
        }
        else
        {
          v44 = sub_F65FA0(v6);
          if ( v44 != (unsigned __int8)sub_F65FA0(v10) )
          {
            v42 = nullptr;
            v43 = 0;
            ptr.m128_u64[0] = (unsigned __int64)v135;
            ptr.m128_u64[1] = 0x800000000LL;
            v48 = sub_9C7D40(v6, a2, v45, v46, v47);
            sub_A79D10(a1, v48, v120, a3, (__int64)&ptr, v49);
            goto LABEL_40;
          }
        }
        ptr.m128_u64[0] = (unsigned __int64)v135;
        ptr.m128_u64[1] = 0x800000000LL;
        v48 = sub_9C7D40(v6, a2, v45, v46, v47);
        sub_A79D10(a1, v48, v120, a3, (__int64)&ptr, v71);
        if ( !ptr.m128_i32[2] && (unsigned __int8)sub_F66020(v6) == v122 )
        {
          result = sub_A74EC0(a1, v6 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_46;
        }
LABEL_40:
        v53 = sub_9C7D40(v6, v48, v50, v51, v52);
        v58 = *(_QWORD *)(v53 + 104);
        if ( v58 )
          v59 = v58 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v59 = sub_A81F40(a1, v53, v54, v55, v56, v57);
        v60 = 1;
        if ( !v122 )
          v60 = sub_F66020(v6);
        v61 = v42;
        v62 = v43;
        v116 = v60;
        v63 = (_BYTE *)ptr.m128_u64[0];
        v64 = ptr.m128_u32[2];
        goto LABEL_45;
      }
    }
    v38 = *(_QWORD *)(v6 + 32);
    if ( (v38 & 8) == 0 )
    {
      sub_F69C40(v6);
      v38 = *(_QWORD *)(v6 + 32);
    }
    v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v39 )
      break;
    v6 = *(_QWORD *)v39;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v39 + 16LL) - 35 > 1 )
      v6 = sub_F63050(v6, a2, v23, v21);
  }
  while ( 1 )
  {
    v73 = (_QWORD *)sub_9C7D40(v10, a2, (__int64)v23, v21, v22);
    v74 = *(__int64 (__fastcall **)(__int64))(*v73 + 32LL);
    v75 = v74 == sub_A55E60 ? v73[12] : v74((__int64)v73);
    v76 = v130 & 1;
    if ( (v130 & 1) != 0 )
    {
      v77 = &v131;
      v78 = 8;
      LODWORD(v79) = ((unsigned __int8)((unsigned int)v75 >> 9) ^ (unsigned __int8)((unsigned int)v75 >> 4)) & 3;
      v80 = (__int64 *)&(&v131)[2
                              * (((unsigned __int8)((unsigned int)v75 >> 9)
                                ^ (unsigned __int8)((unsigned int)v75 >> 4))
                               & 3)];
      v81 = *v80;
      if ( v75 == *v80 )
        goto LABEL_66;
      v91 = 8;
      v90 = 3;
      if ( v81 != -4096 )
      {
LABEL_96:
        v98 = 1;
        while ( 1 )
        {
          v79 = v90 & (unsigned int)(v79 + v98);
          v80 = &v77[2 * v79];
          if ( v75 == *v80 )
            break;
          ++v98;
          if ( *v80 == -4096 )
          {
            if ( !v76 )
            {
              v87 = v131;
              v88 = v132;
              goto LABEL_81;
            }
            v91 = 8;
            v77 = &v131;
            goto LABEL_83;
          }
        }
        if ( !v76 )
        {
          v77 = v131;
          v89 = v132;
          goto LABEL_78;
        }
        v78 = 8;
        v77 = &v131;
        goto LABEL_66;
      }
    }
    else
    {
      v87 = v131;
      v88 = v132;
      v77 = v131;
      v89 = v132;
      if ( v132 )
      {
        v90 = v132 - 1;
        LODWORD(v79) = (v132 - 1) & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
        v80 = &v131[2 * (unsigned int)v79];
        if ( v75 == *v80 )
        {
LABEL_78:
          v78 = 2LL * v89;
LABEL_66:
          sub_A86060(&ptr, v80, &v77[v78], (__int64)&v130, 1);
          v82 = ptr.m128_u64[0];
          goto LABEL_67;
        }
        if ( *v80 != -4096 )
          goto LABEL_96;
LABEL_81:
        v77 = v87;
      }
      v91 = 2LL * v88;
    }
LABEL_83:
    sub_A86060(&ptr, &v77[v91], &v77[v91], (__int64)&v130, 1);
    v82 = ptr.m128_u64[0];
LABEL_67:
    if ( (v130 & 1) != 0 )
    {
      v83 = 8;
      v84 = &v131;
    }
    else
    {
      v84 = v131;
      v83 = 2LL * v132;
    }
    a2 = (__int64)&v84[v83];
    sub_A86060(&ptr, (_QWORD *)a2, (_QWORD *)a2, (__int64)&v130, 1);
    if ( ptr.m128_u64[0] != v82 )
      break;
    v85 = *(_QWORD *)(v10 + 32);
    if ( (v85 & 8) == 0 )
    {
      sub_F69C40(v10);
      v85 = *(_QWORD *)(v10 + 32);
    }
    v86 = v85 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v86 )
      goto LABEL_85;
    v10 = *(_QWORD *)v86;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v86 + 16LL) - 35 > 1 )
      v10 = sub_F63050(v10, a2, v23, v21);
  }
  v99 = *(_QWORD *)(v82 + 8);
  v100 = (_QWORD *)(v10 + 48);
  v101 = (*(_WORD *)(v10 + 18) >> 3) & 0x7F;
  if ( (unsigned __int8)sub_F65FA0(v99) && (unsigned __int8)sub_F65FA0(v10) )
  {
    v127 = (__int64 *)sub_F672B0(v10);
    v128 = v92;
    v124 = (__int64 *)sub_F672B0(v99);
    v126 = v93;
    a2 = sub_9C7D40(v99, a2, v93, v93, v94);
    if ( (unsigned __int8)sub_AAB6B0(a1, a2, v124, v126, v127, v128) )
      goto LABEL_109;
LABEL_85:
    result = 0;
    goto LABEL_48;
  }
  v102 = sub_F65FA0(v99);
  if ( v102 == (unsigned __int8)sub_F65FA0(v10) )
  {
LABEL_109:
    ptr.m128_u64[0] = (unsigned __int64)v135;
    ptr.m128_u64[1] = 0x800000000LL;
    v103 = sub_9C7D40(v10, a2, v95, v96, v97);
    sub_A79D10(a1, v103, v120, a3, (__int64)&ptr, v115);
    v105 = ptr.m128_u32[2];
    if ( ptr.m128_i32[2] || (unsigned __int8)sub_F66020(v10) != v122 )
      goto LABEL_104;
    result = sub_A74EC0(a1, v10 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_46;
  }
  v100 = nullptr;
  v101 = 0;
  ptr.m128_u64[0] = (unsigned __int64)v135;
  ptr.m128_u64[1] = 0x800000000LL;
  v103 = sub_9C7D40(v10, a2, v95, v96, v97);
  sub_A79D10(a1, v103, v120, a3, (__int64)&ptr, v104);
LABEL_104:
  v108 = sub_9C7D40(v10, v103, v105, v106, v107);
  v112 = *(_QWORD *)(v108 + 104);
  if ( v112 )
    v113 = v112 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v113 = sub_A81F40(a1, v108, 0, v109, v110, v111);
  v114 = 1;
  if ( !v122 )
    v114 = sub_F66020(v10);
  v61 = v100;
  v62 = v101;
  v59 = v113;
  v116 = v114;
  v63 = (_BYTE *)ptr.m128_u64[0];
  v64 = ptr.m128_u32[2];
LABEL_45:
  v65 = sub_A750A0(a1, v59, v61, v62, v63, v64, v116);
  result = sub_A74EC0(a1, v65);
LABEL_46:
  if ( (_BYTE *)ptr.m128_u64[0] != v135 )
  {
    v118 = result;
    free((void *)ptr.m128_u64[0]);
    result = v118;
  }
LABEL_48:
  if ( (v130 & 1) == 0 )
  {
    v119 = result;
    operator delete(v131, 16LL * v132, 8);
    return v119;
  }
  return result;
}
