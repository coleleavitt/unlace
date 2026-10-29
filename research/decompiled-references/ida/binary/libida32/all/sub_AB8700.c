void __fastcall sub_AB8700(__int64 **a1, char *a2)
{
  __int64 *v2; // rbx
  char v3; // r13
  __int64 v4; // rdi
  _BYTE *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbp
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // rdi
  unsigned int v15; // ebp
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64); // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD *)**a1;
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
  v6 = (_QWORD *)*v2;
  v7 = *(_QWORD *)*v2;
  v8 = *(_BYTE *)(*v2 + 8);
  v9 = v7;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 4, 0, 0);
    v6 = (_QWORD *)*v2;
    v9 = *(_QWORD *)*v2;
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
  v13 = (_QWORD *)v2[5];
  v14 = (_QWORD *)*v2;
  if ( v13 )
  {
    v26 = sub_22581D0(*v14, v2[4], v13);
    sub_971800(v26, ": ");
    v14 = (_QWORD *)*v2;
  }
  sub_A4B8D0(v14 + 133, v3 == 0 ? 124 : 32);
  sub_AA8A00((_QWORD *)(*v2 + 1064));
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *(_BYTE *)(*v2 + 1057) = 1;
  v15 = *(_DWORD *)(*v2 + 24);
  sub_AAD040(v2 + 1);
  v16 = (_QWORD *)*v2;
  v17 = *(unsigned int *)(*v2 + 24);
  if ( v15 < (unsigned int)v17 )
  {
    v18 = v16[2];
    v27[0] = 1;
    v19 = v18 + 32 * v17 - 32;
    if ( !*(_QWORD *)(v19 + 16) )
LABEL_24:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v19 + 24))(v19, v27);
      v21 = (_QWORD *)*v2;
      v22 = (unsigned int)(*(_DWORD *)(*v2 + 24) - 1);
      *((_DWORD *)v21 + 6) = v22;
      v23 = v21[2] + 32 * v22;
      v24 = *(void (__fastcall **)(__int64, __int64, __int64))(v23 + 16);
      if ( v24 )
        v24(v23, v23, 3);
      v16 = (_QWORD *)*v2;
      v25 = *(unsigned int *)(*v2 + 24);
      if ( v15 >= (unsigned int)v25 )
        break;
      v20 = v16[2];
      v27[0] = 1;
      v19 = v20 + 32 * v25 - 32;
      if ( !*(_QWORD *)(v19 + 16) )
        goto LABEL_24;
    }
  }
  sub_AA8930(v16 + 133, v16[134] - 2LL);
}

