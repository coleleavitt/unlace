void __fastcall sub_F3AF40(__int64 ***a1, char *a2)
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
  int v11; // r8d
  _BYTE *v12; // rcx
  _BYTE *v13; // rdx
  int v14; // ecx
  __int64 *v15; // rdx
  __int64 *v16; // rbp
  __int64 v17; // r15
  __int64 *v18; // rax
  unsigned __int64 v19; // r9
  int v20; // r14d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rbp
  __int64 v24; // r14
  __int64 *v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 *v30; // r13
  void *v31; // r14
  unsigned int v32; // r12d
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  void (__fastcall *v40)(__int64, __int64, __int64); // rax
  __int64 v41; // rbp
  size_t v42; // rax
  int v43; // [rsp+0h] [rbp-88h]
  __int64 v44; // [rsp+8h] [rbp-80h]
  int v45[30]; // [rsp+10h] [rbp-78h] BYREF

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
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, v3 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v12 + 1;
    *v12 = v3 == 0 ? 124 : 96;
  }
  v13 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 45);
  }
  else
  {
    v14 = (_DWORD)v13 + 1;
    *(_QWORD *)(v10 + 32) = v13 + 1;
    *v13 = 45;
  }
  v15 = v2[4];
  v16 = *v2;
  if ( v15 )
  {
    v41 = sub_227BF10(*v16, v2[3], v15);
    v42 = j__strlen(": ");
    sub_9954E0(v41, ": ", v42);
    v16 = *v2;
  }
  v17 = v16[134];
  v18 = (__int64 *)v16[133];
  v19 = v17 + 1;
  v20 = v3 == 0 ? 124 : 32;
  if ( v18 == v16 + 135 )
    v21 = 15;
  else
    v21 = v16[135];
  if ( v19 > v21 )
  {
    v44 = v17 + 1;
    sub_998B30((__int64)(v16 + 133), v16[134], 0, nullptr, 1u);
    v18 = (__int64 *)v16[133];
    v19 = v17 + 1;
  }
  *((_BYTE *)v18 + v17) = v20;
  v22 = v16[133];
  v16[134] = v19;
  *(_BYTE *)(v22 + v17 + 1) = 0;
  v23 = *v2;
  v24 = (*v2)[134];
  v25 = (__int64 *)(*v2)[133];
  v26 = v24 + 1;
  if ( v25 == *v2 + 135 )
    v27 = 15;
  else
    v27 = v23[135];
  if ( v26 > v27 )
  {
    sub_998B30((__int64)(v23 + 133), (*v2)[134], 0, nullptr, 1u);
    v25 = (__int64 *)v23[133];
  }
  *((_BYTE *)v25 + v24) = 32;
  v28 = v23[133];
  v23[134] = v26;
  *(_BYTE *)(v28 + v24 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v29 = (__int64)v2[1];
  v30 = v2[2];
  v31 = *(void **)(v29 + 8);
  v32 = *((_DWORD *)*v2 + 6);
  sub_BF7B00((__int64)v45, v29, v27, v14, v11, v19, v43, v44, v45[0]);
  sub_F37C60(v30, (__int64)v45, v31);
  if ( v45[0] > 1u )
    sub_A4F8E0(v45);
  while ( 1 )
  {
    v33 = *v2;
    v34 = *((unsigned int *)*v2 + 6);
    if ( v32 >= (unsigned int)v34 )
      break;
    while ( 1 )
    {
      v35 = v33[2];
      LOBYTE(v45[0]) = 1;
      v36 = v35 + 32 * v34 - 32;
      if ( !*(_QWORD *)(v36 + 16) )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, int *))(v36 + 24))(v36, v45);
      v37 = *v2;
      v38 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v37 + 6) = v38;
      v39 = v37[2] + 32 * v38;
      v40 = *(void (__fastcall **)(__int64, __int64, __int64))(v39 + 16);
      if ( !v40 )
        break;
      v40(v39, v39, 3);
      v33 = *v2;
      v34 = *((unsigned int *)*v2 + 6);
      if ( v32 >= (unsigned int)v34 )
        goto LABEL_27;
    }
  }
LABEL_27:
  sub_F30AA0(v33 + 133, v33[134] - 2);
}
