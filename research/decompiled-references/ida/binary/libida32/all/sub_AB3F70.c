void __fastcall sub_AB3F70(__int64 **a1, char *a2)
{
  __int64 *v2; // rbx
  char v3; // bp
  __int64 v4; // rdi
  _BYTE *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r12
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebp
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  void (__fastcall *v30)(__int64, __int64, __int64); // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33[57]; // [rsp+Fh] [rbp-39h] BYREF

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
  v13 = (_QWORD *)v2[4];
  v14 = (_QWORD *)*v2;
  if ( v13 )
  {
    v32 = sub_22581D0(*v14, v2[3], v13);
    sub_971800(v32, ": ");
    v14 = (_QWORD *)*v2;
  }
  sub_A4B8D0(v14 + 133, v3 == 0 ? 124 : 32);
  v15 = (_QWORD *)*v2;
  v16 = *(_QWORD *)(*v2 + 1072);
  v17 = *(_QWORD **)(*v2 + 1064);
  v18 = v16 + 1;
  if ( v17 == (_QWORD *)(*v2 + 1080) )
    v19 = 15;
  else
    v19 = v15[135];
  if ( v18 > v19 )
  {
    sub_974DF0((__int64)(v15 + 133), *(_QWORD *)(*v2 + 1072), 0, nullptr, 1u);
    v17 = (_QWORD *)v15[133];
  }
  *((_BYTE *)v17 + v16) = 32;
  v20 = v15[133];
  v15[134] = v18;
  *(_BYTE *)(v20 + v16 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *(_BYTE *)(*v2 + 1057) = 1;
  v21 = *(_DWORD *)(*v2 + 24);
  sub_AB39C0(v2 + 1);
  v22 = (_QWORD *)*v2;
  v23 = *(unsigned int *)(*v2 + 24);
  if ( v21 < (unsigned int)v23 )
  {
    v24 = v22[2];
    v33[0] = 1;
    v25 = v24 + 32 * v23 - 32;
    if ( !*(_QWORD *)(v25 + 16) )
LABEL_29:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v25 + 24))(v25, v33);
      v27 = (_QWORD *)*v2;
      v28 = (unsigned int)(*(_DWORD *)(*v2 + 24) - 1);
      *((_DWORD *)v27 + 6) = v28;
      v29 = v27[2] + 32 * v28;
      v30 = *(void (__fastcall **)(__int64, __int64, __int64))(v29 + 16);
      if ( v30 )
        v30(v29, v29, 3);
      v22 = (_QWORD *)*v2;
      v31 = *(unsigned int *)(*v2 + 24);
      if ( v21 >= (unsigned int)v31 )
        break;
      v26 = v22[2];
      v33[0] = 1;
      v25 = v26 + 32 * v31 - 32;
      if ( !*(_QWORD *)(v25 + 16) )
        goto LABEL_29;
    }
  }
  sub_AA8930(v22 + 133, v22[134] - 2LL);
}

