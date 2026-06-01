void __fastcall sub_F32530(__int64 ***a1, char *a2)
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
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  void (__fastcall *v36)(__int64, __int64, __int64); // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _BYTE *v39; // rdx
  __int64 v40; // rbp
  size_t v41; // rax
  char v42[57]; // [rsp+1Fh] [rbp-39h] BYREF

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
  v13 = v2[6];
  v14 = *v2;
  if ( v13 )
  {
    v40 = sub_227BF10(*v14, v2[5], v13);
    v41 = j__strlen(": ");
    sub_9954E0(v40, ": ", v41);
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
  if ( v2[2] )
  {
    v38 = sub_9954E0(v2[3][137], v2[1], (size_t)v2[2]);
    v39 = *(_BYTE **)(v38 + 32);
    if ( (unsigned __int64)v39 >= *(_QWORD *)(v38 + 24) )
    {
      sub_227BA10(v38, 32);
    }
    else
    {
      *(_QWORD *)(v38 + 32) = v39 + 1;
      *v39 = 32;
    }
  }
  sub_F2A6D0((__int64)v2[3], (__int64)v2[4]);
  v28 = *v2;
  v29 = *((unsigned int *)*v2 + 6);
  if ( v27 < (unsigned int)v29 )
  {
    v30 = v28[2];
    v42[0] = 1;
    v31 = v30 + 32 * v29 - 32;
    if ( !*(_QWORD *)(v31 + 16) )
LABEL_38:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v31 + 24))(v31, v42);
      v33 = *v2;
      v34 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v33 + 6) = v34;
      v35 = v33[2] + 32 * v34;
      v36 = *(void (__fastcall **)(__int64, __int64, __int64))(v35 + 16);
      if ( v36 )
        v36(v35, v35, 3);
      v28 = *v2;
      v37 = *((unsigned int *)*v2 + 6);
      if ( v27 >= (unsigned int)v37 )
        break;
      v32 = v28[2];
      v42[0] = 1;
      v31 = v32 + 32 * v37 - 32;
      if ( !*(_QWORD *)(v31 + 16) )
        goto LABEL_38;
    }
  }
  sub_F30AA0(v28 + 133, v28[134] - 2);
}
