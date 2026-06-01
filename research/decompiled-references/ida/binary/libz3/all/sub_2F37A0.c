void __fastcall sub_2F37A0(__int64 a1, int *a2, __int64 a3)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  bool v8; // dl
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  bool v15; // dl
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  bool v21; // dl
  __int64 v22; // rdi
  __int64 v23; // rax
  bool v24; // [rsp+Fh] [rbp-B9h]
  bool v25; // [rsp+Fh] [rbp-B9h]
  bool v26; // [rsp+Fh] [rbp-B9h]
  __int64 v27; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h]
  _QWORD v33[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v34; // [rsp+60h] [rbp-68h]
  __int64 v35; // [rsp+68h] [rbp-60h]
  _QWORD v36[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+80h] [rbp-48h]
  __int64 v38; // [rsp+88h] [rbp-40h]

  v30[0] = 0;
  v30[1] = 0;
  v31 = 1;
  v32 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v30, a2);
  v33[0] = 0;
  v33[1] = 0;
  v34 = 1;
  v35 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, a2 + 8);
  v36[0] = 0;
  v36[1] = 0;
  v37 = 1;
  v38 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v36, a2 + 16);
  v8 = (v31 & 0x100000000LL) == 0;
  if ( (v31 & 0x100000000LL) == 0 )
    v8 = (_DWORD)v31 == 1;
  v9 = *(_QWORD *)(a1 + 176);
  if ( !v9 )
  {
    v24 = v8;
    sub_16669E0(a1 + 168);
    v9 = *(_QWORD *)(a1 + 176);
    v8 = v24;
  }
  v10 = sub_166A700(v9, (unsigned int)v30, v8, v5, v6, v7);
  v27 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = (_QWORD *)(a3 + 8);
  sub_2F13A0(v11, &v27);
  v15 = (v34 & 0x100000000LL) == 0;
  if ( (v34 & 0x100000000LL) == 0 )
    v15 = (_DWORD)v34 == 1;
  v16 = *(_QWORD *)(a1 + 176);
  if ( !v16 )
  {
    v25 = v15;
    sub_16669E0(a1 + 168);
    v16 = *(_QWORD *)(a1 + 176);
    v15 = v25;
  }
  v17 = sub_166A700(v16, (unsigned int)v33, v15, v12, v13, v14);
  v28 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  sub_2F13A0(v11, &v28);
  v21 = (v37 & 0x100000000LL) == 0;
  if ( (v37 & 0x100000000LL) == 0 )
    v21 = (_DWORD)v37 == 1;
  v22 = *(_QWORD *)(a1 + 176);
  if ( !v22 )
  {
    v26 = v21;
    sub_16669E0(a1 + 168);
    v22 = *(_QWORD *)(a1 + 176);
    v21 = v26;
  }
  v23 = sub_166A700(v22, (unsigned int)v36, v21, v18, v19, v20);
  v29 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_2F13A0(v11, &v29);
  sub_25A130((char *)v36);
  sub_25A130((char *)v33);
  sub_25A130((char *)v30);
}

