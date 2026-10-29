void __fastcall sub_AD8490(__int64 ***a1, char *a2)
{
  __int64 **v2; // rbx
  char v3; // bp
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
  __int64 *v14; // rdi
  __int64 *v15; // rbp
  __int64 v16; // r14
  __int64 *v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebp
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  void (__fastcall *v32)(__int64, __int64, __int64); // rax
  __int64 v33; // rax
  __int64 v34; // rax
  char v35[57]; // [rsp+Fh] [rbp-39h] BYREF

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
    v34 = sub_227BF10(*v14, v2[3], v13);
    sub_995540(v34, ": ");
    v14 = *v2;
  }
  sub_A6F610(v14 + 133, v3 == 0 ? 124 : 32);
  v15 = *v2;
  v16 = (*v2)[134];
  v17 = (__int64 *)(*v2)[133];
  v18 = v16 + 1;
  if ( v17 == *v2 + 135 )
    v19 = 15;
  else
    v19 = v15[135];
  if ( v18 > v19 )
  {
    sub_998B30((__int64)(v15 + 133), (*v2)[134], 0, nullptr, 1u);
    v17 = (__int64 *)v15[133];
  }
  *((_BYTE *)v17 + v16) = 32;
  v20 = v15[133];
  v15[134] = v18;
  *(_BYTE *)(v20 + v16 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v21 = *((_DWORD *)*v2 + 6);
  sub_F2A530(v2[1] + 1, v2[2]);
  v22 = (unsigned __int64)v2[2];
  if ( (v22 & 8) != 0 )
    v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
  else
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  sub_AD7230((__int64)(v2[1] + 1), &byte_22F0C30, 0, (__int64)v2[1], v23);
  v24 = *v2;
  v25 = *((unsigned int *)*v2 + 6);
  if ( v21 < (unsigned int)v25 )
  {
    v26 = v24[2];
    v35[0] = 1;
    v27 = v26 + 32 * v25 - 32;
    if ( !*(_QWORD *)(v27 + 16) )
LABEL_32:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v27 + 24))(v27, v35);
      v29 = *v2;
      v30 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v29 + 6) = v30;
      v31 = v29[2] + 32 * v30;
      v32 = *(void (__fastcall **)(__int64, __int64, __int64))(v31 + 16);
      if ( v32 )
        v32(v31, v31, 3);
      v24 = *v2;
      v33 = *((unsigned int *)*v2 + 6);
      if ( v21 >= (unsigned int)v33 )
        break;
      v28 = v24[2];
      v35[0] = 1;
      v27 = v28 + 32 * v33 - 32;
      if ( !*(_QWORD *)(v27 + 16) )
        goto LABEL_32;
    }
  }
  sub_ACC670(v24 + 133, v24[134] - 2);
}
