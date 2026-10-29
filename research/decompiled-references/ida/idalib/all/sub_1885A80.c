void __fastcall sub_1885A80(_QWORD *a1, unsigned int a2, __int64 a3, double a4, double a5)
{
  __int64 v5; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  __int64 v17; // r12
  __int16 v18; // dx
  __int64 v19; // rax
  void (*v20)(); // rdx
  void (*v21)(); // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD v24[6]; // [rsp-78h] [rbp-78h] BYREF
  char v25; // [rsp-48h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a3 + 84) & 0x40) == 0 && *(char *)(a3 + 28) >= 0 )
  {
    v5 = a3 + 72;
    v7 = sub_B72690(a3 + 72);
    v11 = v7;
    if ( !v7 )
      BUG();
    if ( *(char *)(v7 - 36) >= 0 )
    {
      sub_183ABA0((__int64)v24, (__int64)a1, v5, v8, v9, v10);
      v13 = (_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v13 + 16LL) != 26 )
        sub_F63050(*v13, a1, *v13, v12);
      sub_18B0530(a1, a2);
      sub_1884910((__int64)a1, a2, (__int64 *)(v11 - 64), 0, v14, v15);
      sub_1837F10(v24, &v25, a2);
      if ( (unsigned __int8)sub_187BB90(a1, a3, 0, nullptr, 0, a4, a5) )
      {
        sub_B88650(a3, 1);
        sub_185CCD0(v24, 1);
      }
      else
      {
        if ( (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32 )
          v16 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32;
        else
          LODWORD(v16) = *(_DWORD *)(a3 + 24);
        v17 = sub_EEE9A0(16, (_QWORD *)a1[31], 8u);
        v18 = *(_WORD *)v17 & 0xFE00;
        LOBYTE(v18) = -7;
        *(_WORD *)v17 = v18;
        if ( unk_2CD7484 )
          sub_EE9B50(249);
        *(_BYTE *)(v17 + 1) &= ~2u;
        *(_DWORD *)(v17 + 8) = v16;
        *(_DWORD *)(v17 + 12) = v16;
        *(_DWORD *)(v17 + 4) = 0;
        sub_B74930(a3, v17);
        sub_B8C4D0(a3, a1[31]);
        v19 = sub_15F1120((__int64)a1);
        if ( v19 )
        {
          v21 = nullsub_438;
          v20 = *(void (**)())(*(_QWORD *)v19 + 88LL);
          if ( v20 != nullsub_438 )
            ((void (__fastcall *)(__int64, __int64))v20)(v19, a3);
        }
        sub_186FAF0((__int64)a1, a3, (__int64)v20, (__int64)v21, v22, v23);
        sub_185CCD0(v24, a3);
      }
    }
  }
}
