void __fastcall sub_18854F0(_QWORD *a1, unsigned int a2, __int64 a3, double a4, double a5)
{
  __int64 v5; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r13
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  void (*v19)(); // rdx
  _QWORD v20[6]; // [rsp-78h] [rbp-78h] BYREF
  char v21; // [rsp-48h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a3 + 84) & 0x40) == 0 && *(char *)(a3 + 28) >= 0 )
  {
    v5 = a3 + 72;
    v10 = (__int64 *)sub_B72690(a3 + 72);
    if ( v10 )
      v10 -= 8;
    sub_183ABA0((__int64)v20, (__int64)a1, v5, v7, v8, v9);
    v12 = (_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v12 + 16LL) != 26 )
      sub_F63050(*v12, a1, *v12, v11);
    sub_18B0530(a1, a2);
    sub_1884910((__int64)a1, a2, v10, 0, v13, v14);
    sub_1837F10(v20, &v21, a2);
    if ( (unsigned __int8)sub_187BB90(a1, a3, 0, nullptr, 0, a4, a5) )
    {
      v17 = 1;
      sub_B88650(a3, 1);
    }
    else
    {
      if ( (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32 )
        v15 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32;
      else
        LODWORD(v15) = *(_DWORD *)(a3 + 24);
      sub_1C36400(a1, 0);
      v16 = sub_1C36480(a1, (unsigned int)v15, (unsigned int)v15, 0, 0, 0);
      sub_B74930(a3, v16 & 0xFFFFFFFFFFFFFFFELL);
      v17 = a1[31];
      sub_B8C4D0(a3, v17);
      sub_1C36470(a1);
    }
    v18 = sub_15F1120((__int64)a1);
    if ( v18 )
    {
      v19 = *(void (**)())(*(_QWORD *)v18 + 88LL);
      if ( v19 != nullsub_438 )
      {
        v17 = a3;
        ((void (__fastcall *)(__int64, __int64))v19)(v18, a3);
      }
    }
    sub_185CCD0(v20, v17);
  }
}
