void __fastcall sub_AA9C20(__int64 ***a1, char *a2)
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
  __int64 *v22; // r12
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rax
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
  __int128 v39; // [rsp-20h] [rbp-78h]
  _QWORD v40[11]; // [rsp+0h] [rbp-58h] BYREF

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
    v38 = sub_22581D0(*v14, v2[4], v13);
    sub_971800(v38, ": ");
    v14 = *v2;
  }
  sub_A4B8D0(v14 + 133, v3 == 0 ? 124 : 32);
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
    sub_974DF0((__int64)(v15 + 133), (*v2)[134], 0, nullptr, 1u);
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
  sub_F07C10(v2[1] + 1, v2[2], v2[3]);
  if ( v2[2] )
  {
    v22 = (__int64 *)sub_B16870();
    v25 = sub_B168B0(v2[2]);
    while ( (__int64 *)v25 != v22 )
    {
      v26 = *v22;
      v27 = (__int64)v2[3];
      ++v22;
      v40[0] = v2[1];
      v40[1] = v26;
      v40[2] = v27;
      *((_QWORD *)&v39 + 1) = v26;
      *(_QWORD *)&v39 = v40[0];
      sub_AA96A0(v40[0] + 8LL, &byte_22CD811, 0, v26, v23, v24, v39, v27);
    }
  }
  v28 = *v2;
  v29 = *((unsigned int *)*v2 + 6);
  if ( v21 < (unsigned int)v29 )
  {
    v30 = v28[2];
    LOBYTE(v40[0]) = 1;
    v31 = v30 + 32 * v29 - 32;
    if ( !*(_QWORD *)(v31 + 16) )
LABEL_32:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(v31 + 24))(v31, v40);
      v33 = *v2;
      v34 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v33 + 6) = v34;
      v35 = v33[2] + 32 * v34;
      v36 = *(void (__fastcall **)(__int64, __int64, __int64))(v35 + 16);
      if ( v36 )
        v36(v35, v35, 3);
      v28 = *v2;
      v37 = *((unsigned int *)*v2 + 6);
      if ( v21 >= (unsigned int)v37 )
        break;
      v32 = v28[2];
      LOBYTE(v40[0]) = 1;
      v31 = v32 + 32 * v37 - 32;
      if ( !*(_QWORD *)(v31 + 16) )
        goto LABEL_32;
    }
  }
  sub_AA8930(v28 + 133, v28[134] - 2);
}

