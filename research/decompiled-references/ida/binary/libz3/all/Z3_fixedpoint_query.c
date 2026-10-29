__int64 __fastcall Z3_fixedpoint_query(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 v4; // rdx
  unsigned int v5; // r13d
  unsigned __int8 v6; // r14
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int v13; // [rsp+8h] [rbp-D0h]
  __int64 v14; // [rsp+10h] [rbp-C8h]
  int v15; // [rsp+2Ch] [rbp-ACh]
  __int64 v16; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-98h] BYREF
  int *v19; // [rsp+50h] [rbp-88h] BYREF
  int v20; // [rsp+58h] [rbp-80h]
  __int128 v21; // [rsp+60h] [rbp-78h]
  __int128 v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  __int16 v24; // [rsp+88h] [rbp-50h]
  __int64 v25; // [rsp+90h] [rbp-48h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29FE20(a1, a2, a3);
  v4 = *(unsigned int *)(a1 + 100);
  *(_DWORD *)(a1 + 1520) = 0;
  v15 = sub_1859960(a2 + 32, "timeout", v4);
  v5 = sub_1859960(a2 + 32, "rlimit", *(unsigned int *)(a1 + 96));
  v6 = sub_1859610(a2 + 32, "ctrl_c", 1);
  v14 = *(_QWORD *)(a1 + 232);
  sub_1829790(v14, v5);
  v7 = *(_QWORD *)(a1 + 232);
  v20 = 0;
  v19 = &off_1C4C9C8;
  v23 = 0;
  v24 = 0;
  v25 = v7;
  v21 = 0;
  v22 = 0;
  sub_24FD10(&v16, a1, (__int64)&v19);
  sub_18561B0((unsigned int)v17, v15, (unsigned int)&v19, v8, v9, v10);
  sub_18086F0(v18, &v19, v6);
  v13 = sub_655220(*(_QWORD *)(a2 + 24) + 48LL, a3);
  sub_64C5F0(*(_QWORD *)(a2 + 24) + 48LL);
  sub_1808900(v18);
  sub_1856400(v17);
  sub_24E910(&v16);
  v19 = &off_1C4C9C8;
  if ( !(_BYTE)v24 )
  {
    if ( !HIBYTE(v24) )
      goto LABEL_5;
LABEL_9:
    sub_1829760(v25);
  }
  sub_18296D0(v25);
  if ( HIBYTE(v24) )
    goto LABEL_9;
LABEL_5:
  sub_1829100(v14);
  if ( v3 )
    byte_1C7EBA0 = 1;
  return v13;
}

