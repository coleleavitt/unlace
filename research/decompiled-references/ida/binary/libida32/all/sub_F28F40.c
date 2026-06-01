void __fastcall sub_F28F40(__int64 **a1, char *a2)
{
  __int64 *v2; // rbx
  char v3; // r14
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
  _QWORD *v14; // rbp
  __int64 v15; // r15
  _QWORD *v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbp
  __int64 v22; // r14
  _QWORD *v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned int v28; // ebp
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  void (__fastcall *v38)(__int64, __int64, __int64); // rax
  __int64 v39; // rax
  __int64 v40; // rbp
  size_t v41; // rax
  char v42[57]; // [rsp+1Fh] [rbp-39h] BYREF

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
    v40 = sub_22581D0(*v14, v2[3], v13);
    v41 = j__strlen(": ");
    sub_9717A0(v40, ": ", v41);
    v14 = (_QWORD *)*v2;
  }
  v15 = v14[134];
  v16 = (_QWORD *)v14[133];
  v17 = v15 + 1;
  v18 = v3 == 0 ? 124 : 32;
  if ( v16 == v14 + 135 )
    v19 = 15;
  else
    v19 = v14[135];
  if ( v17 > v19 )
  {
    sub_974DF0((__int64)(v14 + 133), v14[134], 0, nullptr, 1u);
    v16 = (_QWORD *)v14[133];
    v17 = v15 + 1;
  }
  *((_BYTE *)v16 + v15) = v18;
  v20 = v14[133];
  v14[134] = v17;
  *(_BYTE *)(v20 + v15 + 1) = 0;
  v21 = (_QWORD *)*v2;
  v22 = *(_QWORD *)(*v2 + 1072);
  v23 = *(_QWORD **)(*v2 + 1064);
  v24 = v22 + 1;
  if ( v23 == (_QWORD *)(*v2 + 1080) )
    v25 = 15;
  else
    v25 = v21[135];
  if ( v24 > v25 )
  {
    sub_974DF0((__int64)(v21 + 133), *(_QWORD *)(*v2 + 1072), 0, nullptr, 1u);
    v23 = (_QWORD *)v21[133];
  }
  *((_BYTE *)v23 + v22) = 32;
  v26 = v21[133];
  v21[134] = v24;
  *(_BYTE *)(v26 + v22 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *(_BYTE *)(*v2 + 1057) = 1;
  v27 = v2[2];
  v28 = *(_DWORD *)(*v2 + 24);
  v29 = sub_EFEE90(v2 + 1, 0);
  sub_F27760(v27, v29);
  v30 = (_QWORD *)*v2;
  v31 = *(unsigned int *)(*v2 + 24);
  if ( v28 < (unsigned int)v31 )
  {
    v32 = v30[2];
    v42[0] = 1;
    v33 = v32 + 32 * v31 - 32;
    if ( !*(_QWORD *)(v33 + 16) )
LABEL_34:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v33 + 24))(v33, v42);
      v35 = (_QWORD *)*v2;
      v36 = (unsigned int)(*(_DWORD *)(*v2 + 24) - 1);
      *((_DWORD *)v35 + 6) = v36;
      v37 = v35[2] + 32 * v36;
      v38 = *(void (__fastcall **)(__int64, __int64, __int64))(v37 + 16);
      if ( v38 )
        v38(v37, v37, 3);
      v30 = (_QWORD *)*v2;
      v39 = *(unsigned int *)(*v2 + 24);
      if ( v28 >= (unsigned int)v39 )
        break;
      v34 = v30[2];
      v42[0] = 1;
      v33 = v34 + 32 * v39 - 32;
      if ( !*(_QWORD *)(v33 + 16) )
        goto LABEL_34;
    }
  }
  sub_F0CD60(v30 + 133, v30[134] - 2LL);
}

