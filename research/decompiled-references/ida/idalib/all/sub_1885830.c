void __fastcall sub_1885830(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // rbx
  __int16 v25; // dx
  __int64 v26; // rsi
  __int64 v27; // rax
  void (*v28)(); // rdx
  _QWORD v29[6]; // [rsp-78h] [rbp-78h] BYREF
  _BYTE v30[72]; // [rsp-48h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a3 + 84) & 0x40) == 0 && *(char *)(a3 + 28) >= 0 )
  {
    v3 = a3 + 72;
    v8 = (__int64 *)sub_B72690(a3 + 72);
    if ( v8 )
      v8 -= 8;
    sub_183ABA0((__int64)v29, a1, v3, v5, v6, v7);
    v10 = (_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v10 + 16LL) != 26 )
      sub_F63050(*v10, a1, *v10, v9);
    sub_18B0530(a1, a2);
    sub_1884910(a1, a2, v8, 0, v11, v12);
    sub_1837F10(v29, v30, a2);
    v13 = sub_B72690(v3);
    v14 = *(_DWORD *)(a3 + 24);
    v15 = v13;
    v16 = v13 - 64;
    if ( v15 )
      v15 = v16;
    if ( !(unsigned __int8)sub_B8E180(v15 + 64) && *(_BYTE *)(v15 + 73) >> 5 != 2 )
    {
      v21 = sub_B7E900(v15, (__int64)v30, v17, v18, v19, v20);
      if ( v21 )
      {
LABEL_12:
        sub_1845320((_QWORD *)a1, v14, v21);
        while ( 1 )
        {
          v22 = *(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v21 = v22;
          if ( !v22 )
            break;
          if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_12;
        }
      }
      sub_18508B0((_QWORD *)a1, v14, (_QWORD *)v15);
    }
    if ( (unsigned __int8)sub_1883030(a1, a3) )
    {
      sub_B88650(a3, 1);
      sub_185CCD0(v29, 1);
    }
    else
    {
      if ( (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32 )
        v23 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32;
      else
        LODWORD(v23) = *(_DWORD *)(a3 + 24);
      v24 = sub_EEE9A0(16, *(_QWORD **)(a1 + 248), 8u);
      v25 = *(_WORD *)v24 & 0xFE00;
      LOBYTE(v25) = -7;
      *(_WORD *)v24 = v25;
      if ( unk_2CD7484 )
        sub_EE9B50(249);
      *(_BYTE *)(v24 + 1) &= ~2u;
      *(_DWORD *)(v24 + 8) = v23;
      *(_DWORD *)(v24 + 12) = v23;
      *(_DWORD *)(v24 + 4) = 0;
      sub_B74930(a3, v24);
      v26 = *(_QWORD *)(a1 + 248);
      sub_B8C4D0(a3, v26);
      v27 = sub_15F1120(a1);
      if ( v27 )
      {
        v28 = *(void (**)())(*(_QWORD *)v27 + 88LL);
        if ( v28 != nullsub_438 )
        {
          v26 = a3;
          ((void (__fastcall *)(__int64, __int64))v28)(v27, a3);
        }
      }
      sub_185CCD0(v29, v26);
    }
  }
}
