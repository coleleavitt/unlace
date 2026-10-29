/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F480
// Address: 0x000000010006F480

//----- (000000010006F480) ----------------------------------------------------
__int64 __fastcall sub_10006F480(__int64 a1)
{
  const char **v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // eax
  const char *v16; // rax
  int v18; // eax
  const char *v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22[64]; // [rsp+0h] [rbp-430h] BYREF

  v2 = (const char **)(a1 + 64);
  if ( !(unsigned __int8)sub_10006E7C0(&xmmword_1000AE410, (const char **)(a1 + 64)) )
    goto LABEL_16;
  v3 = strlen(
         "-----BEGIN CERTIFICATE-----\n"
         "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\n"
         "+t/FOgI=\n"
         "-----END CERTIFICATE-----\n");
  v4 = (*(__int64 (__fastcall **)(const char *, _QWORD))(xmmword_1000AE410 + 32))(
         "-----BEGIN CERTIFICATE-----\n"
         "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\n"
         "+t/FOgI=\n"
         "-----END CERTIFICATE-----\n",
         v3);
  if ( !v4 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    goto LABEL_12;
  }
  v5 = v4;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(xmmword_1000AE410 + 88))(v4, 0, 0, 0);
  (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 16))(v5);
  *(_QWORD *)(a1 + 96) = v6;
  if ( !v6 )
  {
LABEL_12:
    v16 = "load_root_ca_certificate";
LABEL_15:
    *v2 = v16;
LABEL_16:
    LODWORD(v2) = 0;
    return (unsigned int)v2;
  }
  v7 = sub_10006AA50(0);
  *(_QWORD *)(a1 + 32) = v7;
  if ( !(unsigned __int8)sub_10006AAC0((__int64)v7) )
  {
    v16 = "irs";
    goto LABEL_15;
  }
  v8 = sub_10006EFD0(&xmmword_1000AE410, *(_QWORD *)(a1 + 96));
  *(_QWORD *)(a1 + 80) = v8;
  if ( !v8
    || (v9 = (*(__int64 (__fastcall **)(__int64))(xmmword_1000AE410 + 256))(v8), (*(_QWORD *)(a1 + 88) = v9) == 0) )
  {
    v16 = "openssl";
    goto LABEL_15;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 24))(*((_QWORD *)&xmmword_1000AE410 + 1));
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)xmmword_1000AE410 + 168LL))(xmmword_1000AE410, v10, a1);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(xmmword_1000AE410 + 288))(*(_QWORD *)(a1 + 88), v10, v10);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 208))(*(_QWORD *)(a1 + 88));
  v12 = *(_QWORD *)(a1 + 88);
  if ( v11 <= 0 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(xmmword_1000AE410 + 232))(v12, (unsigned int)v11);
    v19 = "openssl";
    if ( v18 == 5 )
      v19 = "irs";
    *v2 = v19;
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(xmmword_1000AE410 + 240))(v12);
  if ( !v13 )
  {
    *v2 = "openssl";
LABEL_28:
    sub_10006F140((_QWORD *)a1, -1);
    goto LABEL_16;
  }
  v14 = v13;
  v15 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 248))(*(_QWORD *)(a1 + 88));
  if ( v15 )
  {
    *(_QWORD *)(a1 + 64) = "openssl_verify";
    *(_DWORD *)(a1 + 72) = v15;
LABEL_27:
    (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 344))(v14);
    goto LABEL_28;
  }
  v20 = (*(__int64 (__fastcall **)(__int64))(xmmword_1000AE410 + 352))(v14);
  if ( (*(int (__fastcall **)(__int64, __int64, __m128i *, __int64))(xmmword_1000AE410 + 320))(v20, 13, v22, 1024) <= 0
    || (v21 = _mm_or_si128(
                _mm_xor_si128(_mm_load_si128(v22), (__m128i)xmmword_100090960),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v22[0].u16[3]), (__m128i)xmmword_100090950)),
        _mm_testz_si128(v21, v21)) )
  {
    *v2 = "invalid_remote_certificate";
    goto LABEL_27;
  }
  (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 344))(v14);
  LOBYTE(v2) = 1;
  if ( (debug[2] & 0x10) != 0 )
    sub_1000139E0((int)"TLS: certificate verified\n");
  return (unsigned int)v2;
}
// 100090950: using guessed type __int128 xmmword_100090950;
// 100090960: using guessed type __int128 xmmword_100090960;
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
