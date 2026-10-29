void __fastcall sub_F17550(__int64 ***a1, char *a2)
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
  __int64 *v27; // rdi
  unsigned int v28; // r14d
  unsigned int v29; // ebp
  __int64 *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  void (__fastcall *v40)(__int64, __int64, __int64); // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  _WORD *v43; // rdx
  __int64 v44; // rbp
  size_t v45; // rax
  char v46[57]; // [rsp+1Fh] [rbp-39h] BYREF

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
  v13 = v2[13];
  v14 = *v2;
  if ( v13 )
  {
    v44 = sub_22581D0(*v14, v2[12], v13);
    v45 = j__strlen(": ");
    sub_9717A0(v44, ": ", v45);
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
  v27 = *v2;
  v28 = *((_DWORD *)v2 + 2);
  v29 = *((_DWORD *)*v2 + 6);
  if ( *((_DWORD *)v2 + 3) > v28 )
  {
    do
    {
      v30 = v2[11];
      v31 = v28++;
      v32 = ((__int64 (__fastcall *)(__int64 **, __int64))v2[2])(v2 + 3, v31);
      sub_F13F20(v30, v32, v2[10]);
      if ( v28 == *((_DWORD *)v2 + 3) )
        break;
      v42 = v2[11][137];
      v43 = *(_WORD **)(v42 + 32);
      if ( *(_QWORD *)(v42 + 24) - (_QWORD)v43 > 1u )
      {
        *v43 = 8236;
        *(_QWORD *)(v42 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(v42, ", ", 2);
      }
    }
    while ( v28 < *((_DWORD *)v2 + 3) );
    v27 = *v2;
    v33 = *((unsigned int *)*v2 + 6);
    if ( v29 < (unsigned int)v33 )
    {
      v34 = v27[2];
      v46[0] = 1;
      v35 = v34 + 32 * v33 - 32;
      if ( !*(_QWORD *)(v35 + 16) )
LABEL_41:
        std::__throw_bad_function_call();
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v35 + 24))(v35, v46);
        v37 = *v2;
        v38 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
        *((_DWORD *)v37 + 6) = v38;
        v39 = v37[2] + 32 * v38;
        v40 = *(void (__fastcall **)(__int64, __int64, __int64))(v39 + 16);
        if ( v40 )
          v40(v39, v39, 3);
        v27 = *v2;
        v41 = *((unsigned int *)*v2 + 6);
        if ( v29 >= (unsigned int)v41 )
          break;
        v36 = v27[2];
        v46[0] = 1;
        v35 = v36 + 32 * v41 - 32;
        if ( !*(_QWORD *)(v35 + 16) )
          goto LABEL_41;
      }
    }
  }
  sub_F0CD60(v27 + 133, v27[134] - 2);
}

