__int64 __fastcall sub_9E6DA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v9; // eax
  void *v10; // rdx
  void *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-C0h]
  void *v16; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-B0h]
  void *v18; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-A0h]
  void *v20; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-90h]
  void *v22; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-80h]
  void *v24; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-70h]
  _QWORD v26[3]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+78h] [rbp-50h]
  unsigned int v28; // [rsp+80h] [rbp-48h]
  int v29; // [rsp+90h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v26, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, (__int64)v26, 4);
  if ( !(_BYTE)v4 )
    goto LABEL_2;
  v6 = v27;
  v7 = v26[0];
  if ( v29 || !*(_BYTE *)(sub_8E5480((__int64)v26) + 51) || (v8 = v6 + v28 + 72, v28 != v7) )
    v8 = v6 + v7 + 40;
  v15 = 3;
  v9 = *(_DWORD *)(v8 + 8);
  v14 = &byte_7;
  v17 = v9;
  if ( v9 <= 0x40 )
  {
    v10 = *(void **)v8;
    v19 = v9;
    v16 = v10;
LABEL_8:
    v18 = &dword_0 + 1;
    v21 = v9;
    v20 = &dword_0 + 1;
    v23 = v9;
LABEL_9:
    v11 = v16;
    v25 = v9;
    v22 = v16;
LABEL_10:
    v24 = v11;
    goto LABEL_11;
  }
  sub_2585B30(&v16);
  v9 = v17;
  v19 = v17;
  if ( v17 <= 0x40 )
    goto LABEL_8;
  sub_2585A50(&v18, 1, 0);
  v21 = v19;
  if ( v19 <= 0x40 )
  {
    v9 = v17;
    v20 = v18;
  }
  else
  {
    sub_2585B30(&v20);
    v9 = v17;
  }
  v23 = v9;
  if ( v9 <= 0x40 )
    goto LABEL_9;
  sub_2585B30(&v22);
  v25 = v23;
  if ( v23 <= 0x40 )
  {
    v11 = v22;
    goto LABEL_10;
  }
  sub_2585B30(&v24);
LABEL_11:
  sub_25863C0(&v24, &v20);
  v14 = v24;
  v15 = v25;
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v29 )
    goto LABEL_28;
  v12 = *(_QWORD *)(v27 + 32);
  if ( *(_DWORD *)(v12 + 16) != v28 && v28 )
    v12 = *(_QWORD *)(v27 + v28 + 32);
  if ( !*(_BYTE *)(v12 + 51) || (v13 = v27 + v26[0] + 72, v28 != v26[0]) )
LABEL_28:
    v13 = v27 + v26[0] + 40;
  if ( *(_DWORD *)(v13 + 8) <= 0x40u && v15 <= 0x40 )
  {
    *(_QWORD *)v13 = v14;
    *(_DWORD *)(v13 + 8) = v15;
  }
  else
  {
    sub_2585EA0(v13, &v14);
  }
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
LABEL_2:
  sub_A1C0C0(v26);
  return v4;
}

