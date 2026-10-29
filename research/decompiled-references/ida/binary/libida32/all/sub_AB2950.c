void __fastcall sub_AB2950(__int64 ***a1, char *a2)
{
  __int64 **v2; // rbx
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
  __int64 *v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, __int64, __int64); // rax
  __int64 v27; // rax
  __int64 v28; // rax
  char v29[41]; // [rsp+Fh] [rbp-29h] BYREF

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
  v13 = v2[5];
  v14 = *v2;
  if ( v13 )
  {
    v28 = sub_22581D0(*v14, v2[4], v13);
    sub_971800(v28, ": ");
    v14 = *v2;
  }
  sub_A4B8D0(v14 + 133, v3 == 0 ? 124 : 32);
  sub_AA8A00(*v2 + 133);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v15 = *((_DWORD *)*v2 + 6);
  sub_F06D50(v2[1] + 1, v2 + 2);
  v17 = (__int64)v2[3];
  if ( v17 )
    sub_AAE4E0((__int64)(v2[1] + 1), 0, 0, v17, (__int64)v2[1], v16);
  v18 = *v2;
  v19 = *((unsigned int *)*v2 + 6);
  if ( v15 < (unsigned int)v19 )
  {
    v20 = v18[2];
    v29[0] = 1;
    v21 = v20 + 32 * v19 - 32;
    if ( !*(_QWORD *)(v21 + 16) )
LABEL_26:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v21 + 24))(v21, v29);
      v23 = *v2;
      v24 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v23 + 6) = v24;
      v25 = v23[2] + 32 * v24;
      v26 = *(void (__fastcall **)(__int64, __int64, __int64))(v25 + 16);
      if ( v26 )
        v26(v25, v25, 3);
      v18 = *v2;
      v27 = *((unsigned int *)*v2 + 6);
      if ( v15 >= (unsigned int)v27 )
        break;
      v22 = v18[2];
      v29[0] = 1;
      v21 = v22 + 32 * v27 - 32;
      if ( !*(_QWORD *)(v21 + 16) )
        goto LABEL_26;
    }
  }
  sub_AA8930(v18 + 133, v18[134] - 2);
}

