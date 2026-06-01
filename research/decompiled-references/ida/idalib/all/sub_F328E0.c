void __fastcall sub_F328E0(__int64 ***a1, char *a2)
{
  __int64 **v2; // rbx
  char v3; // r14
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // r12
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // r15
  __int64 *v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // r14
  __int64 *v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ebp
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  __int64 *v30; // rax
  char v31; // r14
  __int64 v32; // r12
  __int64 v33; // r15
  const char *v34; // r13
  size_t v35; // rax
  void *v36; // rdi
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  void (__fastcall *v45)(__int64, __int64, __int64); // rax
  __int64 v46; // rax
  __int64 v47; // rbp
  size_t v48; // rax
  size_t v49; // [rsp+8h] [rbp-50h]
  char v50[57]; // [rsp+1Fh] [rbp-39h] BYREF

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
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, v3 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = v3 == 0 ? 124 : 96;
  }
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 45);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v12 + 1;
    *v12 = 45;
  }
  v13 = v2[4];
  v14 = *v2;
  if ( v13 )
  {
    v47 = sub_227BF10(*v14, v2[3], v13);
    v48 = j__strlen(": ");
    sub_9954E0(v47, ": ", v48);
    v14 = *v2;
  }
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
  v28 = v2[1][137];
  v29 = *(_QWORD **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v29 > 7u )
  {
    *v29 = 0x2070756E61656C63LL;
    *(_QWORD *)(v28 + 32) += 8LL;
  }
  else
  {
    sub_227BF10(v28, "cleanup ", 8);
  }
  v30 = v2[1];
  v31 = *((_BYTE *)v30 + 1104);
  v32 = v30[137];
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v32 + 24LL))(v32, 5, 1, 0);
    v33 = v2[1][137];
    v34 = (const char *)sub_EE9730(v2[2]);
    if ( !v34 )
    {
LABEL_28:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      goto LABEL_29;
    }
  }
  else
  {
    v33 = v30[137];
    v34 = (const char *)sub_EE9730(v2[2]);
    if ( !v34 )
      goto LABEL_29;
  }
  v35 = strlen(v34);
  v36 = *(void **)(v33 + 32);
  if ( v35 <= *(_QWORD *)(v33 + 24) - (_QWORD)v36 )
  {
    if ( v35 )
    {
      v49 = v35;
      memcpy(v36, v34, v35);
      *(_QWORD *)(v33 + 32) += v49;
    }
  }
  else
  {
    sub_227BF10(v33, v34, v35);
  }
  if ( v31 )
    goto LABEL_28;
LABEL_29:
  sub_F29AE0((__int64)v2[1], (__int64)v2[2]);
  v37 = *v2;
  v38 = *((unsigned int *)*v2 + 6);
  if ( v27 < (unsigned int)v38 )
  {
    v39 = v37[2];
    v50[0] = 1;
    v40 = v39 + 32 * v38 - 32;
    if ( !*(_QWORD *)(v40 + 16) )
LABEL_47:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v40 + 24))(v40, v50);
      v42 = *v2;
      v43 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v42 + 6) = v43;
      v44 = v42[2] + 32 * v43;
      v45 = *(void (__fastcall **)(__int64, __int64, __int64))(v44 + 16);
      if ( v45 )
        v45(v44, v44, 3);
      v37 = *v2;
      v46 = *((unsigned int *)*v2 + 6);
      if ( v27 >= (unsigned int)v46 )
        break;
      v41 = v37[2];
      v50[0] = 1;
      v40 = v41 + 32 * v46 - 32;
      if ( !*(_QWORD *)(v40 + 16) )
        goto LABEL_47;
    }
  }
  sub_F30AA0(v37 + 133, v37[134] - 2);
}
