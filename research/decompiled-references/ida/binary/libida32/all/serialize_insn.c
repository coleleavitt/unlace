unsigned __int64 __fastcall serialize_insn(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  __int64 v17; // rax
  char v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // r12
  size_t v25; // rax
  char *v26; // r12
  __int64 v27; // rdx
  char *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  char v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  char v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char v48; // r8
  size_t v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  size_t v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  size_t v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  size_t v58; // rax
  __int64 v59; // rax
  char v60; // r8
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  char v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  char v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  char v76; // r8
  char v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  char v91; // [rsp+Fh] [rbp-59h]
  char v92; // [rsp+Fh] [rbp-59h]
  char v93; // [rsp+Fh] [rbp-59h]
  char v94; // [rsp+Fh] [rbp-59h]
  char v95; // [rsp+Fh] [rbp-59h]
  char v96; // [rsp+Fh] [rbp-59h]
  char v97; // [rsp+Fh] [rbp-59h]
  char v98; // [rsp+Fh] [rbp-59h]
  char v99; // [rsp+Fh] [rbp-59h]
  _BYTE v100[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v101[2]; // [rsp+21h] [rbp-47h] BYREF
  char v102[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v103[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = *a2;
  v103[0] = __readfsqword(0x28u);
  v7 = pack_dq(v100, v103, v5 + 1, a4, a5) - (_QWORD)v100;
  if ( v7 )
    sub_806A00(a1, v100, v7);
  v10 = pack_dq(v100, v103, a2[1] + 1LL, v8, v9) - (_QWORD)v100;
  if ( v10 )
    sub_806A00(a1, v100, v10);
  v13 = pack_dq(v100, v103, a2[2] + 1LL, v11, v12) - (_QWORD)v100;
  if ( v13 )
    sub_806A00(a1, v100, v13);
  v14 = pack_dw(v100, v101, *((unsigned __int16 *)a2 + 6)) - (_QWORD)v100;
  if ( v14 )
    sub_806A00(a1, v100, v14);
  v15 = pack_dw(v100, v101, *((unsigned __int16 *)a2 + 7)) - (_QWORD)v100;
  if ( v15 )
    sub_806A00(a1, v100, v15);
  v16 = pack_dd(v100, v102, a2[4]) - (_QWORD)v100;
  if ( v16 )
    sub_806A00(a1, v100, v16);
  v17 = a1[1];
  v18 = *((_BYTE *)a2 + 20);
  v19 = *a1;
  if ( a1[2] < (unsigned __int64)(v17 + 1) )
  {
    v89 = qvector_reserve(a1, v19, v17 + 1, 1);
    *a1 = v89;
    v19 = v89;
    v17 = a1[1];
  }
  *(_BYTE *)(v19 + v17) = v18;
  v20 = a1[1];
  v21 = *a1;
  v22 = v20 + 1;
  v23 = v20 + 2;
  a1[1] = v22;
  v24 = *((_BYTE *)a2 + 21);
  if ( a1[2] < v23 )
  {
    v90 = qvector_reserve(a1, v21, v23, 1);
    *a1 = v90;
    v21 = v90;
    v22 = a1[1];
  }
  *(_BYTE *)(v21 + v22) = v24;
  ++a1[1];
  v25 = pack_dw(v100, v101, *((unsigned __int16 *)a2 + 11)) - (_QWORD)v100;
  if ( v25 )
    sub_806A00(a1, v100, v25);
  v26 = (char *)a2 + 25;
  v27 = a1[1];
  v28 = (char *)a2 + 217;
  do
  {
    v77 = *v26;
    v78 = *a1;
    if ( a1[2] < (unsigned __int64)(v27 + 1) )
    {
      v91 = *v26;
      v79 = qvector_reserve(a1, v78, v27 + 1, 1);
      v27 = a1[1];
      v77 = v91;
      *a1 = v79;
      v78 = v79;
    }
    *(_BYTE *)(v78 + v27) = v77;
    v29 = a1[1];
    v30 = *a1;
    v31 = v29 + 1;
    v32 = v29 + 2;
    a1[1] = v31;
    v33 = v26[1];
    if ( a1[2] < v32 )
    {
      v98 = v26[1];
      v86 = qvector_reserve(a1, v30, v32, 1);
      v33 = v98;
      *a1 = v86;
      v30 = v86;
      v31 = a1[1];
    }
    *(_BYTE *)(v30 + v31) = v33;
    v34 = a1[1];
    v35 = *a1;
    v36 = v34 + 1;
    v37 = v34 + 2;
    a1[1] = v36;
    v38 = v26[2];
    if ( a1[2] < v37 )
    {
      v99 = v26[2];
      v87 = qvector_reserve(a1, v35, v37, 1);
      v38 = v99;
      *a1 = v87;
      v35 = v87;
      v36 = a1[1];
    }
    *(_BYTE *)(v35 + v36) = v38;
    v39 = a1[1];
    v40 = *a1;
    v41 = v39 + 1;
    v42 = v39 + 2;
    a1[1] = v41;
    v43 = v26[3];
    if ( a1[2] < v42 )
    {
      v97 = v26[3];
      v85 = qvector_reserve(a1, v40, v42, 1);
      v43 = v97;
      *a1 = v85;
      v40 = v85;
      v41 = a1[1];
    }
    *(_BYTE *)(v40 + v41) = v43;
    v44 = a1[1];
    v45 = *a1;
    v46 = v44 + 1;
    v47 = v44 + 2;
    a1[1] = v46;
    v48 = v26[4];
    if ( a1[2] < v47 )
    {
      v96 = v26[4];
      v84 = qvector_reserve(a1, v45, v47, 1);
      v48 = v96;
      *a1 = v84;
      v45 = v84;
      v46 = a1[1];
    }
    *(_BYTE *)(v45 + v46) = v48;
    ++a1[1];
    v49 = pack_dw(v100, v101, *(unsigned __int16 *)(v26 + 5)) - (_QWORD)v100;
    if ( v49 )
      sub_806A00(a1, v100, v49);
    v52 = pack_dq(v100, v103, *(unsigned int *)(v26 + 7) + 1LL, v50, v51) - (_QWORD)v100;
    if ( v52 )
      sub_806A00(a1, v100, v52);
    v55 = pack_dq(v100, v103, *(unsigned int *)(v26 + 11) + 1LL, v53, v54) - (_QWORD)v100;
    if ( v55 )
      sub_806A00(a1, v100, v55);
    v58 = pack_dq(v100, v103, *(unsigned int *)(v26 + 15) + 1LL, v56, v57) - (_QWORD)v100;
    if ( v58 )
      sub_806A00(a1, v100, v58);
    v59 = a1[1];
    v60 = v26[19];
    v61 = *a1;
    if ( a1[2] < (unsigned __int64)(v59 + 1) )
    {
      v95 = v26[19];
      v83 = qvector_reserve(a1, v61, v59 + 1, 1);
      v60 = v95;
      *a1 = v83;
      v61 = v83;
      v59 = a1[1];
    }
    *(_BYTE *)(v61 + v59) = v60;
    v62 = a1[1];
    v63 = *a1;
    v64 = v62 + 1;
    v65 = v62 + 2;
    a1[1] = v64;
    v66 = v26[20];
    if ( a1[2] < v65 )
    {
      v94 = v26[20];
      v82 = qvector_reserve(a1, v63, v65, 1);
      v66 = v94;
      *a1 = v82;
      v63 = v82;
      v64 = a1[1];
    }
    *(_BYTE *)(v63 + v64) = v66;
    v67 = a1[1];
    v68 = *a1;
    v69 = v67 + 1;
    v70 = v67 + 2;
    a1[1] = v69;
    v71 = v26[21];
    if ( a1[2] < v70 )
    {
      v93 = v26[21];
      v81 = qvector_reserve(a1, v68, v70, 1);
      v71 = v93;
      *a1 = v81;
      v68 = v81;
      v69 = a1[1];
    }
    *(_BYTE *)(v68 + v69) = v71;
    v72 = a1[1];
    v73 = *a1;
    v74 = v72 + 1;
    v75 = v72 + 2;
    a1[1] = v74;
    v76 = v26[22];
    if ( a1[2] < v75 )
    {
      v92 = v26[22];
      v80 = qvector_reserve(a1, v73, v75, 1);
      v76 = v92;
      *a1 = v80;
      v73 = v80;
      v74 = a1[1];
    }
    *(_BYTE *)(v73 + v74) = v76;
    v26 += 24;
    v27 = a1[1] + 1;
    a1[1] = v27;
  }
  while ( v28 != v26 );
  return v103[0] - __readfsqword(0x28u);
}

