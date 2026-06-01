__int64 __fastcall sub_1B23060(__int64 *a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v33[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v35[11]; // [rsp+30h] [rbp-98h] BYREF
  char v36; // [rsp+88h] [rbp-40h]
  unsigned int v37; // [rsp+90h] [rbp-38h]
  char v38; // [rsp+94h] [rbp-34h]

  v3 = *a2;
  if ( !*a2 )
    return 0;
  v6 = sub_168B6C0(*a1);
  if ( (unsigned __int8)sub_C3EA40(v3, v6, nullptr, v7, v8, v9) )
    return 0;
  v13 = (__int64 *)*a1;
  v14 = *a2;
  if ( (_BYTE)a3 )
  {
    v15 = sub_C00A40(v14, v6, v10, v11, v12);
    sub_168B9F0((__int64)v33, v13, v15, 0x1C32u, 0);
    if ( v36 )
    {
      sub_AE9DF0(v35, *a2, 0xFu);
    }
    else if ( v38 )
    {
      v20 = sub_168B9E0(v33);
      v23 = v34;
      if ( v34 )
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
      v32 = v23;
      v24 = sub_1587BC0(v20, &v32, v18, v19, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v37 + 8), *a2, 0xFu);
    }
    sub_15F7200(v33);
    *a2 = 0;
    return a3;
  }
  else
  {
    v17 = sub_C00A40(v14, v6, v10, v11, v12);
    sub_168B9F0((__int64)v33, v13, v17, 0x1171u, 0);
    if ( v36 )
    {
      sub_AE9DF0(v35, *a2, 0xFu);
    }
    else if ( v38 )
    {
      v27 = sub_168B9E0(v33);
      v30 = v34;
      if ( v34 )
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
      v32 = v30;
      v31 = sub_1587BC0(v27, &v32, v25, v26, v28, v29);
      sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v37 + 8), *a2, 0xFu);
    }
    sub_15F7200(v33);
    return 1;
  }
}
