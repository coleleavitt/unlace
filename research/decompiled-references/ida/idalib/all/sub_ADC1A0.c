void __fastcall sub_ADC1A0(__int64 ***a1, char *a2)
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
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // [rsp-20h] [rbp-68h]
  __int64 *v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+8h] [rbp-40h]
  __int64 *v41; // [rsp+10h] [rbp-38h]

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
  v13 = v2[5];
  v14 = *v2;
  if ( v13 )
  {
    v37 = sub_227BF10(*v14, v2[4], v13);
    sub_995540(v37, ": ");
    v14 = *v2;
  }
  sub_A6F610(v14 + 133, v3 == 0 ? 124 : 32);
  sub_ACC740(*v2 + 133);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v15 = *((_DWORD *)*v2 + 6);
  sub_F51670(v2[1] + 1, v2[2], v2[3]);
  if ( v2[2] )
  {
    sub_ADB840((__int64)v2[1], (__int64)v2[2], v2[3], v16, v17, v18);
    v19 = v2[2];
    v20 = sub_F6C7E0(v19, v2[3]);
    if ( v20 )
    {
      v22 = v2[1];
      v41 = v21;
      v40 = v20;
      v39 = v22;
      v23 = sub_ACAA10(v19);
      *((_QWORD *)&v38 + 1) = v40;
      *(_QWORD *)&v38 = v24;
      sub_ADBAF0(v24 + 8, &byte_22F0C30, v23, v24, v25, v26, v38, v41);
    }
  }
  v27 = *v2;
  v28 = *((unsigned int *)*v2 + 6);
  if ( v15 < (unsigned int)v28 )
  {
    v29 = v27[2];
    LOBYTE(v39) = 1;
    v30 = v29 + 32 * v28 - 32;
    if ( !*(_QWORD *)(v30 + 16) )
LABEL_27:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int64 **))(v30 + 24))(v30, &v39);
      v32 = *v2;
      v33 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v32 + 6) = v33;
      v34 = v32[2] + 32 * v33;
      v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
      if ( v35 )
        v35(v34, v34, 3);
      v27 = *v2;
      v36 = *((unsigned int *)*v2 + 6);
      if ( v15 >= (unsigned int)v36 )
        break;
      v31 = v27[2];
      LOBYTE(v39) = 1;
      v30 = v31 + 32 * v36 - 32;
      if ( !*(_QWORD *)(v30 + 16) )
        goto LABEL_27;
    }
  }
  sub_ACC670(v27 + 133, v27[134] - 2);
}
