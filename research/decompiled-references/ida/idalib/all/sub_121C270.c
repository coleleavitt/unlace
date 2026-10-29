void __fastcall sub_121C270(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6)
{
  __int64 v8; // rbp
  int v9; // r14d
  void *v10; // rbx
  const void *v11; // r15
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // r14
  int v16; // eax
  char v17; // di
  char v18; // di
  char v19; // di
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  char v26; // di
  char v27; // di
  int v28; // eax
  int v29; // eax
  char v30; // di
  char v31; // di
  char v32; // bl
  __int64 v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  __int64 v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  __int64 v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  __int64 v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  __int64 v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  __int64 v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  __int64 v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  __int64 v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  __int64 v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  __int64 v64; // rax
  size_t v65; // rax
  size_t v66; // rax
  __int64 v67; // rax
  size_t v68; // rax
  size_t v69; // rax
  __int64 v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  __int64 v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  __int64 v76; // rax
  __int64 *v77; // r13
  __int64 *v78; // rax
  __int64 *v79; // rax
  __int64 *v80; // rax
  char **i; // r15
  size_t v83; // [rsp+8h] [rbp-F90h]
  size_t v84; // [rsp+8h] [rbp-F90h]
  size_t v85; // [rsp+8h] [rbp-F90h]
  size_t v86; // [rsp+8h] [rbp-F90h]
  size_t v87; // [rsp+8h] [rbp-F90h]
  size_t v88; // [rsp+8h] [rbp-F90h]
  size_t v89; // [rsp+8h] [rbp-F90h]
  size_t v90; // [rsp+8h] [rbp-F90h]
  size_t v91; // [rsp+8h] [rbp-F90h]
  void *s1[2]; // [rsp+80h] [rbp-F18h] BYREF
  char v93; // [rsp+90h] [rbp-F08h]
  __int128 v94; // [rsp+A0h] [rbp-EF8h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-EE8h]
  __int128 v96; // [rsp+C0h] [rbp-ED8h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-EC8h]
  _QWORD v98[6]; // [rsp+E0h] [rbp-EB8h] BYREF
  _BYTE v99[128]; // [rsp+110h] [rbp-E88h] BYREF
  _BYTE v100[128]; // [rsp+190h] [rbp-E08h] BYREF
  _BYTE v101[128]; // [rsp+210h] [rbp-D88h] BYREF
  _BYTE v102[128]; // [rsp+290h] [rbp-D08h] BYREF
  _BYTE v103[128]; // [rsp+310h] [rbp-C88h] BYREF
  _BYTE v104[128]; // [rsp+390h] [rbp-C08h] BYREF
  _BYTE v105[128]; // [rsp+410h] [rbp-B88h] BYREF
  _BYTE v106[128]; // [rsp+490h] [rbp-B08h] BYREF
  _BYTE v107[128]; // [rsp+510h] [rbp-A88h] BYREF
  _BYTE v108[128]; // [rsp+590h] [rbp-A08h] BYREF
  _BYTE v109[128]; // [rsp+610h] [rbp-988h] BYREF
  _BYTE v110[128]; // [rsp+690h] [rbp-908h] BYREF
  _BYTE v111[128]; // [rsp+710h] [rbp-888h] BYREF
  _BYTE v112[128]; // [rsp+790h] [rbp-808h] BYREF
  __int64 v113[42]; // [rsp+810h] [rbp-788h] BYREF
  __int64 v114[42]; // [rsp+960h] [rbp-638h] BYREF
  char *v115[15]; // [rsp+AB0h] [rbp-4E8h] BYREF
  __int64 v116; // [rsp+B28h] [rbp-470h] BYREF
  __int64 v117; // [rsp+BA0h] [rbp-3F8h] BYREF
  __int64 v118; // [rsp+C18h] [rbp-380h] BYREF
  __int64 v119; // [rsp+C90h] [rbp-308h] BYREF
  __int64 v120; // [rsp+D08h] [rbp-290h] BYREF
  __int64 v121; // [rsp+D80h] [rbp-218h] BYREF
  __int64 v122; // [rsp+DF8h] [rbp-1A0h] BYREF
  __int64 v123; // [rsp+E70h] [rbp-128h] BYREF
  _BYTE v124[176]; // [rsp+EE8h] [rbp-B0h] BYREF

  v8 = a1[1];
  v98[1] = a4;
  v98[2] = "/crtbegin.o";
  v98[0] = a3;
  v98[3] = j__strlen("/crtbegin.o");
  v98[4] = v8;
  v9 = sub_1148030(a1, a5);
  sub_11471B0((__int64)s1, a1, a5);
  if ( !v93 )
    return;
  v95 = 0;
  v94 = 0;
  v10 = s1[1];
  v11 = s1[0];
  v12 = j__strlen("-hard-fp");
  sub_11C67F0(v9 == 3, "-hard-fp", v12, (__int64)&v94);
  v13 = j__strlen("-soft-fp");
  sub_11C67F0(v9 == 2, "-soft-fp", v13, (__int64)&v94);
  v14 = j__strlen("-soft");
  sub_11C67F0(v9 == 1, "-soft", v14, (__int64)&v94);
  v15 = j__strlen("-march=ck801");
  if ( (void *)j__strlen("ck801") == v10 )
  {
    if ( v10 )
    {
      v16 = memcmp(v11, "ck801", (size_t)v10);
      sub_11C67F0(v16 == 0, "-march=ck801", v15, (__int64)&v94);
      v83 = j__strlen("-march=ck802");
      if ( v10 != (void *)j__strlen("ck802") )
      {
LABEL_5:
        v17 = 0;
        goto LABEL_6;
      }
      goto LABEL_20;
    }
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  sub_11C67F0(v27, "-march=ck801", v15, (__int64)&v94);
  v83 = j__strlen("-march=ck802");
  if ( (void *)j__strlen("ck802") != v10 )
    goto LABEL_5;
  v17 = 1;
  if ( v10 )
  {
LABEL_20:
    v28 = memcmp(v11, "ck802", (size_t)v10);
    sub_11C67F0(v28 == 0, "-march=ck802", v83, (__int64)&v94);
    v84 = j__strlen("-march=ck803");
    if ( v10 != (void *)j__strlen("ck803") )
      goto LABEL_7;
    goto LABEL_23;
  }
LABEL_6:
  sub_11C67F0(v17, "-march=ck802", v83, (__int64)&v94);
  v84 = j__strlen("-march=ck803");
  if ( (void *)j__strlen("ck803") != v10 )
  {
LABEL_7:
    v18 = 0;
    goto LABEL_8;
  }
  v18 = 1;
  if ( v10 )
  {
LABEL_23:
    v29 = memcmp(v11, "ck803", (size_t)v10);
    sub_11C67F0(v29 == 0, "-march=ck803", v84, (__int64)&v94);
    v85 = j__strlen("-march=ck804");
    if ( v10 == (void *)j__strlen("ck804") )
    {
LABEL_10:
      v20 = memcmp(v11, "ck804", (size_t)v10);
      sub_11C67F0(v20 == 0, "-march=ck804", v85, (__int64)&v94);
      v86 = j__strlen("-march=ck805");
      if ( v10 == (void *)j__strlen("ck805") )
        goto LABEL_11;
      goto LABEL_29;
    }
    goto LABEL_24;
  }
LABEL_8:
  sub_11C67F0(v18, "-march=ck803", v84, (__int64)&v94);
  v85 = j__strlen("-march=ck804");
  if ( (void *)j__strlen("ck804") != v10 )
  {
LABEL_24:
    v19 = 0;
    goto LABEL_25;
  }
  v19 = 1;
  if ( v10 )
    goto LABEL_10;
LABEL_25:
  sub_11C67F0(v19, "-march=ck804", v85, (__int64)&v94);
  v86 = j__strlen("-march=ck805");
  if ( (void *)j__strlen("ck805") != v10 )
  {
LABEL_29:
    sub_11C67F0(0, "-march=ck805", v86, (__int64)&v94);
    v87 = j__strlen("-march=ck807");
    if ( (void *)j__strlen("ck807") != v10 )
      goto LABEL_30;
    if ( v10 )
    {
LABEL_12:
      v22 = memcmp(v11, "ck807", (size_t)v10);
      sub_11C67F0(v22 == 0, "-march=ck807", v87, (__int64)&v94);
      v88 = j__strlen("-march=ck810");
      if ( v10 == (void *)j__strlen("ck810") )
        goto LABEL_13;
      goto LABEL_35;
    }
LABEL_28:
    v30 = 1;
    goto LABEL_31;
  }
  if ( v10 )
  {
LABEL_11:
    v21 = memcmp(v11, "ck805", (size_t)v10);
    sub_11C67F0(v21 == 0, "-march=ck805", v86, (__int64)&v94);
    v87 = j__strlen("-march=ck807");
    if ( v10 == (void *)j__strlen("ck807") )
      goto LABEL_12;
    goto LABEL_30;
  }
  sub_11C67F0(1, "-march=ck805", v86, (__int64)&v94);
  v87 = j__strlen("-march=ck807");
  if ( !j__strlen("ck807") )
    goto LABEL_28;
LABEL_30:
  v30 = 0;
LABEL_31:
  sub_11C67F0(v30, "-march=ck807", v87, (__int64)&v94);
  v88 = j__strlen("-march=ck810");
  if ( (void *)j__strlen("ck810") != v10 )
  {
LABEL_35:
    sub_11C67F0(0, "-march=ck810", v88, (__int64)&v94);
    v89 = j__strlen("-march=ck810v");
    if ( (void *)j__strlen("ck810v") != v10 )
      goto LABEL_36;
    if ( v10 )
    {
LABEL_14:
      v24 = memcmp(v11, "ck810v", (size_t)v10);
      sub_11C67F0(v24 == 0, "-march=ck810v", v89, (__int64)&v94);
      v90 = j__strlen("-march=ck860");
      if ( v10 == (void *)j__strlen("ck860") )
        goto LABEL_15;
      goto LABEL_41;
    }
LABEL_34:
    v31 = 1;
    goto LABEL_37;
  }
  if ( v10 )
  {
LABEL_13:
    v23 = memcmp(v11, "ck810", (size_t)v10);
    sub_11C67F0(v23 == 0, "-march=ck810", v88, (__int64)&v94);
    v89 = j__strlen("-march=ck810v");
    if ( v10 == (void *)j__strlen("ck810v") )
      goto LABEL_14;
    goto LABEL_36;
  }
  sub_11C67F0(1, "-march=ck810", v88, (__int64)&v94);
  v89 = j__strlen("-march=ck810v");
  if ( !j__strlen("ck810v") )
    goto LABEL_34;
LABEL_36:
  v31 = 0;
LABEL_37:
  sub_11C67F0(v31, "-march=ck810v", v89, (__int64)&v94);
  v90 = j__strlen("-march=ck860");
  if ( (void *)j__strlen("ck860") != v10 )
  {
LABEL_41:
    sub_11C67F0(0, "-march=ck860", v90, (__int64)&v94);
    v91 = j__strlen("-march=ck860v");
    if ( (void *)j__strlen("ck860v") != v10 )
      goto LABEL_42;
    if ( v10 )
      goto LABEL_16;
    goto LABEL_40;
  }
  if ( !v10 )
  {
    sub_11C67F0(1, "-march=ck860", v90, (__int64)&v94);
    v91 = j__strlen("-march=ck860v");
    if ( j__strlen("ck860v") )
      goto LABEL_42;
LABEL_40:
    v26 = 1;
    goto LABEL_43;
  }
LABEL_15:
  v25 = memcmp(v11, "ck860", (size_t)v10);
  sub_11C67F0(v25 == 0, "-march=ck860", v90, (__int64)&v94);
  v91 = j__strlen("-march=ck860v");
  if ( v10 != (void *)j__strlen("ck860v") )
  {
LABEL_42:
    v26 = 0;
    goto LABEL_43;
  }
LABEL_16:
  v26 = memcmp(v11, "ck860v", (size_t)v10) == 0;
LABEL_43:
  v32 = 0;
  sub_11C67F0(v26, "-march=ck860v", v91, (__int64)&v94);
  v33 = sub_10DE660(a5, 0x99Fu, 0x8F7u);
  if ( v33 )
    v32 = sub_21B9810(v33, 2463) ^ 1;
  v34 = j__strlen("-EB");
  sub_11C67F0(v32, "-EB", v34, (__int64)&v94);
  v35 = j__strlen("/hard-fp");
  sub_111A340((__int64)v115, "/hard-fp", v35);
  v36 = j__strlen("-hard-fp");
  v37 = sub_1117D00((__int64)v115, (__int64)"-hard-fp", v36, 0);
  sub_117F2D0((__int64)v99, v37);
  sub_117F230((__int64)v115);
  v38 = j__strlen("/soft-fp");
  sub_111A340((__int64)v115, "/soft-fp", v38);
  v39 = j__strlen("-soft-fp");
  v40 = sub_1117D00((__int64)v115, (__int64)"-soft-fp", v39, 0);
  sub_117F2D0((__int64)v100, v40);
  sub_117F230((__int64)v115);
  v41 = j__strlen(&byte_22F0C30);
  sub_111A340((__int64)v115, &byte_22F0C30, v41);
  v42 = j__strlen("-soft");
  v43 = sub_1117D00((__int64)v115, (__int64)"-soft", v42, 0);
  sub_117F2D0((__int64)v101, v43);
  sub_117F230((__int64)v115);
  v44 = j__strlen("/ck801");
  sub_111A340((__int64)v115, "/ck801", v44);
  v45 = j__strlen("-march=ck801");
  v46 = sub_1117D00((__int64)v115, (__int64)"-march=ck801", v45, 0);
  sub_117F2D0((__int64)v102, v46);
  sub_117F230((__int64)v115);
  v47 = j__strlen("/ck802");
  sub_111A340((__int64)v115, "/ck802", v47);
  v48 = j__strlen("-march=ck802");
  v49 = sub_1117D00((__int64)v115, (__int64)"-march=ck802", v48, 0);
  sub_117F2D0((__int64)v103, v49);
  sub_117F230((__int64)v115);
  v50 = j__strlen("/ck803");
  sub_111A340((__int64)v115, "/ck803", v50);
  v51 = j__strlen("-march=ck803");
  v52 = sub_1117D00((__int64)v115, (__int64)"-march=ck803", v51, 0);
  sub_117F2D0((__int64)v104, v52);
  sub_117F230((__int64)v115);
  v53 = j__strlen("/ck803");
  sub_111A340((__int64)v115, "/ck803", v53);
  v54 = j__strlen("-march=ck804");
  v55 = sub_1117D00((__int64)v115, (__int64)"-march=ck804", v54, 0);
  sub_117F2D0((__int64)v105, v55);
  sub_117F230((__int64)v115);
  v56 = j__strlen("/ck805");
  sub_111A340((__int64)v115, "/ck805", v56);
  v57 = j__strlen("-march=ck805");
  v58 = sub_1117D00((__int64)v115, (__int64)"-march=ck805", v57, 0);
  sub_117F2D0((__int64)v106, v58);
  sub_117F230((__int64)v115);
  v59 = j__strlen("/ck807");
  sub_111A340((__int64)v115, "/ck807", v59);
  v60 = j__strlen("-march=ck807");
  v61 = sub_1117D00((__int64)v115, (__int64)"-march=ck807", v60, 0);
  sub_117F2D0((__int64)v107, v61);
  sub_117F230((__int64)v115);
  v62 = j__strlen(&byte_22F0C30);
  sub_111A340((__int64)v115, &byte_22F0C30, v62);
  v63 = j__strlen("-march=ck810");
  v64 = sub_1117D00((__int64)v115, (__int64)"-march=ck810", v63, 0);
  sub_117F2D0((__int64)v108, v64);
  sub_117F230((__int64)v115);
  v65 = j__strlen("/ck810v");
  sub_111A340((__int64)v115, "/ck810v", v65);
  v66 = j__strlen("-march=ck810v");
  v67 = sub_1117D00((__int64)v115, (__int64)"-march=ck810v", v66, 0);
  sub_117F2D0((__int64)v109, v67);
  sub_117F230((__int64)v115);
  v68 = j__strlen("/ck860");
  sub_111A340((__int64)v115, "/ck860", v68);
  v69 = j__strlen("-march=ck860");
  v70 = sub_1117D00((__int64)v115, (__int64)"-march=ck860", v69, 0);
  sub_117F2D0((__int64)v110, v70);
  sub_117F230((__int64)v115);
  v71 = j__strlen("/ck860v");
  sub_111A340((__int64)v115, "/ck860v", v71);
  v72 = j__strlen("-march=ck860v");
  v73 = sub_1117D00((__int64)v115, (__int64)"-march=ck860v", v72, 0);
  sub_117F2D0((__int64)v111, v73);
  sub_117F230((__int64)v115);
  v74 = j__strlen("/big");
  sub_111A340((__int64)v115, "/big", v74);
  v75 = j__strlen("-EB");
  v76 = sub_1117D00((__int64)v115, (__int64)"-EB", v75, 0);
  sub_117F2D0((__int64)v112, v76);
  sub_117F230((__int64)v115);
  v96 = 0;
  v97 = 0;
  v77 = sub_111D970((__int64)&v96, (__int64)v112);
  sub_117F2D0((__int64)v115, (__int64)v102);
  sub_117F2D0((__int64)&v116, (__int64)v103);
  sub_117F2D0((__int64)&v117, (__int64)v104);
  sub_117F2D0((__int64)&v118, (__int64)v105);
  sub_117F2D0((__int64)&v119, (__int64)v106);
  sub_117F2D0((__int64)&v120, (__int64)v107);
  sub_117F2D0((__int64)&v121, (__int64)v108);
  sub_117F2D0((__int64)&v122, (__int64)v109);
  sub_117F2D0((__int64)&v123, (__int64)v110);
  sub_117F2D0((__int64)v124, (__int64)v111);
  v78 = sub_111A650(v77, v115, 10);
  v79 = sub_111CEF0(v78, (__int64)v99, (__int64)v100, (__int64)v101);
  sub_11187A0((__int64)v114, v79);
  v80 = sub_110E920(v114, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v98);
  sub_121C060((__int64)v113, (__int64)v80);
  sub_117EEA0(v114);
  for ( i = (char **)v124; ; i -= 15 )
  {
    sub_117F230((__int64)i);
    if ( v115 == i )
      break;
  }
  sub_1216C70((__int64 *)&v96);
  if ( (unsigned __int8)sub_1110810((__int64)v113, a1, (__int64)&v94, a6[21].m128i_i64, 0) )
    sub_11809E0(a6, v113);
  sub_117EEA0(v113);
  sub_117F230((__int64)v112);
  sub_117F230((__int64)v111);
  sub_117F230((__int64)v110);
  sub_117F230((__int64)v109);
  sub_117F230((__int64)v108);
  sub_117F230((__int64)v107);
  sub_117F230((__int64)v106);
  sub_117F230((__int64)v105);
  sub_117F230((__int64)v104);
  sub_117F230((__int64)v103);
  sub_117F230((__int64)v102);
  sub_117F230((__int64)v101);
  sub_117F230((__int64)v100);
  sub_117F230((__int64)v99);
  sub_9B4A30((void ***)&v94);
}
