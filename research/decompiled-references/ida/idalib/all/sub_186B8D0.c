unsigned __int64 __fastcall sub_186B8D0(__int64 *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r15
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdi
  __int64 v57; // r15
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  char *v73; // r14
  unsigned __int8 v74; // r15
  signed __int64 v75; // rdx
  _BYTE *v76; // rax
  char *v77; // rdx
  signed __int64 v78; // rcx
  _BYTE *v79; // r9
  __int64 v80; // r8
  unsigned __int64 v81; // rax
  void *v82; // rdi
  size_t v83; // rax
  size_t v84; // rax
  char *v85; // rax
  size_t v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r15
  size_t v93; // rax
  char v94; // al
  size_t v95; // rax
  __int64 v96; // [rsp+0h] [rbp-138h]
  __int64 v97; // [rsp+0h] [rbp-138h]
  __int64 v98; // [rsp+0h] [rbp-138h]
  _QWORD *v99; // [rsp+0h] [rbp-138h]
  char *v100; // [rsp+0h] [rbp-138h]
  unsigned __int64 v101; // [rsp+0h] [rbp-138h]
  __int64 v102; // [rsp+0h] [rbp-138h]
  signed __int64 v103; // [rsp+8h] [rbp-130h]
  __int64 v104; // [rsp+18h] [rbp-120h]
  char *v105; // [rsp+18h] [rbp-120h]
  __int64 v106; // [rsp+28h] [rbp-110h]
  char *v107; // [rsp+30h] [rbp-108h]
  int v108; // [rsp+4Ch] [rbp-ECh] BYREF
  void *v109; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v110; // [rsp+58h] [rbp-E0h]
  _QWORD v111[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *v112; // [rsp+70h] [rbp-C8h] BYREF
  char *v113; // [rsp+78h] [rbp-C0h]

  v8 = sub_B60530((__int64 *)(a1[31] + 22888), a2);
  if ( !v8 )
  {
    v109 = v111;
    v84 = j__strlen("std::");
    sub_18390F0(&v109, "std::", (__int64)&aStd[v84]);
    v85 = (char *)sub_B60230(a2);
    if ( v86 > 0x7FFFFFFFFFFFFFFFLL - v110 )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v109, v85, v86);
    sub_168B9F0((__int64)&v112, a1 + 1, a3, 0xF6Au, 0);
    v87 = sub_1682A40((__int64)&v112, (__int64)&v109);
    v108 = a4;
    sub_1587D10(v87, &v108);
    sub_15F7200(&v112);
    v82 = v109;
    result = 0;
    if ( v109 == v111 )
      return result;
LABEL_41:
    v101 = result;
    operator delete(v82);
    return v101;
  }
  v11 = a1[539];
  v12 = v8;
  v13 = (unsigned __int8)a2;
  if ( (v11 & 1) == 0 )
  {
    v14 = *(_QWORD *)v11;
    v15 = a2;
    if ( ((*(_QWORD *)(*(_QWORD *)v11 + 8LL * ((unsigned __int8)a2 >> 6)) >> a2) & 1) == 0 )
      goto LABEL_4;
LABEL_11:
    v24 = sub_183D350((__int64)a1);
    v25 = sub_E91C40((_QWORD *)a1[31], 0, v24);
    v26 = a1[31];
    v27 = (__int64)v25;
    v28 = sub_B60220(v12);
    v29 = sub_A76250(v26, 6, v27, v28, 0);
    if ( (unsigned __int8)sub_1E63CF0(a1, a3, v29, 1, 3968) )
      return 0;
    return sub_B60220(v12);
  }
  v14 = -1;
  v15 = (unsigned __int8)a2;
  if ( ((((v11 >> 1) & ~(-1LL << ((unsigned __int64)a1[539] >> 58))) >> a2) & 1) != 0 )
    goto LABEL_11;
LABEL_4:
  v16 = *(_QWORD *)(v8 + 104);
  v17 = *(_QWORD *)(v16 + 128);
  if ( v17 )
  {
LABEL_5:
    v17 = *(_QWORD *)(v17 + 88);
LABEL_6:
    *(_QWORD *)(v12 + 104) = v17;
    goto LABEL_7;
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(v16 + 104) + 96LL), *(_QWORD *)(v16 + 104), v14, v15, v9, v10);
  if ( *(_QWORD *)(v16 + 128) )
  {
    v92 = *(_QWORD *)(v12 + 104);
    v17 = *(_QWORD *)(v92 + 128);
    if ( !v17 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v92 + 104) + 96LL), *(_QWORD *)(v92 + 104), v88, v89, v90, v91);
      v17 = *(_QWORD *)(v92 + 128);
      if ( !v17 )
        goto LABEL_6;
    }
    goto LABEL_5;
  }
LABEL_7:
  v18 = sub_183D350((__int64)a1);
  v19 = sub_E91C40((_QWORD *)a1[31], 0, v18);
  v20 = a1[31];
  v96 = (__int64)v19;
  v21 = sub_B60220(v12);
  v22 = sub_A76250(v20, 6, v96, v21, 0);
  if ( (unsigned __int8)sub_1E63CF0(a1, a3, v22, 1, 3968) )
    return 0;
  v109 = a1;
  LODWORD(v110) = a3;
  v30 = sub_183D350((__int64)a1);
  v31 = sub_E91C40((_QWORD *)a1[31], 0, v30);
  v32 = a1[31];
  v97 = (__int64)v31;
  v33 = sub_B60220(v12);
  v111[0] = sub_A76250(v32, 6, v97, v33, 0);
  if ( !sub_B9E190(*(_QWORD *)(v12 + 104), 6, v34, v35, v36, v37) )
  {
    v83 = j__strlen(&byte_22F0C30);
    return sub_186B4C0((__int64)&v109, 2u, &byte_22F0C30, v83, nullptr);
  }
  v42 = *(_QWORD *)(v12 + 104);
  sub_7052B0((__int64 *)(*(_QWORD *)(v42 + 104) + 96LL), *(_QWORD *)(v42 + 104), v38, v39, v40, v41);
  v46 = *(_QWORD *)(v42 + 128);
  if ( (*(_BYTE *)(v46 + 24) & 1) != 0 )
    v47 = sub_B96980(v46);
  else
    v47 = *(_QWORD *)(v46 + 24);
  v98 = v47;
  sub_7052B0((__int64 *)(*(_QWORD *)(v42 + 104) + 96LL), *(_QWORD *)(v42 + 104), v47, v43, v44, v45);
  v48 = *(_QWORD *)(v42 + 104);
  v104 = v98 + 24LL * *(unsigned int *)(*(_QWORD *)(v42 + 128) + 16LL);
  sub_7052B0((__int64 *)(v48 + 96), v48, v98, v49, v50, v51);
  v56 = *(_QWORD *)(v42 + 128);
  if ( (*(_BYTE *)(v56 + 24) & 1) != 0 )
    v57 = sub_B96980(v56);
  else
    v57 = *(_QWORD *)(v56 + 24);
  for ( ; v57 != v104; v57 += 24 )
  {
    v58 = sub_1839D10(*(__int64 **)(v57 + 16), v48, v52, v53, v54);
    v63 = sub_F63270(*(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL), v48, v59, v60, v61, v62);
    v48 = v63[13];
    v99 = v63;
    sub_7052B0((__int64 *)(v48 + 96), v48, v64, v65, v66, v67);
    v53 = (__int64)v99;
    if ( (*(_BYTE *)(v99[16] + 1LL) & 2) == 0 )
      goto LABEL_46;
  }
  v68 = sub_B7E900(*(_QWORD *)(v12 + 104), v48, v52, v53, v54, v55);
  if ( !v68 )
    goto LABEL_46;
  v71 = 0;
  v72 = *(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v72 )
  {
    while ( 1 )
    {
      v69 = (*(_BYTE *)(v72 + 28) & 0x7Fu) - 49;
      if ( (unsigned int)v69 > 2 )
        break;
LABEL_47:
      ++v71;
      v72 = *(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v72 )
        goto LABEL_27;
    }
    while ( 1 )
    {
      v69 = *(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v72 = v69;
      if ( !v69 )
        break;
      v69 = (*(_BYTE *)(v69 + 28) & 0x7Fu) - 49;
      if ( (unsigned int)v69 <= 2 )
        goto LABEL_47;
    }
  }
LABEL_27:
  if ( v71 || !sub_C1C400(*(_QWORD *)(*(_QWORD *)(v68 + 48) & 0xFFFFFFFFFFFFFFF0LL), 1, v69, v72, v70) )
  {
LABEL_46:
    v93 = j__strlen(&byte_22F0C30);
    return sub_186B4C0((__int64)&v109, 3u, &byte_22F0C30, v93, nullptr);
  }
  sub_B603F0((__int64)&v112, a2);
  v73 = (char *)v112;
  v105 = v113;
  if ( v113 == v112 )
  {
LABEL_54:
    if ( v112 )
      operator delete(v112);
    LODWORD(v113) = v13;
    v112 = a1 + 539;
    sub_183AAE0((unsigned __int64 **)&v112, 1);
    return sub_B60220(v12);
  }
  while ( 1 )
  {
    v74 = *v73;
    v100 = sub_B60270(*v73);
    v103 = v75;
    v76 = sub_B614A0(v12, v74);
    v77 = v100;
    v78 = v103;
    v79 = v76;
    if ( !v76 )
    {
      result = sub_186B4C0((__int64)&v109, 1u, v100, v103, nullptr);
      goto LABEL_36;
    }
    v80 = *((_QWORD *)v76 + 1);
    if ( (*(_BYTE *)(v80 + 28) & 0x7F) == 0x2B )
      goto LABEL_35;
    v81 = *(_QWORD *)(v80 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v80 + 16) & 4) != 0 )
      v81 = *(_QWORD *)v81;
    if ( ((*(_BYTE *)(v81 + 8) + 70) & 0x7Fu) > 3
      || (v107 = v100,
          v102 = v80,
          v106 = (__int64)v79,
          v94 = sub_B7D2B0(v80, a1[31]),
          v80 = v102,
          v77 = v107,
          v78 = v103,
          !v94) )
    {
LABEL_35:
      result = sub_186B4C0((__int64)&v109, 0, v77, v78, (unsigned int *)v80);
      goto LABEL_36;
    }
    if ( !(unsigned __int8)sub_B60070(v106) )
      break;
    ++v73;
    sub_1907590(a1, a3, v102);
    if ( v105 == v73 )
      goto LABEL_54;
  }
  v95 = j__strlen(&byte_22F0C30);
  result = sub_186B4C0((__int64)&v109, 3u, &byte_22F0C30, v95, nullptr);
LABEL_36:
  v82 = v112;
  if ( v112 )
    goto LABEL_41;
  return result;
}
