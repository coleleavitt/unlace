__int64 __fastcall sub_AB78E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // r12
  int *v8; // rax
  unsigned int v9; // r15d
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  _DWORD *v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  _DWORD *v25; // r13
  bool v26; // zf
  __int64 v27; // r14
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  __int64 v32; // rax
  _DWORD *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r12
  __int64 v36; // r12
  unsigned int v37; // r13d
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdi
  _DWORD *v44; // r12
  void *v45; // r13
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rdi
  unsigned int *v50; // rax
  unsigned int *v51; // rax
  unsigned int v52; // r13d
  void *v53; // r12
  void *v54; // r13
  int v55; // edx
  __int64 v56; // rdx
  char v57; // cl
  __int64 v58; // rax
  void *v59; // r13
  _DWORD *v60; // r15
  __int64 v61; // rdi
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v66; // [rsp-10h] [rbp-170h]
  __int64 v67; // [rsp-8h] [rbp-168h]
  __int64 v68; // [rsp+18h] [rbp-148h]
  __int64 v69; // [rsp+20h] [rbp-140h]
  __int64 v70; // [rsp+28h] [rbp-138h]
  __int64 v71; // [rsp+38h] [rbp-128h]
  __int64 v72; // [rsp+40h] [rbp-120h]
  __int64 v73; // [rsp+48h] [rbp-118h]
  __int64 v74; // [rsp+58h] [rbp-108h]
  __int64 v75; // [rsp+58h] [rbp-108h]
  __int64 v76; // [rsp+58h] [rbp-108h]
  _DWORD *v77; // [rsp+60h] [rbp-100h]
  unsigned int v78; // [rsp+6Ch] [rbp-F4h]
  _DWORD *v79; // [rsp+70h] [rbp-F0h]
  unsigned int v80; // [rsp+70h] [rbp-F0h]
  void *v81; // [rsp+78h] [rbp-E8h]
  _DWORD *v82; // [rsp+78h] [rbp-E8h]
  __int64 v83; // [rsp+88h] [rbp-D8h]
  __int64 v84; // [rsp+88h] [rbp-D8h]
  unsigned int v85; // [rsp+A4h] [rbp-BCh] BYREF
  int v86[2]; // [rsp+A8h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-B0h] BYREF
  char v88; // [rsp+B8h] [rbp-A8h]
  __int64 v89; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-98h]
  int v91; // [rsp+D0h] [rbp-90h] BYREF
  char v92; // [rsp+D4h] [rbp-8Ch]
  __int64 v93; // [rsp+D8h] [rbp-88h]
  int v94; // [rsp+E0h] [rbp-80h]
  char v95; // [rsp+E4h] [rbp-7Ch]
  __int64 v96; // [rsp+E8h] [rbp-78h]
  int v97; // [rsp+F0h] [rbp-70h] BYREF
  char v98; // [rsp+F4h] [rbp-6Ch]
  __int64 v99; // [rsp+F8h] [rbp-68h]
  int v100; // [rsp+100h] [rbp-60h] BYREF
  char v101; // [rsp+104h] [rbp-5Ch]
  __int64 v102; // [rsp+108h] [rbp-58h]
  unsigned int *v103; // [rsp+110h] [rbp-50h] BYREF
  __int64 v104; // [rsp+118h] [rbp-48h]
  __int64 v105; // [rsp+120h] [rbp-40h] BYREF
  __int64 v106; // [rsp+128h] [rbp-38h]

  v3 = sub_15D2CD0(*(_QWORD *)(a1 + 104), 5, 1, 0, 0);
  v4 = *(_QWORD *)(a1 + 24);
  v87 = v3;
  v5 = *(_DWORD **)(a2 + 32);
  v88 = 1;
  v77 = v5;
  *(_QWORD *)v86 = a2;
  v69 = v4;
  v6 = sub_15DCAD0(v4, (int)v86, 0);
  v7 = (_DWORD *)v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v8 + 8) )
    sub_DBF6E(0);
  v9 = *v8;
  v103 = (unsigned int *)(&dword_0 + 2);
  v104 = 0;
  v105 = 1;
  v106 = 0;
  sub_182CBA0(qword_1C7F2C0, &v105);
  BYTE4(v105) &= ~1u;
  v92 &= 0xFCu;
  v95 &= 0xFCu;
  LODWORD(v105) = 1;
  v91 = 0;
  v93 = 0;
  v94 = 1;
  v96 = 0;
  sub_184BE60(qword_1C7F2C0, &v103, v9, &v91);
  sub_25A130((char *)&v103);
  v13 = *(_QWORD *)(a1 + 112);
  v68 = a1 + 104;
  if ( !v13 )
  {
    sub_16669E0(a1 + 104);
    v13 = *(_QWORD *)(a1 + 112);
  }
  sub_166A700(v13, (unsigned int)&v91, 1, v10, v11, v12);
  v14 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 104));
  v15 = v14;
  if ( v14 )
    ++v14[2];
  v85 = sub_966380(a1, v7, v14);
  sub_9936C0(*(_QWORD *)(a1 + 16), v85 >> 1);
  v83 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v83 + 912) )
  {
    v103 = nullptr;
    v16 = sub_186B270(0x10u);
    v103 = (unsigned int *)(v16 + 8);
    *(_DWORD *)(v16 + 8) = v85;
    *(_QWORD *)v16 = 0x100000002LL;
    sub_966E60(a1, &v103);
    if ( v103 )
      sub_186B220(v103 - 2);
  }
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v85, 0, 0, 1);
  v19 = v66;
  v20 = v67;
  if ( *(_QWORD *)(v83 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  v89 = *(_QWORD *)(a1 + 24);
  v21 = sub_AB3F30(a1, (unsigned int *)a2, v17, v18, v19, v20);
  v22 = sub_AB6F20(a1, v21);
  v90 = 0;
  sub_AB6A00(a1, v22, (__int64)&v89);
  v71 = v90;
  if ( v9 )
  {
    v84 = 0;
    v70 = v9;
    while ( 1 )
    {
      v103 = (unsigned int *)(&dword_0 + 2);
      v104 = 0;
      v105 = 1;
      v106 = 0;
      sub_182CBA0(qword_1C7F2C0, &v105);
      LODWORD(v105) = 1;
      BYTE4(v105) &= ~1u;
      v98 &= 0xFCu;
      v101 &= 0xFCu;
      v97 = 0;
      v99 = 0;
      v100 = 1;
      v102 = 0;
      sub_184BE60(qword_1C7F2C0, &v103, (unsigned int)v84, &v97);
      v54 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v103);
      sub_182CBA0(v54, &v105);
      v103 = (unsigned int *)(&dword_0 + 2);
      v104 = 0;
      v105 = 1;
      v106 = 0;
      sub_182CBA0(qword_1C7F2C0, &v105);
      v55 = (int)v103;
      LODWORD(v103) = v91;
      v91 = v55;
      v56 = v104;
      v104 = v93;
      v93 = v56;
      v57 = BYTE4(v103) & 1;
      LOBYTE(v56) = v92 & 0xFC | BYTE4(v103) & 2;
      BYTE4(v103) = v92 & 1 | BYTE4(v103) & 0xFC | v92 & 2;
      v92 = v57 | v56;
      LODWORD(v105) = v94;
      v58 = v96;
      v96 = v106;
      v106 = v58;
      v94 = 1;
      LOBYTE(v56) = v95 & 0xFC | BYTE4(v105) & 2;
      BYTE4(v105) = v95 & 1 | v95 & 2 | BYTE4(v105) & 0xFC;
      v95 = v56;
      v59 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v103);
      sub_182CBA0(v59, &v105);
      v60 = v77;
      v73 = *(_QWORD *)(a1 + 24);
      if ( v84 )
      {
        v61 = *(_QWORD *)(a1 + 112);
        if ( !v61 )
        {
          sub_16669E0(v68);
          v61 = *(_QWORD *)(a1 + 112);
        }
        sub_166A700(v61, (unsigned int)&v97, 1, v62, v63, v64);
        v60 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 104));
      }
      if ( v60 )
        ++v60[2];
      v23 = *(_QWORD *)(a1 + 112);
      if ( !v23 )
      {
        sub_16669E0(v68);
        v23 = *(_QWORD *)(a1 + 112);
      }
      sub_166A700(v23, (unsigned int)&v91, 1, v62, v63, v64);
      v24 = sub_15E1B70(*(_QWORD *)(a1 + 104));
      v25 = (_DWORD *)v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      if ( v15 )
      {
        v26 = v15[2]-- == 1;
        if ( v26 )
          sub_15D7BC0(v69, v15);
      }
      v103 = (unsigned int *)(&dword_0 + 1);
      v104 = 0;
      v27 = *(_QWORD *)(a1 + 16);
      v105 = 1;
      v106 = 0;
      sub_182CBA0(qword_1C7F2C0, &v105);
      v31 = *(_QWORD *)(a1 + 112);
      BYTE4(v105) &= ~1u;
      LODWORD(v105) = 1;
      if ( !v31 )
      {
        sub_16669E0(v68);
        v31 = *(_QWORD *)(a1 + 112);
      }
      v79 = (_DWORD *)sub_166A700(v31, (unsigned int)&v103, 1, v28, v29, v30);
      v81 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v103);
      sub_182CBA0(v81, &v105);
      v32 = sub_8E7230(v27, v25, v79);
      v15 = (_DWORD *)v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      if ( v25 )
      {
        v26 = v25[2]-- == 1;
        if ( v26 )
          sub_15D7BC0(v69, v25);
      }
      v33 = *(_DWORD **)(v71 + 8 * v84);
      v82 = v33;
      if ( v33 )
        ++v33[2];
      if ( v7 )
      {
        v26 = v7[2]-- == 1;
        if ( v26 )
          sub_15D7BC0(v69, v7);
      }
      v34 = sub_966380(a1, v82, v15);
      v35 = *(_QWORD *)(a1 + 16);
      v85 = v34;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v35 + 7488) + 48LL))(
        *(_QWORD *)(v35 + 7488),
        *(_QWORD *)(*(_QWORD *)(v35 + 8840) + 8LL * (v34 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 7488) + 64LL))(*(_QWORD *)(v35 + 7488));
      v36 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v36 + 912) )
      {
        v103 = nullptr;
        v37 = v85;
        v38 = sub_186B270(0x10u);
        *(_DWORD *)(v38 + 8) = v37;
        v103 = (unsigned int *)(v38 + 8);
        *(_QWORD *)v38 = 0x100000002LL;
        sub_966E60(a1, &v103);
        if ( v103 )
          sub_186B220(v103 - 2);
      }
      sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v85, 0, 0, 1);
      if ( *(_QWORD *)(v36 + 912) )
        std::__ostream_insert<char,std::char_traits<char>>();
      v39 = *(_QWORD *)(a1 + 24);
      v103 = nullptr;
      v104 = 0;
      v72 = v39;
      v105 = 1;
      v106 = 0;
      sub_182CBA0(qword_1C7F2C0, &v105);
      v43 = *(_QWORD *)(a1 + 112);
      BYTE4(v105) &= ~1u;
      LODWORD(v105) = 1;
      if ( !v43 )
      {
        sub_16669E0(v68);
        v43 = *(_QWORD *)(a1 + 112);
      }
      v44 = (_DWORD *)sub_166A700(v43, (unsigned int)&v103, 1, v40, v41, v42);
      v45 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v103);
      sub_182CBA0(v45, &v105);
      if ( v44 )
        ++v44[2];
      v49 = *(_QWORD *)(a1 + 112);
      if ( !v49 )
      {
        sub_16669E0(v68);
        v49 = *(_QWORD *)(a1 + 112);
      }
      sub_166A700(v49, (unsigned int)&v97, 1, v46, v47, v48);
      v50 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 104));
      v80 = sub_966440(a1, v50);
      v51 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 104));
      v52 = sub_966440(a1, v51);
      v78 = sub_966380(a1, v60, v44);
      v74 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v74 + 7488) + 48LL))(
        *(_QWORD *)(v74 + 7488),
        *(_QWORD *)(*(_QWORD *)(v74 + 8840) + 8LL * (v80 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 7488) + 64LL))(*(_QWORD *)(v74 + 7488));
      v75 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v75 + 7488) + 48LL))(
        *(_QWORD *)(v75 + 7488),
        *(_QWORD *)(*(_QWORD *)(v75 + 8840) + 8LL * (v52 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v75 + 7488) + 64LL))(*(_QWORD *)(v75 + 7488));
      v76 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v76 + 7488) + 48LL))(
        *(_QWORD *)(v76 + 7488),
        *(_QWORD *)(*(_QWORD *)(v76 + 8840) + 8LL * (v78 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v76 + 7488) + 64LL))(*(_QWORD *)(v76 + 7488));
      sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v80, v52 ^ 1, v78, 0, 0);
      if ( v44 )
      {
        v26 = v44[2]-- == 1;
        if ( v26 )
          sub_15D7BC0(v72, v44);
      }
      if ( v60 )
      {
        v26 = v60[2]-- == 1;
        if ( v26 )
          sub_15D7BC0(v73, v60);
      }
      v53 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v97);
      sub_182CBA0(v53, &v100);
      if ( ++v84 == v70 )
        break;
      v7 = v82;
    }
  }
  else
  {
    v82 = v7;
  }
  sub_2334C0(&v89);
  sub_25A130((char *)&v91);
  sub_AB3AA0((__int64)v15, v69);
  sub_AB3AA0((__int64)v82, v69);
  return sub_15D0DF0(&v87);
}

