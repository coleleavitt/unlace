__int64 __fastcall sub_9E5A50(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *v13; // rdx
  void *v14; // rdx
  unsigned int v15; // ebx
  void *v16; // r13
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rdi
  void *v20; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-C0h]
  void *v22; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-B0h]
  void *v24; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-A0h]
  void *v26; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-90h]
  void *v28; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-80h]
  void *v30; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-70h]
  _QWORD v32[3]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v33; // [rsp+78h] [rbp-50h]
  unsigned int v34; // [rsp+80h] [rbp-48h]
  int v35; // [rsp+90h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v32, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, (__int64)v32, 3);
  if ( !(_BYTE)v4 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = v32[0];
  v8 = v33;
  if ( !v35 && *(_BYTE *)(sub_8E5480((__int64)v32) + 51) && v34 == v7 )
    v9 = v8 + v34 + 72;
  else
    v9 = v8 + v7 + 40;
  v21 = 3;
  v20 = &byte_7;
  v10 = sub_A1A4E0(v6, 16);
  v11 = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v10 + 8) = v11;
  if ( v11 > 0x40 )
  {
    sub_2585B30(v10);
    v12 = *(_DWORD *)(v9 + 8);
    v23 = v12;
    if ( v12 <= 0x40 )
      goto LABEL_8;
  }
  else
  {
    *(_QWORD *)v10 = *(_QWORD *)v9;
    v12 = *(_DWORD *)(v9 + 8);
    v23 = v12;
    if ( v12 <= 0x40 )
    {
LABEL_8:
      v13 = *(void **)v9;
      v25 = v12;
      v22 = v13;
LABEL_9:
      v24 = &dword_0 + 1;
      v27 = v12;
      v26 = &dword_0 + 1;
      v29 = v12;
LABEL_10:
      v14 = v22;
      v31 = v12;
      v28 = v22;
LABEL_11:
      v30 = v14;
      goto LABEL_12;
    }
  }
  sub_2585B30(&v22);
  v12 = v23;
  v25 = v23;
  if ( v23 <= 0x40 )
    goto LABEL_9;
  sub_2585A50(&v24, 1, 0);
  v27 = v25;
  if ( v25 <= 0x40 )
  {
    v12 = v23;
    v26 = v24;
  }
  else
  {
    sub_2585B30(&v26);
    v12 = v23;
  }
  v29 = v12;
  if ( v12 <= 0x40 )
    goto LABEL_10;
  sub_2585B30(&v28);
  v31 = v29;
  if ( v29 <= 0x40 )
  {
    v14 = v28;
    goto LABEL_11;
  }
  sub_2585B30(&v30);
LABEL_12:
  sub_2586200(&v30, &v26);
  v15 = v31;
  v16 = v30;
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  v20 = v16;
  v21 = v15;
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  v17 = v33;
  v18 = v32[0];
  if ( v35 || !*(_BYTE *)(sub_8E5480((__int64)v32) + 51) || (v19 = v17 + v34 + 72, v34 != v18) )
    v19 = v17 + v18 + 40;
  if ( *(_DWORD *)(v19 + 8) <= 0x40u && v21 <= 0x40 )
  {
    *(_QWORD *)v19 = v20;
    *(_DWORD *)(v19 + 8) = v21;
  }
  else
  {
    sub_2585EA0(v19, &v20);
  }
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
LABEL_2:
  sub_A1C0C0(v32);
  return v4;
}

