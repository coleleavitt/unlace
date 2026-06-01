void __fastcall sub_1BDF320(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rsi
  double v8; // xmm0_8
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+14h] [rbp-C4h] BYREF
  char v22; // [rsp+1Ch] [rbp-BCh]
  _QWORD v23[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-A8h]
  __int64 v25[11]; // [rsp+40h] [rbp-98h] BYREF
  char v26; // [rsp+98h] [rbp-40h]
  unsigned int v27; // [rsp+A0h] [rbp-38h]
  char v28; // [rsp+A4h] [rbp-34h]

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (*(double (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(
         v23,
         v7,
         a2,
         v5,
         a4);
  v9 = sub_EEC8C0(*(_QWORD *)(a1 + 16), v7, v8);
  v10 = v9;
  v11 = HIDWORD(v9);
  if ( v26 )
  {
    v21 = v9;
    v22 = 1;
    sub_AEC610(v25, (__int64 *)&v21);
  }
  else if ( v28 )
  {
    v16 = sub_168B9E0(v23);
    v17 = v24;
    if ( v24 )
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v20 = v17;
    v18 = sub_1587BC0(v16, &v20, v12, v13, v14, v15);
    v19 = *v18 + 32LL * v27;
    v21 = __PAIR64__(v11, v10);
    v22 = 1;
    sub_AEC610((__int64 *)(v19 + 8), (__int64 *)&v21);
  }
  sub_15F7200(v23);
}
