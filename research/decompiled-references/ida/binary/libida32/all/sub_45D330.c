_BOOL8 __fastcall sub_45D330(__int64 a1, __int64 a2, unsigned int a3)
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
  int v27[2]; // [rsp+0h] [rbp-308h] BYREF
  void *v28; // [rsp+8h] [rbp-300h]
  __int64 v29[2]; // [rsp+10h] [rbp-2F8h]
  void *v30; // [rsp+20h] [rbp-2E8h]
  __int128 v31; // [rsp+28h] [rbp-2E0h]
  char *s1; // [rsp+38h] [rbp-2D0h]
  __int128 v33; // [rsp+40h] [rbp-2C8h]
  char *v34; // [rsp+50h] [rbp-2B8h]
  __int128 v35; // [rsp+58h] [rbp-2B0h]
  char *v36; // [rsp+68h] [rbp-2A0h]
  __int128 v37; // [rsp+70h] [rbp-298h]
  int v38; // [rsp+80h] [rbp-288h]
  void *v39; // [rsp+88h] [rbp-280h]
  __int128 v40; // [rsp+90h] [rbp-278h]
  char *v41; // [rsp+A0h] [rbp-268h]
  __int128 v42; // [rsp+A8h] [rbp-260h]
  char *v43; // [rsp+B8h] [rbp-250h]
  __int128 v44; // [rsp+C0h] [rbp-248h]
  char *v45; // [rsp+D0h] [rbp-238h]
  __int128 v46; // [rsp+D8h] [rbp-230h]
  int v47; // [rsp+E8h] [rbp-220h]
  void *v48; // [rsp+F0h] [rbp-218h]
  __int128 v49; // [rsp+F8h] [rbp-210h]
  char *v50; // [rsp+108h] [rbp-200h]
  __int128 v51; // [rsp+110h] [rbp-1F8h]
  char *v52; // [rsp+120h] [rbp-1E8h]
  __int128 v53; // [rsp+128h] [rbp-1E0h]
  char *v54; // [rsp+138h] [rbp-1D0h]
  __int128 v55; // [rsp+140h] [rbp-1C8h]
  int v56; // [rsp+150h] [rbp-1B8h]
  int v57; // [rsp+158h] [rbp-1B0h]
  int v58; // [rsp+15Ch] [rbp-1ACh]
  int v59; // [rsp+160h] [rbp-1A8h]
  int v60[2]; // [rsp+170h] [rbp-198h] BYREF
  char *s2; // [rsp+178h] [rbp-190h]
  __int128 v62; // [rsp+180h] [rbp-188h]
  void *v63; // [rsp+190h] [rbp-178h]
  __int128 v64; // [rsp+198h] [rbp-170h]
  char *v65; // [rsp+1A8h] [rbp-160h]
  __int128 v66; // [rsp+1B0h] [rbp-158h]
  char *v67; // [rsp+1C0h] [rbp-148h]
  __int128 v68; // [rsp+1C8h] [rbp-140h]
  char *v69; // [rsp+1D8h] [rbp-130h]
  __int128 v70; // [rsp+1E0h] [rbp-128h]
  int v71; // [rsp+1F0h] [rbp-118h]
  void *v72; // [rsp+1F8h] [rbp-110h]
  __int128 v73; // [rsp+200h] [rbp-108h]
  char *v74; // [rsp+210h] [rbp-F8h]
  __int128 v75; // [rsp+218h] [rbp-F0h]
  char *v76; // [rsp+228h] [rbp-E0h]
  __int128 v77; // [rsp+230h] [rbp-D8h]
  char *v78; // [rsp+240h] [rbp-C8h]
  __int128 v79; // [rsp+248h] [rbp-C0h]
  int v80; // [rsp+258h] [rbp-B0h]
  void *ptr; // [rsp+260h] [rbp-A8h]
  __int128 v82; // [rsp+268h] [rbp-A0h]
  char *v83; // [rsp+278h] [rbp-90h]
  __int128 v84; // [rsp+280h] [rbp-88h]
  char *v85; // [rsp+290h] [rbp-78h]
  __int128 v86; // [rsp+298h] [rbp-70h]
  char *v87; // [rsp+2A8h] [rbp-60h]
  __int128 v88; // [rsp+2B0h] [rbp-58h]
  int v89; // [rsp+2C0h] [rbp-48h]
  int v90; // [rsp+2C8h] [rbp-40h]
  int v91; // [rsp+2CCh] [rbp-3Ch]
  int v92; // [rsp+2D0h] [rbp-38h]
  unsigned __int64 v93; // [rsp+2D8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 12);
  v93 = __readfsqword(0x28u);
  *(_OWORD *)v29 = 0;
  *(_QWORD *)v27 = 0xFFFFFFFF00000000LL;
  v28 = nullptr;
  v30 = nullptr;
  s1 = nullptr;
  v34 = nullptr;
  v36 = nullptr;
  v38 = -1;
  v39 = nullptr;
  v41 = nullptr;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v40 = 0;
  v42 = 0;
  v43 = nullptr;
  v6 = *(_QWORD *)(a1 + 32);
  v45 = nullptr;
  v47 = -1;
  v48 = nullptr;
  v50 = nullptr;
  v52 = nullptr;
  v54 = nullptr;
  v56 = -1;
  v57 = -1;
  v58 = v4;
  v59 = -1;
  v44 = 0;
  v46 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  sub_45B310(v27, v6, a3);
  v7 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)v60 = 0xFFFFFFFF00000000LL;
  s2 = nullptr;
  v63 = nullptr;
  v65 = nullptr;
  v67 = nullptr;
  v69 = nullptr;
  v71 = -1;
  v72 = nullptr;
  v74 = nullptr;
  v76 = nullptr;
  v78 = nullptr;
  v80 = -1;
  ptr = nullptr;
  v83 = nullptr;
  v85 = nullptr;
  v87 = nullptr;
  v89 = -1;
  v90 = -1;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v82 = 0;
  v84 = 0;
  v86 = 0;
  v88 = 0;
  v91 = v7;
  v8 = *(_QWORD *)(a1 + 32);
  v92 = -1;
  sub_45B310(v60, v8, a3);
  v9 = ~unk_2389830;
  if ( (~unk_2389830 & v27[0]) == 0 || (v60[0] & v9) == 0 )
  {
    if ( !under_debugger )
      interr(2148);
LABEL_131:
    BUG();
  }
  if ( (v9 & (v60[0] ^ v27[0])) != 0 || v27[1] != v60[1] )
    goto LABEL_4;
  if ( (_QWORD)v62 )
  {
    v13 = s2;
    v14 = haystack;
    if ( !v29[0] )
      goto LABEL_61;
  }
  else
  {
    v13 = (char *)haystack;
    if ( !v29[0] )
      goto LABEL_62;
  }
  v14 = (const char *)v28;
LABEL_61:
  if ( strcmp(v14, v13) )
    goto LABEL_4;
LABEL_62:
  if ( (unsigned __int64)v31 <= 1 )
  {
    if ( (unsigned __int64)v64 > 1 )
      goto LABEL_4;
    goto LABEL_67;
  }
  if ( (unsigned __int64)v64 <= 1 )
    goto LABEL_4;
  if ( (unsigned __int64)v33 <= 1 || (unsigned __int64)v66 <= 1 )
  {
    if ( !under_debugger )
      interr(3079);
    goto LABEL_131;
  }
  if ( strcmp(s1, v65) )
    goto LABEL_4;
LABEL_67:
  if ( (_QWORD)v68 )
  {
    v15 = v67;
    v16 = (char *)byte_2389C44;
    if ( !(_QWORD)v35 )
      goto LABEL_70;
  }
  else
  {
    v15 = (char *)byte_2389C44;
    if ( !(_QWORD)v35 )
      goto LABEL_71;
  }
  v16 = v34;
LABEL_70:
  if ( strcmp(v16, v15) )
    goto LABEL_4;
LABEL_71:
  if ( (_QWORD)v70 )
  {
    v17 = v69;
    v18 = (char *)byte_2389C44;
    if ( !(_QWORD)v37 )
      goto LABEL_74;
  }
  else
  {
    v17 = (char *)byte_2389C44;
    if ( !(_QWORD)v37 )
      goto LABEL_75;
  }
  v18 = v36;
LABEL_74:
  if ( strcmp(v18, v17) )
    goto LABEL_4;
LABEL_75:
  if ( (unsigned __int64)v40 <= 1 )
  {
    if ( (unsigned __int64)v73 > 1 )
      goto LABEL_4;
    goto LABEL_80;
  }
  if ( (unsigned __int64)v73 <= 1 )
    goto LABEL_4;
  if ( (unsigned __int64)v42 <= 1 || (unsigned __int64)v75 <= 1 )
  {
    if ( !under_debugger )
      interr(3079);
    goto LABEL_131;
  }
  if ( strcmp(v41, v74) )
    goto LABEL_4;
LABEL_80:
  if ( (_QWORD)v77 )
  {
    v19 = v76;
    v20 = (char *)byte_2389C44;
    if ( !(_QWORD)v44 )
      goto LABEL_83;
  }
  else
  {
    v19 = (char *)byte_2389C44;
    if ( !(_QWORD)v44 )
      goto LABEL_84;
  }
  v20 = v43;
LABEL_83:
  if ( strcmp(v20, v19) )
    goto LABEL_4;
LABEL_84:
  if ( (_QWORD)v79 )
  {
    v21 = v78;
    v22 = (char *)byte_2389C44;
    if ( !(_QWORD)v46 )
      goto LABEL_87;
  }
  else
  {
    v21 = (char *)byte_2389C44;
    if ( !(_QWORD)v46 )
      goto LABEL_88;
  }
  v22 = v45;
LABEL_87:
  if ( strcmp(v22, v21) )
    goto LABEL_4;
LABEL_88:
  if ( (unsigned __int64)v49 <= 1 )
  {
    if ( (unsigned __int64)v82 > 1 )
      goto LABEL_4;
    goto LABEL_93;
  }
  if ( (unsigned __int64)v82 <= 1 )
    goto LABEL_4;
  if ( (unsigned __int64)v51 <= 1 || (unsigned __int64)v84 <= 1 )
  {
    if ( !under_debugger )
      interr(3079);
    goto LABEL_131;
  }
  if ( strcmp(v50, v83) )
    goto LABEL_4;
LABEL_93:
  if ( (_QWORD)v86 )
  {
    v23 = v85;
    v24 = (char *)byte_2389C44;
    if ( !(_QWORD)v53 )
      goto LABEL_96;
    goto LABEL_95;
  }
  v23 = (char *)byte_2389C44;
  if ( (_QWORD)v53 )
  {
LABEL_95:
    v24 = v52;
LABEL_96:
    if ( !strcmp(v24, v23) )
      goto LABEL_97;
LABEL_4:
    v10 = v87;
    v11 = 1;
    goto LABEL_5;
  }
LABEL_97:
  if ( (_QWORD)v88 )
  {
    v10 = v87;
    v25 = (char *)byte_2389C44;
    v26 = v87;
    if ( !(_QWORD)v55 )
      goto LABEL_100;
    goto LABEL_99;
  }
  if ( (_QWORD)v55 )
  {
    v10 = v87;
    v26 = (char *)byte_2389C44;
LABEL_99:
    v25 = v54;
LABEL_100:
    v11 = 1;
    if ( strcmp(v25, v26) )
      goto LABEL_5;
    goto LABEL_101;
  }
  v10 = v87;
LABEL_101:
  v11 = v57 != v90;
LABEL_5:
  if ( v10 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v10);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  if ( ptr )
  {
    *(_QWORD *)&v82 = 0;
    qfree(ptr);
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
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
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
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  if ( s2 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(s2);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( s1 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(s1);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( v28 )
  {
    v29[0] = 0;
    qfree(v28);
  }
  return v11;
}

