__int64 __fastcall sub_158B330(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        double a7)
{
  unsigned int v9; // ebp
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v31; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v32[16]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v34[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v35; // [rsp+98h] [rbp-50h]
  unsigned int v36; // [rsp+A0h] [rbp-48h]
  char v37; // [rsp+A4h] [rbp-44h]

  v9 = a5 == 0 ? 0xFFFFFFDA : 0;
  v10 = *(_QWORD *)(a1 + 8) + 8LL;
  v11 = sub_EEB7E0(a3, a2, a7);
  v12 = v10;
  sub_168B9F0(v32, v10, v11, v9 + 6685, 0);
  if ( v35 )
  {
    v12 = a2;
    sub_157E260(v34, a2);
  }
  else if ( v37 )
  {
    v25 = sub_168B9E0(v32);
    v28 = v33;
    if ( v33 )
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
    v31 = v28;
    v29 = sub_1587BC0(v25, &v31, v23, v24, v26, v27);
    v12 = a2;
    sub_157E260((unsigned __int8 **)(*v29 + 32LL * v36 + 8), a2);
  }
  sub_15F7200(v32);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = sub_EEB7E0(a4, v12, a7);
  sub_168B9F0(v32, v13 + 8, v14, 5814, 0);
  if ( v35 )
  {
    sub_157E4A0(v34, a6);
  }
  else if ( v37 )
  {
    v18 = sub_168B9E0(v32);
    v21 = v33;
    if ( v33 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
    v31 = v21;
    v22 = sub_1587BC0(v18, &v31, v16, v17, v19, v20);
    sub_157E4A0((unsigned __int8 **)(*v22 + 32LL * v36 + 8), a6);
  }
  return sub_15F7200(v32);
}
