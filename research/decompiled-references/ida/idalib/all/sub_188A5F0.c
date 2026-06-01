__int64 __fastcall sub_188A5F0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int8 a5,
        double a6,
        double a7)
{
  __int64 v9; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  __int64 v33; // rdx
  unsigned __int8 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned __int8 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned int *v47; // r14
  __int64 **v48; // rbp
  unsigned __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbp
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rdi
  unsigned __int8 v71; // al
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  bool v77; // al
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rbx
  bool v86; // al
  unsigned int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rdi
  unsigned int *v90; // rax
  __int64 v91; // [rsp-10h] [rbp-118h]
  __int64 v92; // [rsp-8h] [rbp-110h]
  __int64 v94; // [rsp+8h] [rbp-100h]
  unsigned int v95; // [rsp+8h] [rbp-100h]
  unsigned __int8 v96; // [rsp+8h] [rbp-100h]
  __int64 v97; // [rsp+10h] [rbp-F8h]
  __int64 v98; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v99; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v100; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v101; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v102; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v103[200]; // [rsp+40h] [rbp-C8h] BYREF

  v9 = a2;
  v97 = a2 + 72;
  v11 = sub_B72690(a2 + 72);
  v13 = v11 - 64;
  if ( v11 )
    v11 -= 64LL;
  v99 = v11;
  if ( a3 == 2 )
    goto LABEL_7;
  if ( a3 <= 2 )
  {
    if ( a3 != 1 )
      goto LABEL_9;
  }
  else if ( a3 != 3 )
  {
    if ( a3 == 4 )
    {
LABEL_7:
      v14 = sub_B771C0(a2, a2, v13, v12);
      v17 = *(_QWORD *)(a2 + 120);
      v18 = *(_QWORD *)(v17 + 8LL * v14);
      v19 = *(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v20 = *(_QWORD *)v19;
      if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) == 44
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44
        && (v20 = sub_F63050(v20, a2, v17, v15)) != 0 )
      {
        v21 = sub_9B4870(v20, a2, v17, v15, v16);
        if ( (((unsigned __int8)byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v21) & 7) == 0 )
          goto LABEL_9;
      }
      if ( !a5 )
        return 0;
      sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(v18 + 24), 0x17F7u, 0);
      v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v51 = sub_1587DB0((__int64)v103, &v102);
      v100 = *(_QWORD *)(v18 + 48);
      v52 = sub_162B6D0(v51, &v100);
      v53 = *(_QWORD *)(a1 + 248);
      v54 = v52;
      v59 = sub_A7A9D0(v53, v99, v55, v56, v57, v58);
      v60 = sub_A72DD0(v53, v59);
LABEL_35:
      v101 = v60;
      sub_162B6D0(v54, (__int64 *)&v101);
      sub_15F7200(v103);
      return 0;
    }
LABEL_9:
    LOBYTE(v22) = 0;
    goto LABEL_10;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * (unsigned __int8)sub_B771C0(a2, a2, v13, v12));
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v33 + 16) - 43 > 1
    && (v33 = sub_1838000(*(_QWORD *)(*(_QWORD *)(v32 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v33, v30)) == 0
    || (v34 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 212LL),
        v94 = v33,
        v35 = sub_9B4870(v33, a2, v33, v30, v31),
        v37 = v34 >> 4,
        ((*(_DWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v35) & 7) != 1)
    && v37 <= 7u )
  {
    if ( !a5 )
      return 0;
    sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(v32 + 24), 0x17F7u, 0);
    v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v61 = sub_1587DB0((__int64)v103, &v102);
    v100 = *(_QWORD *)(v32 + 48);
    v62 = sub_162B6D0(v61, &v100);
    v63 = *(_QWORD *)(a1 + 248);
    v54 = v62;
    v68 = sub_A7A9D0(v63, v99, v64, v65, v66, v67);
    v60 = sub_A73030(v63, v68 | 1, 1u);
    goto LABEL_35;
  }
  LOBYTE(v22) = 1;
  v38 = sub_9B4870(v94, a2, v94, v35 & 0xFFFFFFFFFFFFFFF0LL, v36);
  if ( (v38 & 1) == 0 )
    v22 = *(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
LABEL_10:
  v23 = sub_B770E0(a2, a2);
  if ( v23 < (unsigned int)sub_B76070(a2, a2, v24, v25) )
  {
    if ( a5 )
    {
      v69 = sub_B770E0(a2, a2);
      sub_168B9F0(
        (__int64)v103,
        (__int64 *)(a1 + 8),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * v69) + 24LL),
        0x17F0u,
        0);
      v70 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * (unsigned int)sub_B770E0(a2, a1 + 8));
      v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
      sub_1587DB0((__int64)v103, &v102);
      sub_15F7200(v103);
      return 0;
    }
    return 0;
  }
  if ( sub_B748A0(a2, a2, v26, v27) )
  {
    if ( a5 )
    {
      sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x17FAu, 0);
      sub_15F7200(v103);
      return 0;
    }
    return 0;
  }
  v43 = sub_1845530(v99, a2, v39, v40, v41, v42);
  v46 = (unsigned __int8)v22;
  v95 = (unsigned __int8)v22;
  if ( v43 != v44 )
  {
    v98 = a2;
    v47 = (unsigned int *)v44;
    v48 = (__int64 **)v43;
    do
    {
      v49 = sub_1839D10(v48[2], a2, v44, v46, v45);
      a2 = *(unsigned int *)v48;
      v50 = sub_1889AD0(a1, a2, v49, v95, (unsigned int)a3, 0, a6, a7, a4, a5);
      v44 = v91;
      v46 = v92;
      if ( !(_BYTE)v50 )
        return v50;
      v48 += 3;
    }
    while ( v47 != (unsigned int *)v48 );
    v9 = v98;
  }
  v71 = sub_188A260(a1, v99, (unsigned int)a3, v95, a4, a5, a6, a7);
  if ( !v71 )
    return 0;
  v96 = v71;
  if ( a3 == 5 )
  {
    v86 = sub_AED5B0(v9);
    v28 = v96;
    if ( !v86 )
      return v28;
    if ( a5 )
    {
      sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 24), 0x17FBu, 0);
      sub_185AB80((__int64)v103, (__int64 *)&v99);
      sub_15F7200(v103);
      return 0;
    }
    return 0;
  }
  v72 = sub_B72690(v97);
  v76 = v72 - 64;
  if ( v72 )
    v72 -= 64LL;
  v77 = sub_ED8AE0(v72, v99, v73, v76, v74, v75);
  v28 = v96;
  if ( v77 )
  {
    if ( a5 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v99 + 104) + 96LL), *(_QWORD *)(v99 + 104), v96, v78, v79, v80);
      if ( *(_DWORD *)(*(_QWORD *)(v99 + 128) + 20LL) )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v99 + 104) + 96LL), *(_QWORD *)(v99 + 104), v81, v82, v83, v84);
        v89 = *(_QWORD *)(v99 + 128);
        if ( (*(_BYTE *)(v89 + 32) & 1) != 0 )
          v90 = (unsigned int *)sub_B969C0(v89);
        else
          v90 = *(unsigned int **)(v89 + 32);
        sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *v90, 0x17F3u, 0);
        v88 = sub_185AB80((__int64)v103, (__int64 *)&v99);
        LODWORD(v102) = 1;
      }
      else
      {
        v85 = sub_183A900(v99);
        while ( !sub_AED5B0(v85) )
        {
          do
            v85 = *(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          while ( (*(_BYTE *)(v85 + 28) & 0x7Fu) - 35 > 3 );
        }
        v87 = sub_B73090(v85);
        sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), v87, 0x17F3u, 0);
        v88 = sub_185AB80((__int64)v103, (__int64 *)&v99);
        LODWORD(v102) = 0;
      }
      sub_1587D10(v88, (int *)&v102);
      sub_15F7200(v103);
    }
    return 0;
  }
  return v28;
}
