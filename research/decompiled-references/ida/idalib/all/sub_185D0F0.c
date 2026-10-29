__int64 __fastcall sub_185D0F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  void (*v19)(); // rdx
  unsigned __int64 v21; // rax
  _BYTE v22[64]; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v23[23]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = a3 + 72;
  if ( !a3 )
    v7 = 0;
  sub_183ABA0((__int64)v22, a1, v7, a4, a5, a6);
  v9 = sub_19B4F60(a1, a2);
  v10 = sub_19249E0(a1, a2, 5, v9 & 0xFFFFFFFFFFFFFFFELL, 0);
  v11 = sub_1A2E800(a1, a2, *(unsigned int *)(a3 + 24), a3, v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( v11 == 1 )
    goto LABEL_10;
  v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) == 0 )
  {
    v21 = sub_C0A3E0(*(_QWORD **)(a1 + 248), *(_QWORD *)(v12 + 8), 60, v12, 0, 0, 0);
    if ( v21 == 1 )
      goto LABEL_10;
    v12 = v21 & 0xFFFFFFFFFFFFFFFELL;
  }
  v13 = sub_1C46CA0(a1, *(unsigned int *)(a3 + 24), v12, 0);
  if ( v13 == 1 )
  {
LABEL_10:
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a2, 0x17AFu, 0);
    sub_15F7200(v23);
    v17 = 1;
    sub_B88650(a3, 1);
    return sub_185CCD0(v22, v17);
  }
  v14 = *(unsigned int *)(a3 + 24);
  v15 = *(_QWORD **)(a1 + 248);
  v23[0] = v13 & 0xFFFFFFFFFFFFFFFELL;
  v16 = sub_EEF560(v15, v23, 1, 0, v14, (unsigned int)v14);
  sub_B74930(a3, v16);
  v17 = *(_QWORD *)(a1 + 248);
  sub_B8C4D0(a3, v17);
  v18 = sub_15F1120(a1);
  if ( v18 )
  {
    v19 = *(void (**)())(*(_QWORD *)v18 + 88LL);
    if ( v19 != nullsub_438 )
    {
      v17 = a3;
      ((void (__fastcall *)(__int64, __int64))v19)(v18, a3);
    }
  }
  return sub_185CCD0(v22, v17);
}
