__int64 __fastcall Z3_get_denominator(__int64 a1, __int64 a2)
{
  char v3; // bp
  int v4; // eax
  __int64 v5; // r14
  void *v6; // rbx
  void *v8; // rdi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  void *v13; // rbx
  void *v14; // rbx
  void *v15; // rbx
  void *v16; // [rsp+8h] [rbp-80h]
  void *v17; // [rsp+8h] [rbp-80h]
  _QWORD v18[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  int v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+34h] [rbp-54h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-48h] BYREF
  char v24; // [rsp+44h] [rbp-44h]
  __int64 v25; // [rsp+48h] [rbp-40h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29A9C0();
  v4 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a1 + 1520) = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  if ( (unsigned int)(v4 - 3) > 1 && (unsigned __int8)sub_1666AE0(a1 + 296, a2, v18, &v20) )
  {
    v21 &= 0xFCu;
    v24 &= 0xFCu;
    v20 = 0;
    v8 = qword_1C7F2C0;
    v22 = 0;
    v23 = 1;
    v25 = 0;
    if ( (v19[0] & 0x100000000LL) != 0 )
    {
      v17 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v20, v19);
      v8 = v17;
    }
    else
    {
      v20 = v19[0];
    }
    sub_182CBA0(v8, &v23);
    v12 = *(_QWORD *)(a1 + 304);
    v24 &= ~1u;
    v23 = 1;
    if ( !v12 )
    {
      sub_16669E0(a1 + 296);
      v12 = *(_QWORD *)(a1 + 304);
    }
    v5 = sub_166A700(v12, (unsigned int)&v20, 1, v9, v10, v11);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v20);
    sub_182CBA0(v16, &v23);
    sub_251FD0(a1, v5);
    if ( !v3 )
    {
      v13 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v18);
      sub_182CBA0(v13, v19);
      return v5;
    }
    sub_2BB620(v5);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v18);
    sub_182CBA0(v15, v19);
LABEL_15:
    byte_1C7EBA0 = 1;
    return v5;
  }
  sub_24EA30(a1, 3u, nullptr);
  if ( v3 )
  {
    sub_2BB620(0);
    v5 = 0;
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v18);
    sub_182CBA0(v14, v19);
    goto LABEL_15;
  }
  v5 = 0;
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v6, v19);
  return v5;
}

