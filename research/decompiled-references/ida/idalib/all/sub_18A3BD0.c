void __fastcall sub_18A3BD0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // rax
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v33[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v34; // [rsp+88h] [rbp-50h]
  unsigned int v35; // [rsp+90h] [rbp-48h]
  char v36; // [rsp+94h] [rbp-44h]

  sub_168B9F0((__int64)v31, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = *(__int64 **)(a1 + 32);
  v6 = *v5;
  if ( v34 )
  {
    sub_AE9DF0(v33, *v5, 9u);
    v15 = v34;
  }
  else
  {
    if ( !v36 )
    {
      v7 = **(_QWORD **)(a1 + 24);
      goto LABEL_4;
    }
    v12 = sub_168B9E0(v31);
    v13 = v32;
    if ( v32 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
    v30 = v13;
    v14 = sub_1587BC0(v12, &v30, v8, v9, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v35 + 8), v6, 9u);
    v15 = v34;
  }
  v7 = **(_QWORD **)(a1 + 24);
  if ( v15 )
  {
    sub_AE9DF0(v33, v7, 5u);
    goto LABEL_5;
  }
LABEL_4:
  if ( v36 )
  {
    v27 = sub_168B9E0(v31);
    v28 = v32;
    if ( v32 )
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
    v30 = v28;
    v29 = sub_1587BC0(v27, &v30, v23, v24, v25, v26);
    sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v35 + 8), v7, 5u);
  }
LABEL_5:
  v30 = **(_QWORD **)(a1 + 16);
  sub_1587DB0((__int64)v31, &v30);
  if ( v34 )
  {
    sub_AE9DF0(v33, a4, 8u);
  }
  else if ( v36 )
  {
    v18 = sub_168B9E0(v31);
    v21 = v32;
    if ( v32 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
    v30 = v21;
    v22 = sub_1587BC0(v18, &v30, v16, v17, v19, v20);
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v35 + 8), a4, 8u);
  }
  sub_15F7200(v31);
}
