void __fastcall sub_A7DF50(_QWORD *a1, __int64 a2)
{
  bool v3; // zf
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  unsigned int *v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  unsigned int *v23; // rax
  unsigned int v24; // eax
  _DWORD *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  unsigned int *v34; // rax
  unsigned int *v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned int *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  unsigned int *v46; // rax
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  unsigned int *v51; // rax
  int v52; // eax
  unsigned int *v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // rax
  unsigned int *v60; // rax
  int v61; // eax
  __int64 v62; // r13
  unsigned int *v63; // rax
  unsigned int *v64; // rax
  int v65; // eax
  __int64 v66; // r13
  unsigned int *v67; // rax
  __int64 v68; // rax
  unsigned int *v69; // rax
  int v70; // eax
  char v71; // al
  unsigned int v72; // eax
  __int64 v73; // r13
  unsigned int v74; // eax
  int v75; // [rsp+Ch] [rbp-D4h]
  __int64 v76; // [rsp+10h] [rbp-D0h]
  __int64 v77; // [rsp+10h] [rbp-D0h]
  int v78[2]; // [rsp+18h] [rbp-C8h]
  int v79[2]; // [rsp+18h] [rbp-C8h]
  unsigned int v80; // [rsp+20h] [rbp-C0h]
  __int64 v81; // [rsp+20h] [rbp-C0h]
  __int64 v82; // [rsp+28h] [rbp-B8h]
  int v83; // [rsp+28h] [rbp-B8h]
  __int64 v84; // [rsp+28h] [rbp-B8h]
  __int64 v85; // [rsp+28h] [rbp-B8h]
  __int64 v86; // [rsp+28h] [rbp-B8h]
  __int64 v87; // [rsp+30h] [rbp-B0h]
  __int64 v88; // [rsp+38h] [rbp-A8h]
  __int64 v89; // [rsp+40h] [rbp-A0h]
  __int64 v90; // [rsp+40h] [rbp-A0h]
  __int64 v91; // [rsp+40h] [rbp-A0h]
  unsigned int v92; // [rsp+48h] [rbp-98h]
  unsigned int v93; // [rsp+48h] [rbp-98h]
  __int64 v94; // [rsp+48h] [rbp-98h]
  unsigned int v95; // [rsp+5Ch] [rbp-84h] BYREF
  __int64 v96; // [rsp+60h] [rbp-80h] BYREF
  __int64 v97; // [rsp+68h] [rbp-78h] BYREF
  char v98[32]; // [rsp+70h] [rbp-70h] BYREF
  __m128 v99[5]; // [rsp+90h] [rbp-50h] BYREF

  v3 = *(_WORD *)(a2 + 4) == 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v89 = (__int64)(a1 + 2);
  if ( v3
    && (v26 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL)) != 0
    && *(_DWORD *)v26 == 5
    && ((v27 = *(_DWORD *)(v26 + 4), v27 == 36) || v27 == 37) )
  {
    v28 = *(_QWORD *)(v26 + 8);
    v96 = *(_QWORD *)(a2 + 32);
    v97 = *(_QWORD *)(a2 + 40);
    if ( *(_BYTE *)(v28 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v80 = *(_DWORD *)v28;
    v95 = *(_DWORD *)v28;
  }
  else if ( (unsigned __int8)sub_A733D0(a2, 38, &v95, &v96, &v97) )
  {
    v80 = v95;
  }
  else
  {
    v71 = sub_A733D0(a2, 39, &v95, &v96, &v97);
    v80 = v95;
    if ( !v71 )
    {
      sub_1872CE0("");
      sub_1873130(114, 2609);
    }
  }
  sub_17F6290(v98, v80);
  v7 = a1[3];
  v88 = a1[1];
  if ( !v7 )
  {
    sub_16669E0(v89);
    v7 = a1[3];
  }
  sub_166A700(v7, (unsigned int)v98, 1, v4, v5, v6);
  v8 = sub_15E1B70(a1[2]);
  v12 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v13 = a1[3];
  v87 = a1[1];
  if ( !v13 )
  {
    sub_16669E0(v89);
    v13 = a1[3];
  }
  sub_166A700(v13, (unsigned int)v98, 1, v9, v10, v11);
  v14 = sub_15E1B70(a1[2]);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *(_QWORD *)(*a1 + 16LL);
  sub_993400(v89, 0);
  v17 = (unsigned int *)sub_15E1B70(a1[2]);
  v18 = sub_A7A500(a1, v17);
  sub_B6A440(v16, *(unsigned int *)(*a1 + 8LL), v18, 0, 0);
  v82 = *(_QWORD *)(*a1 + 16LL);
  sub_7542A0((__int64)v99, (__int64)v98, 1u);
  v22 = a1[3];
  if ( !v22 )
  {
    sub_16669E0(v89);
    v22 = a1[3];
  }
  sub_166A700(v22, (unsigned int)v99, 1, v19, v20, v21);
  v23 = (unsigned int *)sub_15E1B70(a1[2]);
  v24 = sub_A7A500(a1, v23);
  sub_B6A440(v82, *(unsigned int *)(*a1 + 8LL), v24, 0, 0);
  sub_25A130((char *)v99);
  if ( *(_WORD *)(a2 + 4) || (v25 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v25 != 5 )
  {
LABEL_17:
    sub_1872CE0("");
    sub_1873130(114, 2650);
  }
  v29 = v25[1];
  switch ( v29 )
  {
    case '$':
      v81 = *(_QWORD *)(*a1 + 16LL);
      sub_A7AD40(v99, a1, a2, v12);
      v86 = v99[0].m128_i64[1];
      v90 = v99[0].m128_u64[0];
      v72 = sub_A7A500(a1, (unsigned int *)v99[0].m128_u64[0]);
      sub_B6A440(v81, *(unsigned int *)(*a1 + 8LL), v72, 0, 0);
      sub_A72BE0(v90, v86);
      v91 = *(_QWORD *)(*a1 + 16LL);
      sub_A7AD40(v99, a1, a2, v15);
      v73 = v99[0].m128_i64[1];
      v94 = v99[0].m128_u64[0];
      v74 = sub_A7A500(a1, (unsigned int *)v99[0].m128_u64[0]);
      sub_B6A440(v91, *(unsigned int *)(*a1 + 8LL), v74, 0, 0);
      sub_A72BE0(v94, v73);
      break;
    case '%':
    case '\'':
      v62 = a1[1];
      v85 = *(_QWORD *)(*a1 + 16LL);
      sub_993400(v89, 0);
      v63 = (unsigned int *)sub_15E1B70(v62);
      LODWORD(v62) = sub_A7A500(a1, v63);
      sub_88EF10(v89, v80);
      v64 = (unsigned int *)sub_15E1B70(a1[2]);
      v65 = sub_A7A500(a1, v64);
      sub_B6A470(v85, *(unsigned int *)(*a1 + 8LL), v65 ^ 1u, (unsigned int)v62, 0, 0);
      v66 = *(_QWORD *)(*a1 + 16LL);
      v67 = (unsigned int *)sub_15E1B70(a1[1]);
      v93 = sub_A7A500(a1, v67);
      v68 = sub_993400(v89, 0);
      v69 = (unsigned int *)sub_A72D10(a1[2], v15, v68);
      v70 = sub_A7A500(a1, v69);
      sub_B6A470(v66, *(unsigned int *)(*a1 + 8LL), v70 ^ 1u, v93, 0, 0);
      break;
    case '&':
      sub_88EB80((__int64)v99, (__int64)v98, 2u);
      sub_A72970(v89, (int)v99, v30, v31, v32, v33);
      v34 = (unsigned int *)sub_15E1B70(a1[2]);
      v83 = sub_A7A500(a1, v34);
      sub_25A130((char *)v99);
      *(_QWORD *)v78 = a1[1];
      v76 = *(_QWORD *)(*a1 + 16LL);
      sub_993400(v89, 0);
      v35 = (unsigned int *)sub_15E1B70(v78[0]);
      v75 = sub_A7A500(a1, v35);
      sub_88EF10(v89, v80);
      sub_A72970(v89, (int)v98, v36, v37, v38, v39);
      sub_15E1B70(a1[2]);
      v40 = (unsigned int *)sub_15E1B70(a1[2]);
      v41 = sub_A7A500(a1, v40);
      sub_B6A4A0(v76, *(_DWORD *)(*a1 + 8LL), v41 ^ 1, v83, v75, 0, 0);
      *(_QWORD *)v79 = a1[1];
      v77 = *(_QWORD *)(*a1 + 16LL);
      sub_7542A0((__int64)v99, (__int64)v98, 1u);
      sub_A72970(v89, (int)v99, v42, v43, v44, v45);
      v46 = (unsigned int *)sub_15E1B70(v79[0]);
      v79[0] = sub_A7A500(a1, v46);
      sub_88EF10(v89, v80);
      sub_A72970(v89, (int)v98, v47, v48, v49, v50);
      sub_15E1B70(a1[2]);
      v51 = (unsigned int *)sub_15E1B70(a1[2]);
      v52 = sub_A7A500(a1, v51);
      sub_B6A4A0(v77, *(_DWORD *)(*a1 + 8LL), v52 ^ 1, v83 ^ 1, v79[0], 0, 0);
      sub_25A130((char *)v99);
      v84 = *(_QWORD *)(*a1 + 16LL);
      v53 = (unsigned int *)sub_15E1B70(a1[1]);
      v92 = sub_A7A500(a1, v53);
      v54 = sub_993400(v89, 0);
      sub_A72970(v89, (int)v98, v55, v56, v57, v58);
      v59 = sub_15E1B70(a1[2]);
      v60 = (unsigned int *)sub_A72D10(a1[2], v59, v54);
      v61 = sub_A7A500(a1, v60);
      sub_B6A470(v84, *(unsigned int *)(*a1 + 8LL), v61 ^ 1u, v92, 0, 0);
      break;
    default:
      goto LABEL_17;
  }
  sub_A72BE0(v15, v87);
  sub_A72BE0(v12, v88);
  sub_25A130(v98);
}

