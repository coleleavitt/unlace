void __fastcall sub_F0D860(__int64 ***a1, char *a2)
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
  void *v29; // rdx
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rdi
  _BYTE *v35; // rax
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
  __int64 v46; // rbp
  size_t v47; // rax
  char v48[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = ***a1;
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 10);
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
  v10 = sub_22581D0(v9, v6[133], v6[134]);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_2257CD0(v10, v3 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = v3 == 0 ? 124 : 96;
  }
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
  {
    sub_2257CD0(v10, 45);
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
    v46 = sub_22581D0(*v14, v2[3], v13);
    v47 = j__strlen(": ");
    sub_9717A0(v46, ": ", v47);
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
    sub_974DF0((__int64)(v14 + 133), v14[134], 0, nullptr, 1u);
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
    sub_974DF0((__int64)(v21 + 133), (*v2)[134], 0, nullptr, 1u);
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
  v29 = *(void **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v29 > 0xBu )
  {
    qmemcpy(v29, "constructed ", 12);
    *(_QWORD *)(v28 + 32) += 12LL;
  }
  else
  {
    sub_22581D0(v28, "constructed ", 12);
  }
  v30 = v2[2];
  v31 = v30[11];
  if ( !v31 )
    v31 = v30[8];
  v32 = *(_QWORD *)(v31 + 16);
  v33 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v32 & 4) != 0 )
    v33 = (_QWORD *)*v33;
  if ( v33 )
    v33 -= 8;
  sub_F06990((__int64)v2[1], (__int64)v33);
  v34 = v2[1][137];
  v35 = *(_BYTE **)(v34 + 32);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
  {
    sub_2257CD0(v34, 32);
  }
  else
  {
    *(_QWORD *)(v34 + 32) = v35 + 1;
    *v35 = 32;
  }
  sub_F06990((__int64)v2[1], v2[2][11]);
  v36 = *v2;
  v37 = *((unsigned int *)*v2 + 6);
  if ( v27 < (unsigned int)v37 )
  {
    v38 = v36[2];
    v48[0] = 1;
    v39 = v38 + 32 * v37 - 32;
    if ( !*(_QWORD *)(v39 + 16) )
LABEL_46:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v39 + 24))(v39, v48);
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
      v48[0] = 1;
      v39 = v40 + 32 * v45 - 32;
      if ( !*(_QWORD *)(v39 + 16) )
        goto LABEL_46;
    }
  }
  sub_F0CD60(v36 + 133, v36[134] - 2);
}

