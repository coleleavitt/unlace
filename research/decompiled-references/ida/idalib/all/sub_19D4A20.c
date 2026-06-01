__int64 __fastcall sub_19D4A20(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // r14
  char v30; // r15
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // r13
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned int v48; // r12d
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 *v51; // rax
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v61; // rbp
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // r8
  _QWORD *v76; // r9
  _QWORD *v77; // rdx
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 v79; // rcx
  __int64 (__fastcall *v80)(__int64); // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rsi
  __int64 *v86; // r13
  unsigned int v87; // eax
  __int64 v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rax
  unsigned int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  unsigned __int64 v96; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v97; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v98; // [rsp+0h] [rbp-1B8h]
  _QWORD *v99; // [rsp+0h] [rbp-1B8h]
  _QWORD *v100; // [rsp+0h] [rbp-1B8h]
  _QWORD *v101; // [rsp+0h] [rbp-1B8h]
  __int64 v104; // [rsp+18h] [rbp-1A0h]
  _QWORD *v105; // [rsp+18h] [rbp-1A0h]
  _QWORD *v106; // [rsp+18h] [rbp-1A0h]
  __int64 v107; // [rsp+20h] [rbp-198h]
  unsigned __int64 v108; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int64 i; // [rsp+30h] [rbp-188h] BYREF
  __int64 v110; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v111[144]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-E8h] BYREF
  _QWORD *v113; // [rsp+D8h] [rbp-E0h]
  __int64 v114; // [rsp+E0h] [rbp-D8h]
  _OWORD v115[5]; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v116; // [rsp+138h] [rbp-80h]
  __int64 *v117; // [rsp+140h] [rbp-78h]
  __int64 v118; // [rsp+148h] [rbp-70h]
  int v119; // [rsp+150h] [rbp-68h]
  __int64 v120; // [rsp+158h] [rbp-60h] BYREF
  __int128 v121; // [rsp+160h] [rbp-58h]
  __int64 v122; // [rsp+170h] [rbp-48h]

  *a4 = 0;
  v108 = a2;
  for ( i = a2; ; i = v7 )
  {
    v8 = sub_F6AC00(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v8 )
      return 1;
    v10 = *(_QWORD *)(v8 + 32);
    v11 = (__int64 *)(*(_QWORD *)(v10 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v10 + 80) & 4) != 0 )
      v12 = v11[1];
    else
      v12 = *v11;
    v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 42 )
    {
      if ( (*(_QWORD *)(v10 + 80) & 4LL) == 0 )
        goto LABEL_3;
      goto LABEL_31;
    }
    v15 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(v13, a2, v14, (__int64)v11, v9) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v15 + 16) == 48 )
    {
      v24 = sub_F60F10(*v15, a2, v16, v17, v18, v19)[13];
      v25 = *(_QWORD *)(v24 + 96);
      if ( (v25 & 1) != 0 )
      {
        v20 = v25 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_12;
      }
      v21 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        break;
    }
LABEL_30:
    v11 = (__int64 *)(*(_QWORD *)(v10 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v10 + 80) & 4LL) == 0 )
    {
LABEL_3:
      v7 = *v11;
      continue;
    }
LABEL_31:
    v7 = v11[1];
  }
  v27 = v25 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v25 & 2) == 0 )
    goto LABEL_18;
  v61 = v21[2295];
  v62 = v24 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v61 )
  {
    v63 = v21[294];
    v21[304] += 24LL;
    v64 = (v63 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v64 + 24;
    if ( v21[295] >= v64 + 24 && v63 )
    {
      v21[294] = a2;
      v65 = (v63 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      a2 = 24;
      v65 = sub_986170((__int64)(v21 + 294), 24, 24, 3, v22, v23);
      v64 = v65 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v65 = v61;
    v62 = v64 | 4;
    *(_DWORD *)(v65 + 8) = 0;
    *(_QWORD *)(v65 + 16) = v24;
  }
  v20 = v62 & 0xFFFFFFFFFFFFFFFELL;
  v25 = v20 | 1;
  *(_QWORD *)(v24 + 96) = v20 | 1;
LABEL_12:
  v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
  v27 = v26;
  if ( v20 )
  {
    v20 &= 4u;
    if ( (_DWORD)v20 )
    {
      if ( !v26 )
        goto LABEL_30;
      v28 = *(_QWORD *)v26;
      v20 = *(unsigned int *)(*(_QWORD *)v26 + 12LL);
      if ( *(_DWORD *)(v26 + 8) != (_DWORD)v20 )
      {
        *(_DWORD *)(v26 + 8) = v20;
        a2 = v24;
        v96 = v26;
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v28 + 152LL))(v28, v24);
        v26 = v96;
      }
      v27 = *(_QWORD *)(v26 + 16);
    }
  }
LABEL_18:
  if ( !v27 )
    goto LABEL_30;
  v29 = v27;
  v30 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v29 + 29) & 1) == 0 )
      goto LABEL_25;
    v31 = sub_B8C3D0(v29, a2, v20, (__int64)v21, v22, v23);
    v20 = *v31;
    v32 = *v31 + 8LL * *((unsigned int *)v31 + 2);
    if ( v20 < v32 )
      break;
    if ( v20 != v32 )
    {
      if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 303 )
        goto LABEL_34;
      v51 = (__int64 *)(v32 + 8);
      while ( 1 )
      {
        a2 = (unsigned __int64)v51;
        if ( (__int64 *)v20 == v51 )
          break;
        v52 = *v51++;
        if ( *(_WORD *)(v52 + 36) == 303 )
          goto LABEL_34;
      }
    }
LABEL_25:
    v33 = *(_QWORD *)(v29 + 96);
    if ( (v33 & 1) != 0 )
    {
      if ( v30 )
        goto LABEL_30;
      v20 = v33 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_51;
    }
    if ( (v33 & 2) != 0 )
    {
      if ( v30 )
        goto LABEL_30;
      v53 = v33 & 0xFFFFFFFFFFFFFFFCLL;
      v30 = 1;
      v54 = (_QWORD *)v53;
      if ( v53 )
      {
        v55 = *(_QWORD *)(v53 + 18360);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v53 + 2352);
          v54[304] += 24LL;
          v57 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v21 = (_QWORD *)(v57 + 24);
          if ( v54[295] >= v57 + 24 && v56 )
          {
            v54[294] = v21;
            v58 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v58 = sub_986170((__int64)(v54 + 294), 24, 24, 3, v22, v23);
            v57 = v58 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v58 = v55;
          v59 = v57 | 4;
          *(_DWORD *)(v58 + 8) = 0;
          *(_QWORD *)(v58 + 16) = v29;
        }
        else
        {
          v59 = v29 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v20 = v59 & 0xFFFFFFFFFFFFFFFELL;
        v33 = v20 | 1;
        *(_QWORD *)(v29 + 96) = v20 | 1;
LABEL_51:
        v49 = v33 & 0xFFFFFFFFFFFFFFF8LL;
        v30 = 1;
        a2 = v49;
        if ( v20 )
        {
          v20 &= 4u;
          if ( (_DWORD)v20 )
          {
            if ( v49 )
            {
              v50 = *(_QWORD *)v49;
              v20 = *(unsigned int *)(*(_QWORD *)v49 + 12LL);
              if ( *(_DWORD *)(v49 + 8) != (_DWORD)v20 )
              {
                *(_DWORD *)(v49 + 8) = v20;
                v98 = v49;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 152LL))(v50, v29);
                v49 = v98;
              }
              a2 = *(_QWORD *)(v49 + 16);
              v30 = 1;
            }
          }
        }
        goto LABEL_28;
      }
    }
    else
    {
      a2 = v33 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v33 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        goto LABEL_28;
    }
    a2 = 0;
LABEL_28:
    if ( v27 != a2 )
    {
      v29 = a2;
      if ( a2 )
        continue;
    }
    goto LABEL_30;
  }
  a2 = v20;
  while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 303 )
  {
    a2 += 8LL;
    if ( v32 == a2 )
      goto LABEL_25;
  }
  if ( v32 == a2 )
    goto LABEL_25;
LABEL_34:
  v34 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 303 )
  {
    v35 = (__int64 *)(v20 + 8);
    do
      v34 = *v35++;
    while ( *(_WORD *)(v34 + 36) != 303 );
  }
  v36 = *(_QWORD *)(v34 + 40);
  if ( v36 )
  {
    v37 = *(_QWORD *)(v36 + 16);
    *a4 = 1;
    if ( *(_DWORD *)v37 != 2 || (v48 = 1, *(_WORD *)(v37 + 16) != 25705) )
    {
      v118 = v36;
      v115[4] = 0;
      v113 = v115;
      v114 = 0x800000000LL;
      v112 = 0;
      v116 = 0;
      v117 = a1;
      v119 = 0;
      sub_B85890(&v120, v36);
      v121 = 0;
      v122 = 0x101010000LL;
      sub_1A395A0(&v112);
      if ( !(unsigned __int8)sub_1A49A10(a1, &v112, a1[24], 0, 0) )
      {
        v40 = 0;
        goto LABEL_45;
      }
      v40 = *v113 & 0xFFFFFFFFFFFFFFF8LL;
      v41 = *(_BYTE *)(v40 + 28) & 0x7F;
      if ( ((v41 + 52) & 0x7Fu) > 1 )
      {
        v42 = (unsigned int)v41 - 53;
        if ( (unsigned int)v42 > 1 )
        {
LABEL_44:
          if ( v41 != 20 )
            goto LABEL_45;
          v104 = v40;
          v66 = sub_F67AB0(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v112, v42, v38, v39);
          if ( v66 )
          {
            v70 = sub_A5E7C0(v66, (__int64)&v112, v67, v68, v69);
            v74 = sub_9C7D40(v70, (__int64)&v112, v71, v72, v73);
            v76 = (_QWORD *)v104;
            v77 = (_QWORD *)v74;
            if ( v74 == v104 )
              goto LABEL_47;
            if ( v74 )
            {
              if ( v74 != v104 )
              {
                do
                {
                  v78 = *(__int64 (__fastcall **)(__int64))(*v76 + 32LL);
                  if ( v78 == sub_A55E60 )
                  {
                    v79 = v76[12];
                  }
                  else
                  {
                    v106 = v77;
                    v101 = v76;
                    v90 = v78((__int64)v76);
                    v77 = v106;
                    v76 = v101;
                    v79 = v90;
                  }
                  v80 = *(__int64 (__fastcall **)(__int64))(*v77 + 32LL);
                  if ( v80 == sub_A55E60 )
                  {
                    v81 = v77[12];
                  }
                  else
                  {
                    v107 = v79;
                    v105 = v76;
                    v100 = v77;
                    v81 = v80((__int64)v77);
                    v79 = v107;
                    v76 = v105;
                    v77 = v100;
                  }
                  v99 = v76;
                  if ( v79 == v81 )
                    break;
                  v82 = sub_BAB630((__int64)v77, (__int64)&v112, (__int64)v77, v79, v75, (__int64)v76);
                  v76 = v99;
                  v77 = (_QWORD *)v82;
                  if ( !v82 )
                    goto LABEL_98;
                }
                while ( (_QWORD *)v82 != v99 );
              }
              goto LABEL_47;
            }
LABEL_98:
            if ( a5 )
            {
              v91 = sub_EEB7E0(a3, (__int64)&v112, 0.0);
              sub_168B9F0((__int64)v111, a1 + 1, v91, 0x1C11u, 0);
              v110 = sub_F68450(
                       *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                       (__int64)(a1 + 1),
                       v92,
                       v93,
                       v94);
              v95 = sub_162B6D0((__int64)v111, &v110);
              sub_1605D30(v95, (__int64 *)&i);
              sub_15F7200(v111);
              sub_168B9F0((__int64)v111, a1 + 1, *(_DWORD *)(v10 + 56), 0x67u, 0);
              sub_15F7200(v111);
            }
          }
          else
          {
            if ( sub_9C7DB0(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v112, v67, v68, v69) )
              goto LABEL_47;
            v85 = *(_QWORD *)(a3 + 8);
            v48 = sub_A80150(a1[31], v85, v104, v83, v84);
            if ( (_BYTE)v48 )
              goto LABEL_47;
            if ( a5 )
            {
              v86 = a1 + 1;
              v87 = sub_EEB7E0(a3, v85, 0.0);
              sub_168B9F0((__int64)v111, v86, v87, 0x1C11u, 0);
              v110 = *(_QWORD *)(a3 + 8);
              v88 = sub_162B6D0((__int64)v111, &v110);
              sub_1605D30(v88, (__int64 *)&v108);
              sub_15F7200(v111);
              sub_168B9F0((__int64)v111, v86, *(_DWORD *)(v10 + 56), 0x67u, 0);
              sub_15F7200(v111);
              v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
              sub_168B9F0((__int64)v111, v86, v89, 0x67u, 0);
              sub_15F7200(v111);
              goto LABEL_48;
            }
          }
          v48 = 0;
          goto LABEL_48;
        }
      }
      v43 = sub_B72ED0(*v113 & 0xFFFFFFFFFFFFFFF8LL);
      v40 = v43;
      if ( v43 )
      {
        v41 = *(_BYTE *)(v43 + 28) & 0x7F;
        goto LABEL_44;
      }
LABEL_45:
      v97 = v40;
      v44 = a1 + 1;
      v45 = sub_EEB7E0(a3, (__int64)&v112, 0.0);
      sub_168B9F0((__int64)v111, v44, v45, 0x1112u, 0);
      v110 = *(_QWORD *)(a3 + 8);
      v46 = sub_162B6D0((__int64)v111, &v110);
      sub_1605D30(v46, (__int64 *)&v108);
      sub_15F7200(v111);
      sub_168B9F0((__int64)v111, v44, *(_DWORD *)(v10 + 56), 0x67u, 0);
      sub_15F7200(v111);
      if ( v97 )
      {
        v47 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v97 + 16LL))(v97);
        sub_168B9F0((__int64)v111, v44, v47, 0x67u, 0);
        sub_15F7200(v111);
      }
LABEL_47:
      v48 = 1;
LABEL_48:
      sub_169D230((__int64)&v112);
    }
  }
  else
  {
    return 0;
  }
  return v48;
}
