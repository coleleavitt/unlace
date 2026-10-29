__int64 __fastcall sub_884130(_QWORD *a1, __int64 a2, void *a3, __int64 a4)
{
  _QWORD *v4; // r14
  int v5; // r13d
  char v7; // al
  void *v8; // r15
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *v15; // rdi
  bool v16; // r15
  char v17; // al
  void *v18; // r15
  bool v19; // r13
  char v20; // al
  void *v21; // rbx
  void *v23; // r13
  void *v24; // rdi
  char v25; // al
  bool v26; // r13
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // r13
  char v35; // r13
  __int64 v36; // r15
  void *v37; // r13
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdi
  __int64 v42; // rax
  void *v43; // r13
  __int64 v44; // rax
  void *v45; // r13
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rdi
  __int64 v50; // rcx
  __int16 v51; // ax
  __int64 v52; // rdi
  _DWORD *v53; // rdx
  _DWORD *v54; // rsi
  __int64 v55; // r8
  _DWORD *v56; // rdx
  __int64 v57; // r13
  unsigned int v58; // r12d
  int v59; // eax
  bool v60; // zf
  __int64 v61; // rax
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rdi
  __int64 v66; // r15
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // eax
  int v73; // eax
  _DWORD *v74; // rax
  int v75; // eax
  void *v76; // [rsp+0h] [rbp-D8h]
  void *v77; // [rsp+0h] [rbp-D8h]
  int v78; // [rsp+0h] [rbp-D8h]
  void *v79; // [rsp+8h] [rbp-D0h]
  void *v80; // [rsp+8h] [rbp-D0h]
  void *v82; // [rsp+10h] [rbp-C8h]
  _DWORD *v83; // [rsp+10h] [rbp-C8h]
  void *v84; // [rsp+18h] [rbp-C0h]
  void *v85; // [rsp+20h] [rbp-B8h]
  __int64 v86; // [rsp+20h] [rbp-B8h]
  void *v87; // [rsp+28h] [rbp-B0h]
  void *v88; // [rsp+28h] [rbp-B0h]
  void *v89; // [rsp+28h] [rbp-B0h]
  void *v90; // [rsp+28h] [rbp-B0h]
  __int64 v91; // [rsp+30h] [rbp-A8h]
  __int64 v92; // [rsp+30h] [rbp-A8h]
  __int64 v93; // [rsp+38h] [rbp-A0h]
  int v94[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v95; // [rsp+48h] [rbp-90h]
  _QWORD v96[2]; // [rsp+50h] [rbp-88h] BYREF
  int v97; // [rsp+60h] [rbp-78h] BYREF
  char v98; // [rsp+64h] [rbp-74h]
  __int64 v99; // [rsp+68h] [rbp-70h]
  int v100; // [rsp+70h] [rbp-68h] BYREF
  char v101; // [rsp+74h] [rbp-64h]
  __int64 v102; // [rsp+78h] [rbp-60h]
  __int64 v103; // [rsp+80h] [rbp-58h] BYREF
  __int64 v104; // [rsp+88h] [rbp-50h]
  __int64 v105; // [rsp+90h] [rbp-48h] BYREF
  __int64 v106; // [rsp+98h] [rbp-40h]

  v4 = a1 + 104;
  v5 = a4;
  v103 = 0;
  v104 = 0;
  v105 = 1;
  v106 = 0;
  v7 = sub_1666AE0(a1 + 104, a4, &v103, &v97);
  v8 = qword_1C7F2C0;
  if ( v7 && !(_DWORD)v103 )
  {
    sub_182CBA0(qword_1C7F2C0, &v103);
    sub_182CBA0(v8, &v105);
    return sub_883EA0(a1, a2, (__int64)a3);
  }
  else
  {
    sub_182CBA0(qword_1C7F2C0, &v103);
    sub_182CBA0(v8, &v105);
    *(_QWORD *)v94 = 0;
    v95 = 0;
    v96[0] = 1;
    v96[1] = 0;
    if ( (unsigned __int8)sub_16679C0((int)v4, (int)a3, (int)v94, v9, v10, v11, &v105, v94, a3) )
    {
      v103 = 0;
      v104 = 0;
      v105 = 1;
      v106 = 0;
      sub_182CBA0(qword_1C7F2C0, v76);
      BYTE4(v105) &= ~1u;
      v15 = qword_1C7F2C0;
      LODWORD(v105) = 1;
      if ( (v96[0] & 0x100000000LL) != 0 || LODWORD(v96[0]) != 1 )
      {
        v17 = sub_1848D40(qword_1C7F2C0, &v103, v79);
        v15 = qword_1C7F2C0;
        v16 = v17;
      }
      else if ( (v103 & 0x100000000LL) != 0 || (v94[1] & 1) != 0 )
      {
        v73 = sub_182C7B0(qword_1C7F2C0, &v103, v79);
        v15 = qword_1C7F2C0;
        v16 = v73 < 0;
      }
      else
      {
        v16 = (int)v103 < v94[0];
      }
      sub_182CBA0(v15, &v103);
      sub_182CBA0(v15, v76);
      if ( v16 )
      {
        v61 = a1[9];
        v103 = 0;
        v104 = 0;
        v92 = v61;
        v105 = 1;
        v106 = 0;
        sub_182CBA0(qword_1C7F2C0, v76);
        v65 = a1[105];
        BYTE4(v105) &= ~1u;
        LODWORD(v105) = 1;
        if ( !v65 )
        {
          sub_16669E0(v4);
          v65 = a1[105];
        }
        v66 = sub_166A700(v65, (unsigned int)&v103, 0, v62, v63, v64);
        v90 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v103);
        sub_182CBA0(v90, v76);
        if ( v66 )
          ++*(_DWORD *)(v66 + 8);
        v67 = sub_15E1B70(a1[104]);
        v68 = sub_7E58C0((__int64)a1, v67);
        sub_7E5160((__int64)a1, v68 ^ 1, nullptr, v69, v70, v71);
        if ( v66 )
        {
          v60 = (*(_DWORD *)(v66 + 8))-- == 1;
          if ( v60 )
            sub_15D7BC0(v92, v66);
        }
      }
    }
    if ( (unsigned __int8)sub_16679C0((int)v4, v5, (int)v79, v12, v13, v14, v76, v79, v82) )
    {
      v103 = 0;
      v104 = 0;
      v105 = 1;
      v106 = 0;
      sub_182CBA0(qword_1C7F2C0, v77);
      BYTE4(v105) &= ~1u;
      v18 = qword_1C7F2C0;
      LODWORD(v105) = 1;
      if ( (v96[0] & 0x100000000LL) != 0 || LODWORD(v96[0]) != 1 )
      {
        v20 = sub_1848D40(qword_1C7F2C0, &v103, v80);
        v18 = qword_1C7F2C0;
        v19 = v20;
      }
      else if ( (v103 & 0x100000000LL) != 0 || (v94[1] & 1) != 0 )
      {
        v72 = sub_182C7B0(qword_1C7F2C0, &v103, v80);
        v18 = qword_1C7F2C0;
        v19 = v72 < 0;
      }
      else
      {
        v19 = (int)v103 < v94[0];
      }
      sub_182CBA0(v18, &v103);
      sub_182CBA0(v18, v77);
      if ( v19 )
      {
        v98 &= 0xFCu;
        v23 = qword_1C7F2C0;
        v101 &= 0xFCu;
        v97 = 0;
        v99 = 0;
        v100 = 1;
        v102 = 0;
        if ( (v96[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v97, v96);
        else
          v97 = v96[0];
        sub_182CBA0(v23, &v100);
        v100 = 1;
        v101 &= ~1u;
        v103 = 1;
        v104 = 0;
        v105 = 1;
        v106 = 0;
        sub_182CBA0(qword_1C7F2C0, v77);
        BYTE4(v105) &= ~1u;
        v24 = qword_1C7F2C0;
        LODWORD(v105) = 1;
        if ( (v101 & 1) == 0 && v100 == 1 )
        {
          if ( (v103 & 0x100000000LL) != 0 || (v98 & 1) != 0 )
          {
            v75 = sub_182C7B0(qword_1C7F2C0, &v103, &v97);
            v24 = qword_1C7F2C0;
            v26 = v75 < 0;
          }
          else
          {
            v26 = (int)v103 < v97;
          }
        }
        else
        {
          v25 = sub_1848D40(qword_1C7F2C0, &v103, &v97);
          v24 = qword_1C7F2C0;
          v26 = v25;
        }
        sub_182CBA0(v24, &v103);
        sub_182CBA0(v24, v77);
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v97);
        sub_182CBA0(v87, &v100);
        if ( v26 )
        {
          v27 = a1[9];
          v103 = 0;
          v104 = 0;
          v91 = v27;
          v105 = 1;
          v106 = 0;
          sub_182CBA0(qword_1C7F2C0, v77);
          v31 = a1[105];
          BYTE4(v105) &= ~1u;
          LODWORD(v105) = 1;
          if ( !v31 )
          {
            sub_16669E0(v4);
            v31 = a1[105];
          }
          sub_166A700(v31, (unsigned int)&v103, 0, v28, v29, v30);
          v88 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          sub_182CBA0(v88, v77);
          v32 = sub_15E1B70(a1[104]);
          v83 = (_DWORD *)v32;
          if ( v32 )
            ++*(_DWORD *)(v32 + 8);
          v33 = a1[9];
          v98 &= 0xFCu;
          v101 &= 0xFCu;
          v34 = qword_1C7F2C0;
          v93 = v33;
          v97 = 0;
          v99 = 0;
          v100 = 1;
          v102 = 0;
          if ( (v94[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v97, v80);
          else
            v97 = v94[0];
          sub_182CBA0(v34, &v100);
          v100 = 1;
          v101 &= ~1u;
          v103 = 1;
          v104 = 0;
          v105 = 1;
          v106 = 0;
          sub_182CBA0(qword_1C7F2C0, v77);
          BYTE4(v105) &= ~1u;
          LODWORD(v105) = 1;
          if ( (v101 & 1) == 0 && v100 == 1 )
          {
            if ( (v103 & 0x100000000LL) != 0 || (v98 & 1) != 0 )
              v35 = (int)sub_182C7B0(qword_1C7F2C0, &v103, &v97) < 0;
            else
              v35 = (int)v103 < v97;
          }
          else
          {
            v35 = sub_1848D40(qword_1C7F2C0, &v103, &v97);
          }
          v89 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          sub_182CBA0(v89, v77);
          v85 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v97);
          v36 = 0;
          sub_182CBA0(v85, &v100);
          if ( v35 )
          {
            BYTE4(v103) &= 0xFCu;
            v37 = qword_1C7F2C0;
            BYTE4(v105) &= 0xFCu;
            LODWORD(v103) = 0;
            v104 = 0;
            LODWORD(v105) = 1;
            v106 = 0;
            if ( (v94[1] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v103, v80);
            else
              LODWORD(v103) = v94[0];
            sub_182CBA0(v37, v77);
            v41 = a1[105];
            BYTE4(v105) &= ~1u;
            LODWORD(v105) = 1;
            if ( !v41 )
            {
              sub_16669E0(v4);
              v41 = a1[105];
            }
            sub_166A700(v41, (unsigned int)&v103, 0, v38, v39, v40);
            v42 = sub_15E1B70(a1[104]);
            v36 = v42;
            if ( v42 )
              ++*(_DWORD *)(v42 + 8);
            v43 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v103);
            sub_182CBA0(v43, v77);
          }
          v44 = a1[9];
          v45 = qword_1C7F2C0;
          LODWORD(v103) = 0;
          BYTE4(v103) &= 0xFCu;
          BYTE4(v105) &= 0xFCu;
          v86 = v44;
          v104 = 0;
          LODWORD(v105) = 1;
          v106 = 0;
          if ( (v96[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v103, v96);
          else
            LODWORD(v103) = v96[0];
          sub_182CBA0(v45, v77);
          v49 = a1[105];
          BYTE4(v105) &= ~1u;
          LODWORD(v105) = 1;
          if ( !v49 )
          {
            sub_16669E0(v4);
            v49 = a1[105];
          }
          sub_166A700(v49, (unsigned int)&v103, 0, v46, v47, v48);
          v50 = sub_15E1B70(a1[104]);
          v51 = *(_WORD *)(v36 + 4);
          v52 = a1[104];
          if ( v51 || (v53 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL)) == nullptr || *v53 != 5 || (v55 = v36, v53[1]) )
          {
            if ( *(_WORD *)(v50 + 4)
              || (v54 = *(_DWORD **)(*(_QWORD *)(v50 + 16) + 24LL)) == nullptr
              || *v54 != 5
              || v54[1] )
            {
              v55 = v36;
              if ( *(_DWORD *)v50 >= *(_DWORD *)v36 )
              {
                v55 = v50;
                v51 = *(_WORD *)(v50 + 4);
                v50 = v36;
              }
            }
            else
            {
              v55 = v50;
              v51 = 0;
              v50 = v36;
            }
          }
          if ( v50 == v55 )
          {
            v57 = *(_QWORD *)(v52 + 856);
          }
          else if ( *(_WORD *)(v50 + 4)
                 || (v56 = *(_DWORD **)(*(_QWORD *)(v50 + 16) + 24LL)) == nullptr
                 || *v56 != 5
                 || v56[1]
                 || v51
                 || (v74 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL)) == nullptr
                 || *v74 != 5
                 || v74[1] )
          {
            v57 = sub_15E1B70(v52);
          }
          else
          {
            v57 = *(_QWORD *)(v52 + 864);
          }
          if ( v57 )
            ++*(_DWORD *)(v57 + 8);
          v84 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          sub_182CBA0(v84, v77);
          v58 = sub_7E58C0((__int64)a1, v57);
          v59 = sub_7E58C0((__int64)a1, (__int64)v83);
          sub_7E5400((__int64)a1, v59 ^ 1, v58, nullptr);
          if ( v57 )
          {
            v60 = (*(_DWORD *)(v57 + 8))-- == 1;
            if ( v60 )
              sub_15D7BC0(v86, v57);
          }
          v60 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v60 )
            sub_15D7BC0(v93, v36);
          if ( v83 )
          {
            v78 = v83[2];
            v83[2] = v78 - 1;
            if ( v78 == 1 )
              sub_15D7BC0(v91, v83);
          }
        }
      }
    }
    v21 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v80);
    return sub_182CBA0(v21, v96);
  }
}

