/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E8E0
// Address: 0x000000010006E8E0

//----- (000000010006E8E0) ----------------------------------------------------
__int64 __fastcall sub_10006E8E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-C8h]
  __int64 v19; // [rsp+18h] [rbp-B8h]
  char v20[128]; // [rsp+20h] [rbp-B0h] BYREF

  v5 = a3;
  v6 = (*(__int64 (**)(void))(*(_QWORD *)*a1 + 8LL * (a3 == 0) + 32))();
  if ( !v6 )
    return 0;
  v7 = (*(__int64 (__fastcall **)(__int64))(*a1 + 144LL))(v6);
  if ( !v7 )
    return 0;
  v8 = v7;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, v7, 1459617792);
  if ( (*(unsigned int (__fastcall **)(__int64, const char *))(*a1 + 152LL))(
         v8,
         "DEFAULT:!MEDIUM:!SSLv2:!SSLv3:!TLSv1.0:!DSS:!PSK:!kRSA:!kDHr:!kDHd:!kDH:!kECDHr:!kECDHe:!kECDH:@STRENGTH") != 1 )
  {
LABEL_23:
    (*(void (__fastcall **)(__int64))(*a1 + 120LL))(v8);
    return 0;
  }
  if ( (debug[2] & 0x10) != 0 )
  {
    v19 = v5;
    v18 = v8;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 72LL))(*a1, v8);
    v10 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 80LL))(*a1, v9);
    sub_100000AE0((int)"TLS: num ciphers: %d\n", v10);
    if ( (int)v10 > 0 )
    {
      v11 = 0;
      do
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 88LL))(*a1, v9, v11);
        v13 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*a1 + 96LL))(v12, v20, 128);
        sub_100000AE0((int)"TLS:  %s", v13);
        ++v11;
      }
      while ( (_DWORD)v10 != v11 );
    }
    v8 = v18;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, unsigned int, unsigned int)))(*a1 + 160LL))(
      v18,
      sub_10006EB80);
    v5 = v19;
  }
  v14 = *a1;
  if ( !v5 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(v14 + 128))(v8);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*a1 + 328LL))(v16, a2) != 1 && (debug[2] & 0x10) != 0 )
      sub_1000139E0((int)"TLS: failed to add Root CA certificate to store\n");
    return v8;
  }
  if ( *(_DWORD *)(v14 + 368) <= 0x10001FFu )
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(v14 + 64))(415);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, v8, v15);
    (*(void (__fastcall **)(__int64))(*a1 + 56LL))(v15);
    if ( (debug[2] & 0x10) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v14 + 64LL))(*a1, v8, 1);
  if ( (debug[2] & 0x10) != 0 )
LABEL_17:
    sub_1000139E0((int)"TLS: using certificate chain file \"%s\"\n", v5);
LABEL_18:
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*a1 + 176LL))(v8, v5) != 1 )
    goto LABEL_23;
  if ( (debug[2] & 0x10) != 0 )
    sub_1000139E0((int)"TLS: using private key file \"%s\"\n", a4);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*a1 + 168LL))(v8, a4, 1) != 1
    || (*(unsigned int (__fastcall **)(__int64))(*a1 + 104LL))(v8) != 1 )
  {
    goto LABEL_23;
  }
  return v8;
}
