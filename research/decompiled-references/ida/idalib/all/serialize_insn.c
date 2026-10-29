unsigned __int64 __fastcall serialize_insn(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  __int64 v10; // rax
  char v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char v17; // r12
  size_t v18; // rax
  char *v19; // r12
  __int64 v20; // rdx
  char *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  char v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  char v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  char v41; // r8
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  __int64 v46; // rax
  char v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  char v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  char v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  char v63; // r8
  char v64; // r8
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  char v78; // [rsp+Fh] [rbp-59h]
  char v79; // [rsp+Fh] [rbp-59h]
  char v80; // [rsp+Fh] [rbp-59h]
  char v81; // [rsp+Fh] [rbp-59h]
  char v82; // [rsp+Fh] [rbp-59h]
  char v83; // [rsp+Fh] [rbp-59h]
  char v84; // [rsp+Fh] [rbp-59h]
  char v85; // [rsp+Fh] [rbp-59h]
  char v86; // [rsp+Fh] [rbp-59h]
  _BYTE v87[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v88[2]; // [rsp+21h] [rbp-47h] BYREF
  _BYTE v89[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v90[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *a2;
  v90[0] = __readfsqword(0x28u);
  v4 = pack_dq(v87, v90, v2 + 1) - (_QWORD)v87;
  if ( v4 )
    sub_829D40(a1, v87, v4);
  v5 = pack_dq(v87, v90, a2[1] + 1) - (_QWORD)v87;
  if ( v5 )
    sub_829D40(a1, v87, v5);
  v6 = pack_dq(v87, v90, a2[2] + 1) - (_QWORD)v87;
  if ( v6 )
    sub_829D40(a1, v87, v6);
  v7 = pack_dw(v87, v88, *((unsigned __int16 *)a2 + 12)) - (_QWORD)v87;
  if ( v7 )
    sub_829D40(a1, v87, v7);
  v8 = pack_dw(v87, v88, *((unsigned __int16 *)a2 + 13)) - (_QWORD)v87;
  if ( v8 )
    sub_829D40(a1, v87, v8);
  v9 = pack_dd(v87, v89, *((unsigned int *)a2 + 7)) - (_QWORD)v87;
  if ( v9 )
    sub_829D40(a1, v87, v9);
  v10 = a1[1];
  v11 = *((_BYTE *)a2 + 32);
  v12 = *a1;
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    v76 = qvector_reserve(a1, v12, v10 + 1, 1);
    *a1 = v76;
    v12 = v76;
    v10 = a1[1];
  }
  *(_BYTE *)(v12 + v10) = v11;
  v13 = a1[1];
  v14 = *a1;
  v15 = v13 + 1;
  v16 = v13 + 2;
  a1[1] = v15;
  v17 = *((_BYTE *)a2 + 33);
  if ( a1[2] < v16 )
  {
    v77 = qvector_reserve(a1, v14, v16, 1);
    *a1 = v77;
    v14 = v77;
    v15 = a1[1];
  }
  *(_BYTE *)(v14 + v15) = v17;
  ++a1[1];
  v18 = pack_dw(v87, v88, *((unsigned __int16 *)a2 + 17)) - (_QWORD)v87;
  if ( v18 )
    sub_829D40(a1, v87, v18);
  v19 = (char *)a2 + 41;
  v20 = a1[1];
  v21 = (char *)a2 + 361;
  do
  {
    v64 = *v19;
    v65 = *a1;
    if ( a1[2] < (unsigned __int64)(v20 + 1) )
    {
      v78 = *v19;
      v66 = qvector_reserve(a1, v65, v20 + 1, 1);
      v20 = a1[1];
      v64 = v78;
      *a1 = v66;
      v65 = v66;
    }
    *(_BYTE *)(v65 + v20) = v64;
    v22 = a1[1];
    v23 = *a1;
    v24 = v22 + 1;
    v25 = v22 + 2;
    a1[1] = v24;
    v26 = v19[1];
    if ( a1[2] < v25 )
    {
      v85 = v19[1];
      v73 = qvector_reserve(a1, v23, v25, 1);
      v26 = v85;
      *a1 = v73;
      v23 = v73;
      v24 = a1[1];
    }
    *(_BYTE *)(v23 + v24) = v26;
    v27 = a1[1];
    v28 = *a1;
    v29 = v27 + 1;
    v30 = v27 + 2;
    a1[1] = v29;
    v31 = v19[2];
    if ( a1[2] < v30 )
    {
      v86 = v19[2];
      v74 = qvector_reserve(a1, v28, v30, 1);
      v31 = v86;
      *a1 = v74;
      v28 = v74;
      v29 = a1[1];
    }
    *(_BYTE *)(v28 + v29) = v31;
    v32 = a1[1];
    v33 = *a1;
    v34 = v32 + 1;
    v35 = v32 + 2;
    a1[1] = v34;
    v36 = v19[3];
    if ( a1[2] < v35 )
    {
      v84 = v19[3];
      v72 = qvector_reserve(a1, v33, v35, 1);
      v36 = v84;
      *a1 = v72;
      v33 = v72;
      v34 = a1[1];
    }
    *(_BYTE *)(v33 + v34) = v36;
    v37 = a1[1];
    v38 = *a1;
    v39 = v37 + 1;
    v40 = v37 + 2;
    a1[1] = v39;
    v41 = v19[4];
    if ( a1[2] < v40 )
    {
      v83 = v19[4];
      v71 = qvector_reserve(a1, v38, v40, 1);
      v41 = v83;
      *a1 = v71;
      v38 = v71;
      v39 = a1[1];
    }
    *(_BYTE *)(v38 + v39) = v41;
    ++a1[1];
    v42 = pack_dw(v87, v88, *(unsigned __int16 *)(v19 + 5)) - (_QWORD)v87;
    if ( v42 )
      sub_829D40(a1, v87, v42);
    v43 = pack_dq(v87, v90, *(_QWORD *)(v19 + 7) + 1LL) - (_QWORD)v87;
    if ( v43 )
      sub_829D40(a1, v87, v43);
    v44 = pack_dq(v87, v90, *(_QWORD *)(v19 + 15) + 1LL) - (_QWORD)v87;
    if ( v44 )
      sub_829D40(a1, v87, v44);
    v45 = pack_dq(v87, v90, *(_QWORD *)(v19 + 23) + 1LL) - (_QWORD)v87;
    if ( v45 )
      sub_829D40(a1, v87, v45);
    v46 = a1[1];
    v47 = v19[31];
    v48 = *a1;
    if ( a1[2] < (unsigned __int64)(v46 + 1) )
    {
      v82 = v19[31];
      v70 = qvector_reserve(a1, v48, v46 + 1, 1);
      v47 = v82;
      *a1 = v70;
      v48 = v70;
      v46 = a1[1];
    }
    *(_BYTE *)(v48 + v46) = v47;
    v49 = a1[1];
    v50 = *a1;
    v51 = v49 + 1;
    v52 = v49 + 2;
    a1[1] = v51;
    v53 = v19[32];
    if ( a1[2] < v52 )
    {
      v81 = v19[32];
      v69 = qvector_reserve(a1, v50, v52, 1);
      v53 = v81;
      *a1 = v69;
      v50 = v69;
      v51 = a1[1];
    }
    *(_BYTE *)(v50 + v51) = v53;
    v54 = a1[1];
    v55 = *a1;
    v56 = v54 + 1;
    v57 = v54 + 2;
    a1[1] = v56;
    v58 = v19[33];
    if ( a1[2] < v57 )
    {
      v80 = v19[33];
      v68 = qvector_reserve(a1, v55, v57, 1);
      v58 = v80;
      *a1 = v68;
      v55 = v68;
      v56 = a1[1];
    }
    *(_BYTE *)(v55 + v56) = v58;
    v59 = a1[1];
    v60 = *a1;
    v61 = v59 + 1;
    v62 = v59 + 2;
    a1[1] = v61;
    v63 = v19[34];
    if ( a1[2] < v62 )
    {
      v79 = v19[34];
      v67 = qvector_reserve(a1, v60, v62, 1);
      v63 = v79;
      *a1 = v67;
      v60 = v67;
      v61 = a1[1];
    }
    *(_BYTE *)(v60 + v61) = v63;
    v19 += 40;
    v20 = a1[1] + 1;
    a1[1] = v20;
  }
  while ( v21 != v19 );
  return v90[0] - __readfsqword(0x28u);
}
