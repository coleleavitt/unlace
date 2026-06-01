void __fastcall sub_F32190(__int64 ***a1, char *a2)
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
  unsigned int v27; // r12d
  __int64 v28; // r13
  _QWORD *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  void (__fastcall *v37)(__int64, __int64, __int64); // rax
  __int64 v38; // rbp
  size_t v39; // rax
  void *v40[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+20h] [rbp-48h] BYREF

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
    v38 = sub_227BF10(*v14, v2[3], v13);
    v39 = j__strlen(": ");
    sub_9954E0(v38, ": ", v39);
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
    *v29 = 0x206E69206F736C61LL;
    *(_QWORD *)(v28 + 32) += 8LL;
  }
  else
  {
    v28 = sub_227BF10(v2[1][137], "also in ", 8);
  }
  sub_FEEE60(v40, v2[2], 0);
  sub_227BF10(v28, v40[0], v40[1]);
  if ( v40[0] != &v41 )
    operator delete(v40[0]);
  while ( 1 )
  {
    v30 = *v2;
    v31 = *((unsigned int *)*v2 + 6);
    if ( v27 >= (unsigned int)v31 )
      break;
    while ( 1 )
    {
      v32 = v30[2];
      LOBYTE(v40[0]) = 1;
      v33 = v32 + 32 * v31 - 32;
      if ( !*(_QWORD *)(v33 + 16) )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, void **))(v33 + 24))(v33, v40);
      v34 = *v2;
      v35 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v34 + 6) = v35;
      v36 = v34[2] + 32 * v35;
      v37 = *(void (__fastcall **)(__int64, __int64, __int64))(v36 + 16);
      if ( !v37 )
        break;
      v37(v36, v36, 3);
      v30 = *v2;
      v31 = *((unsigned int *)*v2 + 6);
      if ( v27 >= (unsigned int)v31 )
        goto LABEL_29;
    }
  }
LABEL_29:
  sub_F30AA0(v30 + 133, v30[134] - 2);
}
