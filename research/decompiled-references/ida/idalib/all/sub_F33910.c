void __fastcall sub_F33910(__int64 ***a1, char *a2)
{
  __int64 **v2; // r15
  char v3; // r13
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbp
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 *v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r13d
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // r13
  __int64 *v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r13d
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 v30; // r14
  char *v31; // r12
  size_t v32; // rdx
  size_t v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdi
  void (__fastcall *v44)(__int64, __int64, __int64); // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  size_t v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rbp
  char v50; // r12
  __int64 v51; // rbx
  size_t v52; // rax
  void *v53; // rdi
  size_t v54; // r14
  char v55; // [rsp+0h] [rbp-78h]
  __int64 v56; // [rsp+8h] [rbp-70h]
  char *v57; // [rsp+10h] [rbp-68h] BYREF
  __int64 v58; // [rsp+18h] [rbp-60h]
  void *v59[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v60; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = ***a1;
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v5 + 1;
    *v5 = 10;
  }
  v6 = *v2;
  v7 = **v2;
  v8 = *((_BYTE *)*v2 + 8);
  v9 = v7;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 4, 0, 0);
    v6 = *v2;
    v9 = **v2;
  }
  v10 = sub_227BF10(v9, v6[133], v6[134]);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 < *(_QWORD *)(v10 + 24) )
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = v3 == 0 ? 124 : 96;
    v12 = *(_BYTE **)(v10 + 32);
    if ( (unsigned __int64)v12 < *(_QWORD *)(v10 + 24) )
      goto LABEL_7;
LABEL_37:
    sub_227BA10(v10, 45);
    v13 = v2[4];
    v14 = *v2;
    if ( !v13 )
      goto LABEL_8;
    goto LABEL_38;
  }
  v10 = sub_227BA10(v10, v3 == 0 ? 124 : 96);
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
    goto LABEL_37;
LABEL_7:
  *(_QWORD *)(v10 + 32) = v12 + 1;
  *v12 = 45;
  v13 = v2[4];
  v14 = *v2;
  if ( !v13 )
    goto LABEL_8;
LABEL_38:
  v46 = sub_227BF10(*v14, v2[3], v13);
  v47 = j__strlen(": ");
  sub_9954E0(v46, ": ", v47);
  v14 = *v2;
LABEL_8:
  v15 = v14[134];
  v16 = (__int64 *)v14[133];
  v17 = v15 + 1;
  v18 = v3 == 0 ? 124 : 32;
  if ( v16 == v14 + 135 )
    v19 = 15;
  else
    v19 = v14[135];
  if ( v17 > v19 )
  {
    sub_998B30((__int64)(v14 + 133), v14[134], 0, nullptr, 1u);
    v16 = (__int64 *)v14[133];
    v17 = v15 + 1;
  }
  *((_BYTE *)v16 + v15) = v18;
  v20 = v14[133];
  v14[134] = v17;
  *(_BYTE *)(v20 + v15 + 1) = 0;
  v21 = *v2;
  v22 = (*v2)[134];
  v23 = (__int64 *)(*v2)[133];
  v24 = v22 + 1;
  if ( v23 == *v2 + 135 )
    v25 = 15;
  else
    v25 = v21[135];
  if ( v24 > v25 )
  {
    sub_998B30((__int64)(v21 + 133), (*v2)[134], 0, nullptr, 1u);
    v23 = (__int64 *)v21[133];
  }
  *((_BYTE *)v23 + v22) = 32;
  v26 = v21[133];
  v21[134] = v24;
  *(_BYTE *)(v26 + v22 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v27 = *((_DWORD *)*v2 + 6);
  v28 = v2[1];
  if ( v28 )
  {
    v29 = v2[2];
    v30 = v29[137];
    v55 = *((_BYTE *)v29 + 1104);
    if ( v55 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v30 + 24LL))(v30, 4, 1, 0);
      v28 = v2[1];
    }
    v31 = (char *)sub_20EB760(*((unsigned int *)v28 + 2), 0);
    v33 = v32;
    v56 = sub_995540(v2[2][137], "OMP");
    if ( v33 )
    {
      --v33;
      v57 = v31++;
      v58 = 1;
    }
    else
    {
      v57 = v31;
      v58 = 0;
    }
    sub_2246780(v59, &v57);
    v34 = sub_227BF10(v56, v59[0], v59[1]);
    v35 = sub_9954E0(v34, v31, v33);
    sub_995540(v35, "Clause");
    if ( v59[0] != &v60 )
      operator delete(v59[0]);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    sub_F29AE0((__int64)v2[2], (__int64)v2[1]);
    sub_F2A050((__int64)v2[2], *v2[1]);
  }
  else
  {
    v48 = v2[2];
    v49 = v48[137];
    v50 = *((_BYTE *)v48 + 1104);
    v51 = v49;
    if ( v50 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v49 + 24LL))(v49, 4, 0, 0);
      v51 = v2[2][137];
    }
    v52 = j__strlen("<<<NULL>>> OMPClause");
    v53 = *(void **)(v51 + 32);
    v54 = v52;
    if ( v52 > *(_QWORD *)(v51 + 24) - (_QWORD)v53 )
    {
      sub_227BF10(v51, "<<<NULL>>> OMPClause", v52);
    }
    else if ( v52 )
    {
      memcpy(v53, "<<<NULL>>> OMPClause", v52);
      *(_QWORD *)(v51 + 32) += v54;
    }
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
  }
  v36 = *v2;
  v37 = *((unsigned int *)*v2 + 6);
  if ( v27 < (unsigned int)v37 )
  {
    v38 = v36[2];
    LOBYTE(v59[0]) = 1;
    v39 = v38 + 32 * v37 - 32;
    if ( !*(_QWORD *)(v39 + 16) )
LABEL_51:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, void **))(v39 + 24))(v39, v59);
      v41 = *v2;
      v42 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v41 + 6) = v42;
      v43 = v41[2] + 32 * v42;
      v44 = *(void (__fastcall **)(__int64, __int64, __int64))(v43 + 16);
      if ( v44 )
        v44(v43, v43, 3);
      v36 = *v2;
      v45 = *((unsigned int *)*v2 + 6);
      if ( v27 >= (unsigned int)v45 )
        break;
      v40 = v36[2];
      LOBYTE(v59[0]) = 1;
      v39 = v40 + 32 * v45 - 32;
      if ( !*(_QWORD *)(v39 + 16) )
        goto LABEL_51;
    }
  }
  sub_F30AA0(v36 + 133, v36[134] - 2);
}
