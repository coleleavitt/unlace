__int64 __fastcall sub_1A12440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // r13
  __int64 v41; // rsi
  unsigned int *v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdi
  unsigned int *v50; // r15
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v63[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v65; // [rsp+40h] [rbp-A8h] BYREF
  char v66; // [rsp+98h] [rbp-50h]
  unsigned int v67; // [rsp+A0h] [rbp-48h]
  char v68; // [rsp+A4h] [rbp-44h]

  v6 = a2;
  v61 = a3;
  v8 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
  {
    v9 = 1;
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), a2, 0x134Bu, 0);
    v62 = sub_C1BEF0((__int64)&v61, a1 + 8, v10, v11);
    sub_162B6D0((__int64)v63, &v62);
    sub_15F7200(v63);
    return v9;
  }
  while ( (unsigned __int8)(*(_BYTE *)(v8 + 16) - 2) <= 4u )
LABEL_5:
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v13 = sub_F63050(v8, a2, a3, a4);
    if ( v13 )
    {
      v8 = v13;
      goto LABEL_5;
    }
  }
  v14 = sub_F63270(v8, a2, a3, a4, a5, a6);
  v19 = (__int64)v14;
  if ( !v14 )
    return 0;
  if ( *((_BYTE *)v14 + 73) >> 5 == 2 )
    return 0;
  sub_7052B0((__int64 *)(v14[13] + 96LL), v14[13], v15, v16, v17, v18);
  if ( (**(_BYTE **)(v19 + 128) & 1) != 0 )
    return 0;
  v24 = *(_QWORD *)(v19 + 104);
  sub_7052B0((__int64 *)(v24 + 96), v24, v20, v21, v22, v23);
  if ( (*(_BYTE *)(*(_QWORD *)(v19 + 128) + 3LL) & 1) == 0 )
    return 0;
  v33 = sub_B7E900(v19, v24, v25, v26, v27, v28);
  if ( v33 )
  {
LABEL_15:
    if ( (*(_BYTE *)(v33 + 68) & 1) == 0 || *(_QWORD *)(v33 + 40) )
    {
      v9 = sub_1A12440(a1, *(unsigned int *)(v33 + 24), *(_QWORD *)(v33 + 48));
      if ( (_BYTE)v9 )
        goto LABEL_32;
    }
    while ( 1 )
    {
      v34 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v33 = v34;
      if ( !v34 )
        break;
      if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_15;
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 104) + 96LL), *(_QWORD *)(v19 + 104), v29, v30, v31, v32);
  v39 = *(_QWORD *)(v19 + 128);
  v40 = (*(_BYTE *)(v39 + 24) & 1) != 0 ? sub_B96980(v39) : *(_QWORD *)(v39 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 104) + 96LL), *(_QWORD *)(v19 + 104), v35, v36, v37, v38);
  v41 = *(_QWORD *)(v19 + 104);
  v42 = (unsigned int *)(v40 + 24LL * *(unsigned int *)(*(_QWORD *)(v19 + 128) + 16LL));
  sub_7052B0((__int64 *)(v41 + 96), v41, v43, v44, v45, v46);
  v49 = *(_QWORD *)(v19 + 128);
  v50 = (*(_BYTE *)(v49 + 24) & 1) != 0 ? (unsigned int *)sub_B96980(v49) : *(unsigned int **)(v49 + 24);
  if ( v50 == v42 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v51 = **((_QWORD **)v50 + 2) & 0xFFFFFFFFFFFFFFF0LL;
      v52 = *(_QWORD *)v51;
      v53 = (*(_BYTE *)(*(_QWORD *)v51 + 8LL) & 0xF) != 0
          ? sub_F64F00(**((_QWORD **)v50 + 2), v41, v52, v47, v48) & 0xFFFFFFFFFFFFFFF0LL
          : v52 & 0xFFFFFFFFFFFFFFF0LL;
      v41 = *v50;
      v9 = sub_1A12440(a1, v41, v53);
      if ( (_BYTE)v9 )
        break;
      v50 += 6;
      if ( v42 == v50 )
        return 0;
    }
LABEL_32:
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), v6, 0x193Du, 0);
    if ( v66 )
    {
      sub_AE9DF0(&v65, v19, 0xAu);
    }
    else if ( v68 )
    {
      v56 = sub_168B9E0(v63);
      v59 = v64;
      if ( v64 )
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
      v62 = v59;
      v60 = sub_1587BC0(v56, &v62, v54, v55, v57, v58);
      sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v67 + 8), v19, 0xAu);
    }
    sub_15F7200(v63);
  }
  return v9;
}
