__int64 __fastcall sub_1A41570(__int64 a1, _BYTE *a2, signed __int64 a3, _BYTE *a4, signed __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-E0h]
  __int64 v23; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v26[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v27; // [rsp+98h] [rbp-50h]
  unsigned int v28; // [rsp+A0h] [rbp-48h]
  char v29; // [rsp+A4h] [rbp-44h]

  sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), 0, 0x1263u, 0);
  if ( v27 )
  {
    sub_AEC220(v26, a2, a3);
    if ( v27 )
      goto LABEL_7;
  }
  else
  {
    if ( !v29 )
      goto LABEL_3;
    v9 = sub_168B9E0(v24);
    v13 = v25;
    if ( v25 )
    {
      v22 = v9;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
      v9 = v22;
    }
    v23 = v13;
    v14 = sub_1587BC0(v9, &v23, v9, v10, v11, v12);
    sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v28 + 8), a2, a3);
    if ( v27 )
    {
LABEL_7:
      sub_AEC220(v26, a4, a5);
      goto LABEL_3;
    }
  }
  if ( v29 )
  {
    v19 = sub_168B9E0(v24);
    v20 = v25;
    if ( v25 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
    v23 = v20;
    v21 = sub_1587BC0(v19, &v23, v15, v16, v17, v18);
    sub_AEC220((unsigned __int8 **)(*v21 + 32LL * v28 + 8), a4, a5);
  }
LABEL_3:
  sub_15F7200(v24);
  return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
}
