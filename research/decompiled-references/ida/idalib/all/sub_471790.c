_BOOL8 __fastcall sub_471790(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  char *v10; // rbx
  _BOOL8 v11; // rbp
  char *v13; // rsi
  const char *v14; // rdi
  char *v15; // rsi
  char *v16; // rdi
  char *v17; // rsi
  char *v18; // rdi
  char *v19; // rsi
  char *v20; // rdi
  char *v21; // rsi
  char *v22; // rdi
  char *v23; // rsi
  char *v24; // rdi
  char *v25; // rdi
  char *v26; // rsi
  int v27; // [rsp+0h] [rbp-318h] BYREF
  void *v28; // [rsp+8h] [rbp-310h]
  void *v29; // [rsp+10h] [rbp-308h]
  int v30[4]; // [rsp+18h] [rbp-300h]
  void *v31; // [rsp+28h] [rbp-2F0h]
  __int128 v32; // [rsp+30h] [rbp-2E8h]
  char *s1; // [rsp+40h] [rbp-2D8h]
  __int128 v34; // [rsp+48h] [rbp-2D0h]
  char *v35; // [rsp+58h] [rbp-2C0h]
  __int128 v36; // [rsp+60h] [rbp-2B8h]
  char *v37; // [rsp+70h] [rbp-2A8h]
  __int128 v38; // [rsp+78h] [rbp-2A0h]
  int v39; // [rsp+88h] [rbp-290h]
  void *v40; // [rsp+90h] [rbp-288h]
  __int128 v41; // [rsp+98h] [rbp-280h]
  char *v42; // [rsp+A8h] [rbp-270h]
  __int128 v43; // [rsp+B0h] [rbp-268h]
  char *v44; // [rsp+C0h] [rbp-258h]
  __int128 v45; // [rsp+C8h] [rbp-250h]
  char *v46; // [rsp+D8h] [rbp-240h]
  __int128 v47; // [rsp+E0h] [rbp-238h]
  int v48; // [rsp+F0h] [rbp-228h]
  void *v49; // [rsp+F8h] [rbp-220h]
  __int128 v50; // [rsp+100h] [rbp-218h]
  char *v51; // [rsp+110h] [rbp-208h]
  __int128 v52; // [rsp+118h] [rbp-200h]
  char *v53; // [rsp+128h] [rbp-1F0h]
  __int128 v54; // [rsp+130h] [rbp-1E8h]
  char *v55; // [rsp+140h] [rbp-1D8h]
  __int128 v56; // [rsp+148h] [rbp-1D0h]
  int v57; // [rsp+158h] [rbp-1C0h]
  int v58; // [rsp+160h] [rbp-1B8h]
  int v59; // [rsp+164h] [rbp-1B4h]
  __int64 v60; // [rsp+168h] [rbp-1B0h]
  int v61; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v62; // [rsp+178h] [rbp-1A0h]
  char *s2; // [rsp+180h] [rbp-198h]
  __int128 v64; // [rsp+188h] [rbp-190h]
  void *v65; // [rsp+198h] [rbp-180h]
  __int128 v66; // [rsp+1A0h] [rbp-178h]
  char *v67; // [rsp+1B0h] [rbp-168h]
  __int128 v68; // [rsp+1B8h] [rbp-160h]
  char *v69; // [rsp+1C8h] [rbp-150h]
  __int128 v70; // [rsp+1D0h] [rbp-148h]
  char *v71; // [rsp+1E0h] [rbp-138h]
  __int128 v72; // [rsp+1E8h] [rbp-130h]
  int v73; // [rsp+1F8h] [rbp-120h]
  void *v74; // [rsp+200h] [rbp-118h]
  __int128 v75; // [rsp+208h] [rbp-110h]
  char *v76; // [rsp+218h] [rbp-100h]
  __int128 v77; // [rsp+220h] [rbp-F8h]
  char *v78; // [rsp+230h] [rbp-E8h]
  __int128 v79; // [rsp+238h] [rbp-E0h]
  char *v80; // [rsp+248h] [rbp-D0h]
  __int128 v81; // [rsp+250h] [rbp-C8h]
  int v82; // [rsp+260h] [rbp-B8h]
  void *ptr; // [rsp+268h] [rbp-B0h]
  __int128 v84; // [rsp+270h] [rbp-A8h]
  char *v85; // [rsp+280h] [rbp-98h]
  __int128 v86; // [rsp+288h] [rbp-90h]
  char *v87; // [rsp+298h] [rbp-80h]
  __int128 v88; // [rsp+2A0h] [rbp-78h]
  char *v89; // [rsp+2B0h] [rbp-68h]
  __int128 v90; // [rsp+2B8h] [rbp-60h]
  int v91; // [rsp+2C8h] [rbp-50h]
  int v92; // [rsp+2D0h] [rbp-48h]
  int v93; // [rsp+2D4h] [rbp-44h]
  __int64 v94; // [rsp+2D8h] [rbp-40h]
  unsigned __int64 v95; // [rsp+2E8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 12);
  v95 = __readfsqword(0x28u);
  v27 = 0;
  v28 = (void *)-1LL;
  v29 = nullptr;
  v31 = nullptr;
  s1 = nullptr;
  v35 = nullptr;
  v37 = nullptr;
  v39 = -1;
  v40 = nullptr;
  v42 = nullptr;
  v44 = nullptr;
  *(_OWORD *)v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v46 = nullptr;
  v6 = *(_QWORD *)(a1 + 32);
  v48 = -1;
  v49 = nullptr;
  v51 = nullptr;
  v53 = nullptr;
  v55 = nullptr;
  v57 = -1;
  v58 = -1;
  v59 = v4;
  v60 = -1;
  v47 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  sub_46F710(&v27, v6, a3);
  v7 = *(_DWORD *)(a2 + 12);
  v61 = 0;
  v62 = -1;
  s2 = nullptr;
  v65 = nullptr;
  v67 = nullptr;
  v69 = nullptr;
  v71 = nullptr;
  v73 = -1;
  v74 = nullptr;
  v76 = nullptr;
  v78 = nullptr;
  v80 = nullptr;
  v82 = -1;
  ptr = nullptr;
  v85 = nullptr;
  v87 = nullptr;
  v89 = nullptr;
  v91 = -1;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v84 = 0;
  v86 = 0;
  v88 = 0;
  v90 = 0;
  v92 = -1;
  v8 = *(_QWORD *)(a1 + 32);
  v93 = v7;
  v94 = -1;
  sub_46F710(&v61, v8, a3);
  v9 = ~unk_23AD870;
  if ( (~unk_23AD870 & v27) == 0 || (v61 & v9) == 0 )
  {
    if ( !under_debugger )
      interr(2148);
LABEL_131:
    BUG();
  }
  if ( (v9 & (v61 ^ v27)) != 0 || v28 != (void *)v62 )
    goto LABEL_4;
  if ( (_QWORD)v64 )
  {
    v13 = s2;
    v14 = haystack;
    if ( !*(_QWORD *)v30 )
      goto LABEL_61;
  }
  else
  {
    v13 = (char *)haystack;
    if ( !*(_QWORD *)v30 )
      goto LABEL_62;
  }
  v14 = (const char *)v29;
LABEL_61:
  if ( strcmp(v14, v13) )
    goto LABEL_4;
LABEL_62:
  if ( (unsigned __int64)v32 <= 1 )
  {
    if ( (unsigned __int64)v66 > 1 )
      goto LABEL_4;
    goto LABEL_67;
  }
  if ( (unsigned __int64)v66 <= 1 )
    goto LABEL_4;
  if ( (unsigned __int64)v34 <= 1 || (unsigned __int64)v68 <= 1 )
  {
    if ( !under_debugger )
      interr(3079);
    goto LABEL_131;
  }
  if ( strcmp(s1, v67) )
    goto LABEL_4;
LABEL_67:
  if ( (_QWORD)v70 )
  {
    v15 = v69;
    v16 = (char *)byte_23ADD24;
    if ( !(_QWORD)v36 )
      goto LABEL_70;
  }
  else
  {
    v15 = (char *)byte_23ADD24;
    if ( !(_QWORD)v36 )
      goto LABEL_71;
  }
  v16 = v35;
LABEL_70:
  if ( strcmp(v16, v15) )
    goto LABEL_4;
LABEL_71:
  if ( (_QWORD)v72 )
  {
    v17 = v71;
    v18 = (char *)byte_23ADD24;
    if ( !(_QWORD)v38 )
      goto LABEL_74;
  }
  else
  {
    v17 = (char *)byte_23ADD24;
    if ( !(_QWORD)v38 )
      goto LABEL_75;
  }
  v18 = v37;
LABEL_74:
  if ( strcmp(v18, v17) )
    goto LABEL_4;
LABEL_75:
  if ( (unsigned __int64)v41 <= 1 )
  {
    if ( (unsigned __int64)v75 > 1 )
      goto LABEL_4;
    goto LABEL_80;
  }
  if ( (unsigned __int64)v75 <= 1 )
    goto LABEL_4;
  if ( (unsigned __int64)v43 <= 1 || (unsigned __int64)v77 <= 1 )
  {
    if ( !under_debugger )
      interr(3079);
    goto LABEL_131;
  }
  if ( strcmp(v42, v76) )
    goto LABEL_4;
LABEL_80:
  if ( (_QWORD)v79 )
  {
    v19 = v78;
    v20 = (char *)byte_23ADD24;
    if ( !(_QWORD)v45 )
      goto LABEL_83;
  }
  else
  {
    v19 = (char *)byte_23ADD24;
    if ( !(_QWORD)v45 )
      goto LABEL_84;
  }
  v20 = v44;
LABEL_83:
  if ( strcmp(v20, v19) )
    goto LABEL_4;
LABEL_84:
  if ( (_QWORD)v81 )
  {
    v21 = v80;
    v22 = (char *)byte_23ADD24;
    if ( !(_QWORD)v47 )
      goto LABEL_87;
  }
  else
  {
    v21 = (char *)byte_23ADD24;
    if ( !(_QWORD)v47 )
      goto LABEL_88;
  }
  v22 = v46;
LABEL_87:
  if ( strcmp(v22, v21) )
    goto LABEL_4;
LABEL_88:
  if ( (unsigned __int64)v50 <= 1 )
  {
    if ( (unsigned __int64)v84 > 1 )
      goto LABEL_4;
    goto LABEL_93;
  }
  if ( (unsigned __int64)v84 <= 1 )
    goto LABEL_4;
  if ( (unsigned __int64)v52 <= 1 || (unsigned __int64)v86 <= 1 )
  {
    if ( !under_debugger )
      interr(3079);
    goto LABEL_131;
  }
  if ( strcmp(v51, v85) )
    goto LABEL_4;
LABEL_93:
  if ( (_QWORD)v88 )
  {
    v23 = v87;
    v24 = (char *)byte_23ADD24;
    if ( !(_QWORD)v54 )
      goto LABEL_96;
    goto LABEL_95;
  }
  v23 = (char *)byte_23ADD24;
  if ( (_QWORD)v54 )
  {
LABEL_95:
    v24 = v53;
LABEL_96:
    if ( !strcmp(v24, v23) )
      goto LABEL_97;
LABEL_4:
    v10 = v89;
    v11 = 1;
    goto LABEL_5;
  }
LABEL_97:
  if ( (_QWORD)v90 )
  {
    v10 = v89;
    v25 = (char *)byte_23ADD24;
    v26 = v89;
    if ( !(_QWORD)v56 )
      goto LABEL_100;
    goto LABEL_99;
  }
  if ( (_QWORD)v56 )
  {
    v10 = v89;
    v26 = (char *)byte_23ADD24;
LABEL_99:
    v25 = v55;
LABEL_100:
    v11 = 1;
    if ( strcmp(v25, v26) )
      goto LABEL_5;
    goto LABEL_101;
  }
  v10 = v89;
LABEL_101:
  v11 = v58 != v92;
LABEL_5:
  if ( v10 )
  {
    *(_QWORD *)&v90 = 0;
    qfree(v10);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  if ( ptr )
  {
    *(_QWORD *)&v84 = 0;
    qfree(ptr);
  }
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( s2 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(s2);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( s1 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(s1);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v29 )
  {
    *(_QWORD *)v30 = 0;
    qfree(v29);
  }
  return v11;
}
