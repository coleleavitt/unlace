__int64 __fastcall sub_21B3190(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rax
  bool (__fastcall *v5)(__int64); // rax
  unsigned __int8 *v6; // rax
  __int64 v7; // rdi
  void (*v8)(void); // rdx
  _BOOL4 v9; // ebx
  int v10; // r14d
  int v11; // r15d
  int v12; // ebx
  unsigned __int8 v13; // dl
  bool (__fastcall *v14)(__int64); // rdx
  unsigned __int8 v15; // al
  __int64 v16; // rax
  void (*v17)(void); // rax
  bool (__fastcall *v18)(__int64); // rax
  bool v19; // al
  __int64 v20; // rax
  void (*v22)(void); // rax
  __int16 v23; // ax
  unsigned __int8 *v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26[2]; // [rsp+10h] [rbp-58h] BYREF
  char v27; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)a2;
  v24 = a3;
  v5 = *(bool (__fastcall **)(__int64))(v4 + 64);
  v25 = a2;
  if ( v5 != sub_21B1110 )
    v5(a2);
  v6 = v24;
  v7 = v25;
  v8 = *(void (**)(void))(*(_QWORD *)v25 + 64LL);
  v9 = *((_WORD *)v24 + 6) == 0xFFFF;
  v10 = 8 * v9 + 6;
  v11 = 8 * v9 + 2;
  v12 = 8 * v9;
  if ( (char *)v8 != (char *)sub_21B1110 )
  {
    v8();
    v6 = v24;
    v7 = v25;
  }
  v13 = v6[16];
  if ( v13 != 2 && v13 != 111 )
  {
    v14 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL);
    if ( v14 == sub_21B1110 )
      goto LABEL_8;
LABEL_30:
    ((void (*)(void))v14)();
    v6 = v24;
    goto LABEL_8;
  }
  v12 = v10;
  if ( v13 != 111 )
    v12 = v11;
  v14 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL);
  if ( v14 != sub_21B1110 )
    goto LABEL_30;
LABEL_8:
  v15 = v6[16];
  if ( (v15 & 0xFB) == 0x6B || v15 == 2 )
  {
    sub_21B2E70((__int64)v26, &v24);
    v16 = v26[0];
    if ( (v27 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v16;
      v26[0] = 0;
      sub_21B3170(v26);
      return a1;
    }
    if ( !v26[0] )
      v16 = v26[1];
    if ( (*(_BYTE *)(v16 + 10) & 7) == 3 )
      v12 |= 0x10u;
    sub_21B3170(v26);
  }
  v17 = *(void (**)(void))(*(_QWORD *)v25 + 64LL);
  if ( (char *)v17 != (char *)sub_21B1110 )
    v17();
  if ( !*((_WORD *)v24 + 6) )
    v12 |= 1u;
  v18 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v18 == sub_21B1110 )
    v19 = *(_DWORD *)(a2 + 8) == 12;
  else
    v19 = v18(a2);
  if ( v19 || (v20 = *(_QWORD *)(a2 + 56)) != 0 && *(_WORD *)(v20 + 2) == 512 )
  {
    v22 = *(void (**)(void))(*(_QWORD *)v25 + 64LL);
    if ( (char *)v22 != (char *)sub_21B1110 )
      v22();
    v23 = __ROL2__(*((_WORD *)v24 + 7), 8) & 0x7000;
    if ( v23 == 0x2000 )
    {
      BYTE1(v12) |= 2u;
    }
    else if ( v23 == 0x4000 )
    {
      v12 |= 0x40u;
    }
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v12;
  return a1;
}
