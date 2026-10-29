__int64 __fastcall sub_25D4C0(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r14
  __int64 v4; // r12
  unsigned __int8 v5; // r13
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v17; // [rsp+0h] [rbp-E8h]
  int v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v20[8]; // [rsp+28h] [rbp-C0h] BYREF
  int v21[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-A0h]
  _BYTE v24[16]; // [rsp+50h] [rbp-98h] BYREF
  int *v25; // [rsp+60h] [rbp-88h] BYREF
  int v26; // [rsp+68h] [rbp-80h]
  __int128 v27; // [rsp+70h] [rbp-78h]
  __int128 v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  __int16 v30; // [rsp+98h] [rbp-50h]
  __int64 v31; // [rsp+A0h] [rbp-48h]

  v3 = (int *)(a3 + 24);
  v4 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a3 )
    v3 = &qword_1C7F4C8;
  v18 = sub_1859960(v3, "timeout", *(unsigned int *)(a1 + 100));
  v5 = sub_1859610(v3, "ctrl_c", 0);
  sub_14B7810((int)v21, v4, (int)v3, v6, v7, v8, v17);
  v23 = v4;
  v31 = v4;
  v26 = 0;
  v22 = 0;
  v25 = &off_1C4C9C8;
  v29 = 0;
  v30 = 0;
  v27 = 0;
  v28 = 0;
  sub_24FD10(&v19, a1, (__int64)&v25);
  sub_18086F0(v24, &v25, v5);
  sub_18561B0((unsigned int)v20, v18, (unsigned int)&v25, v9, v10, v11);
  sub_14B9BF0(v21, a2, &v22);
  sub_1856400(v20);
  sub_1808900(v24);
  sub_251FD0(a1, v22);
  v12 = v22;
  sub_24E910(&v19);
  v25 = &off_1C4C9C8;
  if ( (_BYTE)v30 )
    sub_18296D0(v31);
  if ( HIBYTE(v30) )
    sub_1829760(v31);
  v13 = v22;
  if ( v22 )
  {
    v14 = v23;
    if ( (*(_DWORD *)(v22 + 8))-- == 1 )
      sub_15D7BC0(v14, v13);
  }
  sub_14B63F0(v21);
  return v12;
}

