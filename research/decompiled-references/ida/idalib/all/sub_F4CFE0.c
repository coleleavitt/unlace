void __fastcall sub_F4CFE0(__int64 ***a1, char *a2, double a3)
{
  __int64 **v3; // rbx
  char v4; // r14
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r12
  char v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rdx
  __int64 *v14; // rdx
  __int64 *v15; // rbp
  __int64 v16; // r15
  __int64 *v17; // rax
  unsigned __int64 v18; // r9
  int v19; // r14d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // r14
  __int64 *v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // rdi
  void *v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdi
  void (__fastcall *v39)(__int64, __int64, __int64); // rax
  __int64 v40; // rax
  __int64 v41; // rbp
  size_t v42; // rax
  char v43[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v3 = *a1;
  v4 = *a2;
  v5 = ***a1;
  v6 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
  {
    sub_227BA10(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 10;
  }
  v7 = *v3;
  v8 = **v3;
  v9 = *((_BYTE *)*v3 + 8);
  v10 = v8;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, 4, 0, 0);
    v7 = *v3;
    v10 = **v3;
  }
  v11 = sub_227BF10(v10, v7[133], v7[134]);
  v12 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
  {
    v11 = sub_227BA10(v11, v4 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v12 + 1;
    *v12 = v4 == 0 ? 124 : 96;
  }
  v13 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v11 + 24) )
  {
    sub_227BA10(v11, 45);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v13 + 1;
    *v13 = 45;
  }
  v14 = v3[18];
  v15 = *v3;
  if ( v14 )
  {
    v41 = sub_227BF10(*v15, v3[17], v14);
    v42 = j__strlen(": ");
    sub_9954E0(v41, ": ", v42);
    v15 = *v3;
  }
  v16 = v15[134];
  v17 = (__int64 *)v15[133];
  v18 = v16 + 1;
  v19 = v4 == 0 ? 124 : 32;
  if ( v17 == v15 + 135 )
    v20 = 15;
  else
    v20 = v15[135];
  if ( v18 > v20 )
  {
    sub_998B30((__int64)(v15 + 133), v15[134], 0, nullptr, 1u);
    v17 = (__int64 *)v15[133];
    v18 = v16 + 1;
  }
  *((_BYTE *)v17 + v16) = v19;
  v21 = v15[133];
  v15[134] = v18;
  *(_BYTE *)(v21 + v16 + 1) = 0;
  v22 = *v3;
  v23 = (*v3)[134];
  v24 = (__int64 *)(*v3)[133];
  v25 = v23 + 1;
  if ( v24 == *v3 + 135 )
    v26 = 15;
  else
    v26 = v22[135];
  if ( v25 > v26 )
  {
    sub_998B30((__int64)(v22 + 133), (*v3)[134], 0, nullptr, 1u);
    v24 = (__int64 *)v22[133];
  }
  *((_BYTE *)v24 + v23) = 32;
  v27 = v22[133];
  v22[134] = v25;
  *(_BYTE *)(v27 + v23 + 1) = 0;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  *((_BYTE *)*v3 + 1057) = 1;
  v28 = *((_DWORD *)*v3 + 6);
  v29 = v3[1][137];
  v30 = *(void **)(v29 + 32);
  if ( *(_QWORD *)(v29 + 24) - (_QWORD)v30 > 0xDu )
  {
    qmemcpy(v30, "NoexceptExpr: ", 14);
    *(_QWORD *)(v29 + 32) += 14LL;
  }
  else
  {
    sub_227BF10(v29, "NoexceptExpr: ", 14);
  }
  sub_F439B0((__int64)v3[1], (unsigned __int64)v3[8], a3);
  v31 = *v3;
  v32 = *((unsigned int *)*v3 + 6);
  if ( v28 < (unsigned int)v32 )
  {
    v33 = v31[2];
    v43[0] = 1;
    v34 = v33 + 32 * v32 - 32;
    if ( !*(_QWORD *)(v34 + 16) )
LABEL_37:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v34 + 24))(v34, v43);
      v36 = *v3;
      v37 = (unsigned int)(*((_DWORD *)*v3 + 6) - 1);
      *((_DWORD *)v36 + 6) = v37;
      v38 = v36[2] + 32 * v37;
      v39 = *(void (__fastcall **)(__int64, __int64, __int64))(v38 + 16);
      if ( v39 )
        v39(v38, v38, 3);
      v31 = *v3;
      v40 = *((unsigned int *)*v3 + 6);
      if ( v28 >= (unsigned int)v40 )
        break;
      v35 = v31[2];
      v43[0] = 1;
      v34 = v35 + 32 * v40 - 32;
      if ( !*(_QWORD *)(v34 + 16) )
        goto LABEL_37;
    }
  }
  sub_F30AA0(v31 + 133, v31[134] - 2);
}
