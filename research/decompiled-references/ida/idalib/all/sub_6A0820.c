unsigned __int64 __fastcall sub_6A0820(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 **a4,
        __int64 a5)
{
  unsigned __int64 *v8; // rdi
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // r9
  unsigned __int64 *v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r10
  char v18; // r9
  bool v19; // r10
  char v20; // al
  void *v21; // rbp
  void **v22; // r15
  char v23; // bl
  char v24; // dl
  unsigned __int64 *v25; // r11
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r10
  void *v28; // r12
  void **v29; // r15
  char v30; // bl
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r14
  bool v33; // dl
  void **v34; // r15
  char v35; // bl
  char v36; // dl
  char v37; // al
  void **v38; // r15
  char v39; // bl
  void **v41; // r12
  char v42; // r15
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rdi
  bool v45; // dl
  void **v46; // r12
  char v47; // r15
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  bool v50; // dl
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  bool v53; // al
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  bool v56; // al
  __int64 v57; // rdx
  __int64 v58; // r11
  unsigned __int64 v59; // rdx
  bool v60; // cf
  bool v61; // cf
  bool v62; // cf
  __int64 v63; // r13
  void **v64; // rbx
  __int64 v65; // r12
  void *v66; // rdi
  __int64 v67; // r13
  void **v68; // rbx
  __int64 v69; // r12
  void *v70; // rdi
  __int64 v71; // r13
  void **v72; // rbx
  __int64 v73; // rbp
  void *v74; // rdi
  __int64 v75; // r14
  void **v76; // rbx
  __int64 v77; // r13
  void *v78; // rdi
  __int64 v79; // r14
  void **v80; // rbx
  __int64 v81; // r13
  void *v82; // rdi
  __int64 v83; // r13
  void **v84; // rbx
  __int64 v85; // rbp
  void *v86; // rdi
  bool v87; // cf
  unsigned __int64 v88; // rdx
  unsigned __int64 *v89; // rdx
  unsigned __int64 *v90; // rcx
  unsigned __int64 *v91; // rdx
  unsigned __int64 *v92; // rdx
  unsigned __int64 *v93; // rsi
  unsigned __int64 *v94; // rdx
  bool v95; // cf
  unsigned __int64 *v96; // rax
  unsigned __int64 *v97; // rdx
  unsigned __int64 *v98; // rax
  bool v99; // al
  unsigned __int64 *v100; // rax
  unsigned __int64 *v101; // rdx
  unsigned __int64 *v102; // rax
  unsigned __int64 *v103; // rdx
  unsigned __int64 *v104; // rcx
  unsigned __int64 *v105; // rax
  unsigned __int64 *v106; // rax
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v108; // [rsp+8h] [rbp-A0h]
  void *v109; // [rsp+18h] [rbp-90h]
  __int64 v110; // [rsp+20h] [rbp-88h]
  void *v111; // [rsp+40h] [rbp-68h]
  char v112; // [rsp+61h] [rbp-47h]
  unsigned __int64 v113; // [rsp+68h] [rbp-40h]

  v8 = *(unsigned __int64 **)a2;
  v113 = __readfsqword(0x28u);
  v10 = *(unsigned __int64 **)a3;
  v11 = *v8;
  v12 = **(_QWORD **)a3;
  if ( *v8 == -1 )
  {
    if ( v12 != -1 )
      goto LABEL_49;
  }
  else
  {
    v13 = *(_DWORD *)(a5 + 12);
    if ( (v13 & 8) != 0 )
    {
      if ( v12 != -1 )
      {
        v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v11 & 0xFFFFFFFFFFFFFFFELL) != (v12 & 0xFFFFFFFFFFFFFFFELL) )
        {
          if ( (v11 & 0xFFFFFFFFFFFFFFFELL) < (v12 & 0xFFFFFFFFFFFFFFFELL) )
            goto LABEL_6;
          v25 = *a4;
          v26 = **a4;
          goto LABEL_69;
        }
        goto LABEL_25;
      }
      v15 = *a4;
      v16 = **a4;
      if ( v16 != -1 )
      {
LABEL_88:
        if ( v11 == -1 )
          goto LABEL_74;
LABEL_91:
        if ( (v13 & 8) != 0 )
        {
LABEL_15:
          v11 &= ~1uLL;
          v16 &= ~1uLL;
        }
LABEL_16:
        if ( v16 != v11 )
        {
          v56 = v11 < v16;
          goto LABEL_115;
        }
LABEL_17:
        v20 = *(_BYTE *)(a2 + 97);
        if ( (v20 == 1) != (*((_BYTE *)a4 + 97) == 1) )
        {
          if ( v20 == 1 )
            goto LABEL_19;
LABEL_74:
          v112 = 0;
          ptr = nullptr;
          v109 = nullptr;
          v108 = 0;
          sub_698F60((__int64)&ptr, a1);
          v21 = ptr;
          v41 = (void **)v109;
          v42 = v112;
          sub_698F60(a1, a2);
          sub_698F60(a2, (__int64)&ptr);
          if ( v42 == 2 )
          {
            if ( !v41 )
              goto LABEL_76;
            v75 = v110;
            v76 = v41;
            v77 = 0;
            if ( v110 )
            {
              do
              {
                v78 = *v76;
                if ( *v76 )
                {
                  v76[1] = nullptr;
                  qfree(v78);
                }
                ++v77;
                v76 += 7;
              }
              while ( v75 != v77 );
            }
          }
          else
          {
            if ( v42 != 1 )
              goto LABEL_76;
            if ( v111 )
              qfree(v111);
            if ( !v41 )
            {
LABEL_76:
              if ( !v21 )
                return v113 - __readfsqword(0x28u);
              goto LABEL_66;
            }
          }
          qfree(v41);
          goto LABEL_76;
        }
        v54 = v8[1];
        v55 = v15[1];
        if ( v54 != v55 )
        {
          v56 = v55 < v54;
          goto LABEL_115;
        }
        if ( v20 != 1 )
        {
          if ( v20 != 2
            || (v106 = a4[4],
                v61 = *(_QWORD *)(a2 + 32) < (unsigned __int64)v106,
                *(unsigned __int64 **)(a2 + 32) == v106) )
          {
            v61 = a2 < (unsigned __int64)a4;
          }
          goto LABEL_129;
        }
        v100 = *(unsigned __int64 **)(a2 + 32);
        v101 = a4[4];
        if ( v100 != v101 )
        {
          if ( !v100 )
            goto LABEL_19;
          if ( !v101 )
            goto LABEL_74;
        }
        v102 = *(unsigned __int64 **)(a2 + 72);
        v61 = v102 < a4[9];
        if ( v102 != a4[9] )
          goto LABEL_129;
        if ( !v102 )
        {
          v61 = *(_QWORD *)(a2 + 88) < (unsigned __int64)a4[11];
LABEL_129:
          v56 = v61;
          goto LABEL_115;
        }
        v56 = **(_QWORD **)(a2 + 64) < *a4[8];
LABEL_115:
        if ( !v56 )
          goto LABEL_74;
LABEL_19:
        v112 = 0;
        ptr = nullptr;
        v109 = nullptr;
        v108 = 0;
        sub_698F60((__int64)&ptr, a1);
        v21 = ptr;
        v22 = (void **)v109;
        v23 = v112;
        sub_698F60(a1, (__int64)a4);
        sub_698F60((__int64)a4, (__int64)&ptr);
        if ( v23 == 2 )
        {
          if ( !v22 )
            goto LABEL_21;
          v67 = v110;
          v68 = v22;
          v69 = 0;
          if ( v110 )
          {
            do
            {
              v70 = *v68;
              if ( *v68 )
              {
                v68[1] = nullptr;
                qfree(v70);
              }
              ++v69;
              v68 += 7;
            }
            while ( v67 != v69 );
          }
        }
        else
        {
          if ( v23 != 1 )
            goto LABEL_21;
          if ( v111 )
            qfree(v111);
          if ( !v22 )
          {
LABEL_21:
            if ( v21 )
              goto LABEL_66;
            return v113 - __readfsqword(0x28u);
          }
        }
        qfree(v22);
        goto LABEL_21;
      }
LABEL_98:
      v18 = *(_BYTE *)(a3 + 97);
      if ( (v18 == 1) != (*((_BYTE *)a4 + 97) == 1) )
      {
        if ( v18 != 1 )
        {
          v16 = -1;
LABEL_13:
          if ( (v13 & 8) != 0 )
          {
            if ( v16 == -1 )
              goto LABEL_19;
            goto LABEL_15;
          }
          if ( v16 == -1 )
            goto LABEL_19;
          goto LABEL_16;
        }
        goto LABEL_44;
      }
      v16 = -1;
      goto LABEL_94;
    }
    if ( v12 == -1 )
    {
      v15 = *a4;
      v16 = **a4;
      if ( v16 != -1 )
        goto LABEL_91;
      goto LABEL_98;
    }
    if ( v11 != v12 )
    {
      if ( v11 >= v12 )
      {
LABEL_29:
        v25 = *a4;
        v26 = **a4;
        if ( (v13 & 8) == 0 )
        {
          v27 = **a4;
          if ( v26 == -1 )
            goto LABEL_81;
          goto LABEL_31;
        }
LABEL_69:
        if ( v26 == -1 )
          goto LABEL_81;
        v27 = v26;
        v11 &= ~1uLL;
        v26 &= ~1uLL;
LABEL_31:
        if ( v26 != v11 )
        {
          if ( v11 >= v26 )
          {
            if ( v12 == -1 )
              goto LABEL_34;
LABEL_57:
            if ( (v13 & 8) != 0 )
            {
              if ( v27 == -1 )
                goto LABEL_63;
LABEL_59:
              v12 &= ~1uLL;
              v27 &= ~1uLL;
              goto LABEL_60;
            }
            if ( v27 == -1 )
              goto LABEL_63;
            goto LABEL_60;
          }
LABEL_81:
          v112 = 0;
          ptr = nullptr;
          v109 = nullptr;
          v108 = 0;
          sub_698F60((__int64)&ptr, a1);
          v21 = ptr;
          v46 = (void **)v109;
          v47 = v112;
          sub_698F60(a1, a2);
          sub_698F60(a2, (__int64)&ptr);
          if ( v47 == 2 )
          {
            if ( !v46 )
              goto LABEL_83;
            v79 = v110;
            v80 = v46;
            v81 = 0;
            if ( v110 )
            {
              do
              {
                v82 = *v80;
                if ( *v80 )
                {
                  v80[1] = nullptr;
                  qfree(v82);
                }
                ++v81;
                v80 += 7;
              }
              while ( v79 != v81 );
            }
          }
          else
          {
            if ( v47 != 1 )
              goto LABEL_83;
            if ( v111 )
              qfree(v111);
            if ( !v46 )
            {
LABEL_83:
              if ( !v21 )
                return v113 - __readfsqword(0x28u);
              goto LABEL_66;
            }
          }
          qfree(v46);
          goto LABEL_83;
        }
LABEL_53:
        v36 = *(_BYTE *)(a2 + 97);
        if ( (v36 == 1) != (*((_BYTE *)a4 + 97) == 1) )
        {
          if ( v36 == 1 )
            goto LABEL_81;
          goto LABEL_55;
        }
        v43 = v8[1];
        v44 = v25[1];
        if ( v43 != v44 )
        {
          v45 = v44 < v43;
          goto LABEL_80;
        }
        if ( v36 == 1 )
        {
          v92 = *(unsigned __int64 **)(a2 + 32);
          v93 = a4[4];
          if ( v92 != v93 )
          {
            if ( !v92 )
              goto LABEL_81;
            if ( !v93 )
            {
LABEL_55:
              if ( v12 == -1 )
              {
                if ( v27 != -1 )
                  goto LABEL_34;
                goto LABEL_61;
              }
              v13 = *(_DWORD *)(a5 + 12);
              goto LABEL_57;
            }
          }
          v94 = *(unsigned __int64 **)(a2 + 72);
          v95 = v94 < a4[9];
          if ( v94 == a4[9] )
          {
            if ( v94 )
            {
              v45 = **(_QWORD **)(a2 + 64) < *a4[8];
LABEL_80:
              if ( v45 )
                goto LABEL_81;
              goto LABEL_55;
            }
            v95 = *(_QWORD *)(a2 + 88) < (unsigned __int64)a4[11];
          }
        }
        else if ( v36 != 2
               || (v103 = a4[4],
                   v95 = *(_QWORD *)(a2 + 32) < (unsigned __int64)v103,
                   *(unsigned __int64 **)(a2 + 32) == v103) )
        {
          v45 = a2 < (unsigned __int64)a4;
          goto LABEL_80;
        }
        v45 = v95;
        goto LABEL_80;
      }
LABEL_43:
      v15 = *a4;
      v14 = v12;
      v17 = **a4;
      v16 = v17;
      if ( v17 == -1 )
        goto LABEL_44;
      goto LABEL_7;
    }
  }
LABEL_25:
  v18 = *(_BYTE *)(a3 + 97);
  v24 = *(_BYTE *)(a2 + 97);
  v19 = v18 == 1;
  if ( (v24 == 1) != (v18 == 1) )
  {
    if ( v24 != 1 )
      goto LABEL_27;
    goto LABEL_41;
  }
  v31 = v8[1];
  v32 = v10[1];
  if ( v31 != v32 )
  {
    v33 = v32 < v31;
    goto LABEL_40;
  }
  if ( v24 != 1 )
  {
    if ( v24 != 2 || (v88 = *(_QWORD *)(a3 + 32), v60 = *(_QWORD *)(a2 + 32) < v88, *(_QWORD *)(a2 + 32) == v88) )
    {
      v33 = a2 < a3;
      goto LABEL_40;
    }
    goto LABEL_125;
  }
  v57 = *(_QWORD *)(a2 + 32);
  v58 = *(_QWORD *)(a3 + 32);
  if ( v57 == v58 )
    goto LABEL_124;
  if ( !v57 )
  {
LABEL_41:
    if ( v12 == -1 )
    {
      v15 = *a4;
      v16 = **a4;
      if ( v16 == -1 )
      {
LABEL_9:
        if ( (*((_BYTE *)a4 + 97) == 1) != v19 )
        {
          if ( v18 != 1 )
          {
LABEL_11:
            if ( v11 == -1 )
            {
              if ( v16 != -1 )
                goto LABEL_74;
              goto LABEL_17;
            }
            v13 = *(_DWORD *)(a5 + 12);
            goto LABEL_13;
          }
LABEL_44:
          v112 = 0;
          ptr = nullptr;
          v109 = nullptr;
          v108 = 0;
          sub_698F60((__int64)&ptr, a1);
          v28 = ptr;
          v34 = (void **)v109;
          v35 = v112;
          sub_698F60(a1, a3);
          sub_698F60(a3, (__int64)&ptr);
          if ( v35 == 2 )
          {
            if ( !v34 )
              goto LABEL_46;
            v83 = v110;
            v84 = v34;
            v85 = 0;
            if ( v110 )
            {
              do
              {
                v86 = *v84;
                if ( *v84 )
                {
                  v84[1] = nullptr;
                  qfree(v86);
                }
                ++v85;
                v84 += 7;
              }
              while ( v83 != v85 );
            }
          }
          else
          {
            if ( v35 != 1 )
              goto LABEL_46;
            if ( v111 )
              qfree(v111);
            if ( !v34 )
            {
LABEL_46:
              if ( !v28 )
                return v113 - __readfsqword(0x28u);
              goto LABEL_37;
            }
          }
          qfree(v34);
          goto LABEL_46;
        }
LABEL_94:
        v48 = v10[1];
        v49 = v15[1];
        if ( v48 != v49 )
        {
          v50 = v49 < v48;
          goto LABEL_96;
        }
        if ( v18 == 1 )
        {
          v89 = *(unsigned __int64 **)(a3 + 32);
          v90 = a4[4];
          if ( v89 != v90 )
          {
            if ( !v89 )
              goto LABEL_44;
            if ( !v90 )
              goto LABEL_11;
          }
          v91 = *(unsigned __int64 **)(a3 + 72);
          v87 = v91 < a4[9];
          if ( v91 == a4[9] )
          {
            if ( v91 )
            {
              v50 = **(_QWORD **)(a3 + 64) < *a4[8];
LABEL_96:
              if ( !v50 )
                goto LABEL_11;
              goto LABEL_44;
            }
            v87 = *(_QWORD *)(a3 + 88) < (unsigned __int64)a4[11];
          }
        }
        else if ( v18 != 2
               || (v104 = a4[4],
                   v87 = *(_QWORD *)(a3 + 32) < (unsigned __int64)v104,
                   *(unsigned __int64 **)(a3 + 32) == v104) )
        {
          v87 = a3 < (unsigned __int64)a4;
        }
        v50 = v87;
        goto LABEL_96;
      }
      v13 = *(_DWORD *)(a5 + 12);
      if ( (v13 & 8) == 0 )
      {
        if ( v11 == -1 )
          goto LABEL_74;
        goto LABEL_16;
      }
      goto LABEL_88;
    }
    v13 = *(_DWORD *)(a5 + 12);
    if ( (v13 & 8) != 0 )
    {
      v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
LABEL_6:
      v15 = *a4;
      v16 = **a4;
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( v16 == -1 )
        goto LABEL_44;
LABEL_7:
      if ( v17 == v14 )
      {
        v18 = *(_BYTE *)(a3 + 97);
        v19 = v18 == 1;
        goto LABEL_9;
      }
      if ( v14 < v17 )
        goto LABEL_44;
      goto LABEL_88;
    }
    goto LABEL_43;
  }
  if ( v58 )
  {
LABEL_124:
    v59 = *(_QWORD *)(a2 + 72);
    v60 = v59 < *(_QWORD *)(a3 + 72);
    if ( v59 == *(_QWORD *)(a3 + 72) )
    {
      if ( v59 )
      {
        v33 = **(_QWORD **)(a2 + 64) < **(_QWORD **)(a3 + 64);
LABEL_40:
        if ( v33 )
          goto LABEL_41;
        goto LABEL_27;
      }
      v60 = *(_QWORD *)(a2 + 88) < *(_QWORD *)(a3 + 88);
    }
LABEL_125:
    v33 = v60;
    goto LABEL_40;
  }
LABEL_27:
  if ( v11 != -1 )
  {
    v13 = *(_DWORD *)(a5 + 12);
    goto LABEL_29;
  }
LABEL_49:
  v25 = *a4;
  v27 = **a4;
  if ( v27 == -1 )
    goto LABEL_53;
  if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
  {
    if ( v12 == -1 )
      goto LABEL_34;
    goto LABEL_59;
  }
  if ( v12 == -1 )
    goto LABEL_34;
LABEL_60:
  if ( v27 != v12 )
  {
    v53 = v12 < v27;
LABEL_111:
    if ( !v53 )
      goto LABEL_34;
    goto LABEL_63;
  }
LABEL_61:
  v37 = *(_BYTE *)(a3 + 97);
  if ( (v37 == 1) != (*((_BYTE *)a4 + 97) == 1) )
  {
    if ( v37 == 1 )
      goto LABEL_63;
LABEL_34:
    v112 = 0;
    ptr = nullptr;
    v109 = nullptr;
    v108 = 0;
    sub_698F60((__int64)&ptr, a1);
    v28 = ptr;
    v29 = (void **)v109;
    v30 = v112;
    sub_698F60(a1, a3);
    sub_698F60(a3, (__int64)&ptr);
    if ( v30 == 2 )
    {
      if ( !v29 )
        goto LABEL_36;
      v71 = v110;
      v72 = v29;
      v73 = 0;
      if ( v110 )
      {
        do
        {
          v74 = *v72;
          if ( *v72 )
          {
            v72[1] = nullptr;
            qfree(v74);
          }
          ++v73;
          v72 += 7;
        }
        while ( v71 != v73 );
      }
    }
    else
    {
      if ( v30 != 1 )
        goto LABEL_36;
      if ( v111 )
        qfree(v111);
      if ( !v29 )
      {
LABEL_36:
        if ( !v28 )
          return v113 - __readfsqword(0x28u);
LABEL_37:
        qfree(v28);
        return v113 - __readfsqword(0x28u);
      }
    }
    qfree(v29);
    goto LABEL_36;
  }
  v51 = v10[1];
  v52 = v25[1];
  if ( v51 != v52 )
  {
    v53 = v52 < v51;
    goto LABEL_111;
  }
  if ( v37 != 1 )
  {
    if ( v37 != 2
      || (v105 = a4[4], v62 = *(_QWORD *)(a3 + 32) < (unsigned __int64)v105, *(unsigned __int64 **)(a3 + 32) == v105) )
    {
      v62 = a3 < (unsigned __int64)a4;
    }
LABEL_133:
    v53 = v62;
    goto LABEL_111;
  }
  v96 = *(unsigned __int64 **)(a3 + 32);
  v97 = a4[4];
  if ( v96 != v97 )
  {
    if ( !v96 )
      goto LABEL_63;
    if ( !v97 )
      goto LABEL_34;
  }
  v98 = *(unsigned __int64 **)(a3 + 72);
  v62 = v98 < a4[9];
  if ( v98 != a4[9] )
    goto LABEL_133;
  if ( v98 )
    v99 = **(_QWORD **)(a3 + 64) < *a4[8];
  else
    v99 = *(_QWORD *)(a3 + 88) < (unsigned __int64)a4[11];
  if ( !v99 )
    goto LABEL_34;
LABEL_63:
  v112 = 0;
  ptr = nullptr;
  v109 = nullptr;
  v108 = 0;
  sub_698F60((__int64)&ptr, a1);
  v21 = ptr;
  v38 = (void **)v109;
  v39 = v112;
  sub_698F60(a1, (__int64)a4);
  sub_698F60((__int64)a4, (__int64)&ptr);
  if ( v39 == 2 )
  {
    if ( !v38 )
      goto LABEL_65;
    v63 = v110;
    v64 = v38;
    v65 = 0;
    if ( v110 )
    {
      do
      {
        v66 = *v64;
        if ( *v64 )
        {
          v64[1] = nullptr;
          qfree(v66);
        }
        ++v65;
        v64 += 7;
      }
      while ( v63 != v65 );
    }
    goto LABEL_184;
  }
  if ( v39 == 1 )
  {
    if ( v111 )
      qfree(v111);
    if ( v38 )
LABEL_184:
      qfree(v38);
  }
LABEL_65:
  if ( v21 )
LABEL_66:
    qfree(v21);
  return v113 - __readfsqword(0x28u);
}
