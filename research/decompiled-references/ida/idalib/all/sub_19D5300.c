__int64 __fastcall sub_19D5300(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // r14
  char v31; // r15
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // r12d
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  __int64 *v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // r15
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rbp
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rbx
  _QWORD *v75; // r12
  __int64 (__fastcall *v76)(__int64); // rax
  __int64 v77; // rcx
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned int v85; // eax
  __int64 v86; // r15
  const char *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // eax
  __int64 v93; // r12
  const char *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r12
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned __int64 v100; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v101; // [rsp+8h] [rbp-1D0h]
  __int64 v102; // [rsp+8h] [rbp-1D0h]
  __int64 v103; // [rsp+8h] [rbp-1D0h]
  __int64 v104; // [rsp+8h] [rbp-1D0h]
  __int64 v105; // [rsp+8h] [rbp-1D0h]
  __int64 v106; // [rsp+8h] [rbp-1D0h]
  __int64 v109; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v110; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 i; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v112; // [rsp+40h] [rbp-198h] BYREF
  __int64 v113; // [rsp+48h] [rbp-190h] BYREF
  const char *v114; // [rsp+50h] [rbp-188h] BYREF
  __int64 v115; // [rsp+58h] [rbp-180h]
  _BYTE v116[144]; // [rsp+60h] [rbp-178h] BYREF
  __int64 v117; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD *v118; // [rsp+F8h] [rbp-E0h]
  __int64 v119; // [rsp+100h] [rbp-D8h]
  _OWORD v120[5]; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v121; // [rsp+158h] [rbp-80h]
  __int64 *v122; // [rsp+160h] [rbp-78h]
  __int64 v123; // [rsp+168h] [rbp-70h]
  int v124; // [rsp+170h] [rbp-68h]
  __int64 v125; // [rsp+178h] [rbp-60h] BYREF
  __int128 v126; // [rsp+180h] [rbp-58h]
  __int64 v127; // [rsp+190h] [rbp-48h]

  v7 = *(_QWORD *)(a3 + 8);
  *a4 = 0;
  v110 = a2;
  for ( i = v7; ; i = v8 )
  {
    v9 = sub_F6AC00(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v9 )
      return 1;
    v11 = *(_QWORD *)(v9 + 32);
    v12 = (__int64 *)(*(_QWORD *)(v11 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v11 + 80) & 4) != 0 )
      v13 = v12[1];
    else
      v13 = *v12;
    v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) != 42 )
    {
      if ( (*(_QWORD *)(v11 + 80) & 4LL) == 0 )
        goto LABEL_3;
      goto LABEL_31;
    }
    v16 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(v14, a2, v15, (__int64)v12, v10) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v16 + 16) == 48 )
    {
      v25 = sub_F60F10(*v16, a2, v17, v18, v19, v20)[13];
      v26 = *(_QWORD *)(v25 + 96);
      if ( (v26 & 1) != 0 )
      {
        v21 = v26 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_12;
      }
      v22 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        break;
    }
LABEL_30:
    v12 = (__int64 *)(*(_QWORD *)(v11 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v11 + 80) & 4LL) == 0 )
    {
LABEL_3:
      v8 = *v12;
      continue;
    }
LABEL_31:
    v8 = v12[1];
  }
  v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v26 & 2) == 0 )
    goto LABEL_18;
  v56 = v22[2295];
  v57 = v25 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v56 )
  {
    v58 = v22[294];
    v22[304] += 24LL;
    v59 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v59 + 24;
    if ( v22[295] >= v59 + 24 && v58 )
    {
      v22[294] = a2;
      v60 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      a2 = 24;
      v60 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v23, v24);
      v59 = v60 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v60 = v56;
    v57 = v59 | 4;
    *(_DWORD *)(v60 + 8) = 0;
    *(_QWORD *)(v60 + 16) = v25;
  }
  v21 = v57 & 0xFFFFFFFFFFFFFFFELL;
  v26 = v21 | 1;
  *(_QWORD *)(v25 + 96) = v21 | 1;
LABEL_12:
  v27 = v26 & 0xFFFFFFFFFFFFFFF8LL;
  v28 = v27;
  if ( v21 )
  {
    v21 &= 4u;
    if ( (_DWORD)v21 )
    {
      if ( !v27 )
        goto LABEL_30;
      v29 = *(_QWORD *)v27;
      v21 = *(unsigned int *)(*(_QWORD *)v27 + 12LL);
      if ( *(_DWORD *)(v27 + 8) != (_DWORD)v21 )
      {
        *(_DWORD *)(v27 + 8) = v21;
        a2 = v25;
        v100 = v27;
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v29 + 152LL))(v29, v25);
        v27 = v100;
      }
      v28 = *(_QWORD *)(v27 + 16);
    }
  }
LABEL_18:
  if ( !v28 )
    goto LABEL_30;
  v30 = v28;
  v31 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v30 + 29) & 1) == 0 )
      goto LABEL_25;
    v32 = sub_B8C3D0(v30, a2, v21, (__int64)v22, v23, v24);
    v21 = *v32;
    v33 = *v32 + 8LL * *((unsigned int *)v32 + 2);
    if ( v21 < v33 )
      break;
    if ( v21 != v33 )
    {
      if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 304 )
        goto LABEL_36;
      v47 = (__int64 *)(v33 + 8);
      while ( 1 )
      {
        a2 = (unsigned __int64)v47;
        if ( (__int64 *)v21 == v47 )
          break;
        v48 = *v47++;
        if ( *(_WORD *)(v48 + 36) == 304 )
          goto LABEL_36;
      }
    }
LABEL_25:
    v34 = *(_QWORD *)(v30 + 96);
    if ( (v34 & 1) != 0 )
    {
      if ( v31 )
        goto LABEL_30;
      v21 = v34 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_49;
    }
    if ( (v34 & 2) != 0 )
    {
      if ( v31 )
        goto LABEL_30;
      v49 = v34 & 0xFFFFFFFFFFFFFFFCLL;
      v31 = 1;
      v50 = (_QWORD *)v49;
      if ( v49 )
      {
        v51 = *(_QWORD *)(v49 + 18360);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v49 + 2352);
          v50[304] += 24LL;
          v53 = (v52 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v22 = (_QWORD *)(v53 + 24);
          if ( v50[295] >= v53 + 24 && v52 )
          {
            v50[294] = v22;
            v54 = (v52 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v54 = sub_986170((__int64)(v50 + 294), 24, 24, 3, v23, v24);
            v53 = v54 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v54 = v51;
          v55 = v53 | 4;
          *(_DWORD *)(v54 + 8) = 0;
          *(_QWORD *)(v54 + 16) = v30;
        }
        else
        {
          v55 = v30 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v21 = v55 & 0xFFFFFFFFFFFFFFFELL;
        v34 = v21 | 1;
        *(_QWORD *)(v30 + 96) = v21 | 1;
LABEL_49:
        v45 = v34 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 1;
        a2 = v45;
        if ( v21 )
        {
          v21 &= 4u;
          if ( (_DWORD)v21 )
          {
            if ( v45 )
            {
              v46 = *(_QWORD *)v45;
              v21 = *(unsigned int *)(*(_QWORD *)v45 + 12LL);
              if ( *(_DWORD *)(v45 + 8) != (_DWORD)v21 )
              {
                *(_DWORD *)(v45 + 8) = v21;
                v101 = v45;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 152LL))(v46, v30);
                v45 = v101;
              }
              a2 = *(_QWORD *)(v45 + 16);
              v31 = 1;
            }
          }
        }
        goto LABEL_28;
      }
    }
    else
    {
      a2 = v34 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v34 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        goto LABEL_28;
    }
    a2 = 0;
LABEL_28:
    if ( v28 != a2 )
    {
      v30 = a2;
      if ( a2 )
        continue;
    }
    goto LABEL_30;
  }
  a2 = v21;
  while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 304 )
  {
    a2 += 8LL;
    if ( v33 == a2 )
      goto LABEL_25;
  }
  if ( v33 == a2 )
    goto LABEL_25;
LABEL_36:
  while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 304 )
    v21 += 8LL;
  v35 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
  v112 = v35;
  if ( v35 )
  {
    v36 = *(_QWORD *)(v35 + 16);
    *a4 = 1;
    if ( *(_DWORD *)v36 != 2 || (v44 = 1, *(_WORD *)(v36 + 16) != 25705) )
    {
      v123 = v35;
      v120[4] = 0;
      v118 = v120;
      v119 = 0x800000000LL;
      v117 = 0;
      v121 = 0;
      v122 = a1;
      v124 = 0;
      sub_B85890(&v125, v35);
      v126 = 0;
      v127 = 0x101010000LL;
      sub_1A395A0(&v117);
      if ( !(unsigned __int8)sub_1A49A10(a1, &v117, a1[24], 0, 0) )
      {
        if ( !sub_9C7DB0(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v117, v37, v38, v39) )
        {
          v81 = sub_EEB7E0(a3, (__int64)&v117, 0.0);
          sub_168B9F0((__int64)v116, a1 + 1, v81, 0x10FCu, 0);
          v114 = *(const char **)(a3 + 8);
          v82 = sub_162B6D0((__int64)v116, (__int64 *)&v114);
          sub_169D880(v82, &v112);
          sub_15F7200(v116);
          sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(v11 + 56), 0x67u, 0);
          sub_15F7200(v116);
        }
        goto LABEL_45;
      }
      v40 = *v118 & 0xFFFFFFFFFFFFFFF8LL;
      v41 = *(_BYTE *)(v40 + 28) & 0x7F;
      if ( ((v41 + 52) & 0x7Fu) > 1 )
      {
        v42 = (unsigned int)v41 - 53;
        if ( (unsigned int)v42 > 1 )
        {
LABEL_44:
          if ( v41 != 20 )
            goto LABEL_45;
          v102 = v40;
          v62 = sub_F67AB0(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v117, v42, v38, v39);
          if ( v62 )
          {
            v66 = sub_A5E7C0(v62, (__int64)&v117, v63, v64, v65);
            v70 = sub_9C7D40(v66, (__int64)&v117, v67, v68, v69);
            v73 = v102;
            v74 = (_QWORD *)v70;
            if ( v70 == v102 )
              goto LABEL_45;
            if ( v70 )
            {
              if ( v102 != v70 )
              {
                v75 = (_QWORD *)v102;
                do
                {
                  v76 = *(__int64 (__fastcall **)(__int64))(*v74 + 32LL);
                  if ( v76 == sub_A55E60 )
                  {
                    v77 = v74[12];
                  }
                  else
                  {
                    v105 = v73;
                    v91 = v76((__int64)v74);
                    v73 = v105;
                    v77 = v91;
                  }
                  v78 = *(__int64 (__fastcall **)(__int64))(*v75 + 32LL);
                  if ( v78 == sub_A55E60 )
                  {
                    v79 = v75[12];
                  }
                  else
                  {
                    v109 = v77;
                    v104 = v73;
                    v79 = v78((__int64)v75);
                    v77 = v109;
                    v73 = v104;
                  }
                  v103 = v73;
                  if ( v77 == v79 )
                    break;
                  v80 = sub_BAB630((__int64)v75, (__int64)&v117, v71, v77, v72, v73);
                  v73 = v103;
                  v75 = (_QWORD *)v80;
                  if ( !v80 )
                    goto LABEL_98;
                }
                while ( (_QWORD *)v80 != v74 );
              }
              goto LABEL_45;
            }
LABEL_98:
            if ( a5 )
            {
              v106 = v73;
              v92 = sub_EEB7E0(a3, (__int64)&v117, 0.0);
              sub_168B9F0((__int64)v116, a1 + 1, v92, 0x1C10u, 0);
              v93 = sub_1605D30((__int64)v116, &i);
              v94 = sub_995750(v106);
              v115 = v95;
              v114 = v94;
              v96 = sub_166BAF0(v93, (__int64)&v114);
              v113 = sub_F68450(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v114, v97, v98, v99);
              sub_162B6D0(v96, &v113);
              sub_15F7200(v116);
            }
          }
          else
          {
            if ( sub_9C7DB0(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v117, v63, v64, v65) )
              goto LABEL_45;
            v44 = sub_A63480(a1[31], v110, v102, v83, v84);
            if ( (_BYTE)v44 )
              goto LABEL_45;
            if ( a5 )
            {
              v85 = sub_EEB7E0(a3, v110, 0.0);
              sub_168B9F0((__int64)v116, a1 + 1, v85, 0x1C10u, 0);
              v86 = sub_1605D30((__int64)v116, &i);
              v87 = sub_995750(v102);
              v115 = v88;
              v114 = v87;
              v89 = sub_166BAF0(v86, (__int64)&v114);
              sub_1605D30(v89, (__int64 *)&v110);
              sub_15F7200(v116);
              sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(v11 + 56), 0x67u, 0);
              sub_15F7200(v116);
              v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
              sub_168B9F0((__int64)v116, a1 + 1, v90, 0x67u, 0);
              sub_15F7200(v116);
              goto LABEL_46;
            }
          }
          v44 = 0;
          goto LABEL_46;
        }
      }
      v43 = sub_B72ED0(*v118 & 0xFFFFFFFFFFFFFFF8LL);
      v40 = v43;
      if ( v43 )
      {
        v41 = *(_BYTE *)(v43 + 28) & 0x7F;
        goto LABEL_44;
      }
LABEL_45:
      v44 = 1;
LABEL_46:
      sub_169D230((__int64)&v117);
    }
  }
  else
  {
    return 0;
  }
  return v44;
}
