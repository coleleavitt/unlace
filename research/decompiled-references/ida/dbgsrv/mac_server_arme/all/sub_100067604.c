/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067604
// Address: 0x0000000100067604

//----- (0000000100067604) ----------------------------------------------------
__int64 __fastcall sub_100067604(__int64 a1)
{
  __int64 result; // x0
  size_t v3; // x0
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x21
  int v9; // w1
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x20
  int v13; // w0
  int v14; // w8
  const char *v15; // x8
  __int64 v16; // x0
  bool v17; // zf
  bool v18; // zf
  __int64 v19; // [xsp+8h] [xbp-438h] BYREF
  _BYTE v20[14]; // [xsp+10h] [xbp-430h]

  result = sub_1000666CC(&qword_1000A5AD8, (const char **)(a1 + 64));
  if ( !(_DWORD)result )
    return result;
  v3 = strlen(
         "-----BEGIN CERTIFICATE-----\n"
         "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\n"
         "+t/FOgI=\n"
         "-----END CERTIFICATE-----\n");
  v4 = (*(__int64 (__fastcall **)(const char *, size_t))(qword_1000A5AD8 + 32))(
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
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(qword_1000A5AD8 + 88))(v4, 0, 0, 0);
  (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 16))(v5);
  *(_QWORD *)(a1 + 96) = v6;
  if ( !v6 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 64) = "load_root_ca_certificate";
    return 0;
  }
  sub_100062414(0);
  *(_QWORD *)(a1 + 32) = v7;
  if ( (sub_1000624D4(v7) & 1) == 0 )
  {
    *(_QWORD *)(a1 + 64) = "irs";
    return 0;
  }
  result = sub_100067090((__int64)&qword_1000A5AD8, *(_QWORD *)(a1 + 96));
  *(_QWORD *)(a1 + 80) = result;
  if ( !result || (result = (*(__int64 (**)(void))(qword_1000A5AD8 + 256))(), (*(_QWORD *)(a1 + 88) = result) == 0) )
  {
    *(_QWORD *)(a1 + 64) = "openssl";
    return result;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(qword_1000A5AD8 + 24))(qword_1000A5AE0);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1000A5AD8 + 168LL))(qword_1000A5AD8, v8, a1);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_1000A5AD8 + 288))(*(_QWORD *)(a1 + 88), v8, v8);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(qword_1000A5AD8 + 208))(*(_QWORD *)(a1 + 88));
  v10 = *(_QWORD *)(a1 + 88);
  if ( v9 <= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(qword_1000A5AD8 + 232))(v10);
    result = 0;
    if ( v14 == 5 )
      v15 = "irs";
    else
      v15 = "openssl";
    *(_QWORD *)(a1 + 64) = v15;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(qword_1000A5AD8 + 240))(v10);
    if ( !v11 )
    {
      *(_QWORD *)(a1 + 64) = "openssl";
LABEL_33:
      sub_100067234((_QWORD *)a1, -1);
      return 0;
    }
    v12 = v11;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(qword_1000A5AD8 + 248))(*(_QWORD *)(a1 + 88));
    if ( v13 )
    {
      *(_QWORD *)(a1 + 64) = "openssl_verify";
      *(_DWORD *)(a1 + 72) = v13;
LABEL_32:
      (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 344))(v12);
      goto LABEL_33;
    }
    v16 = (*(__int64 (__fastcall **)(__int64))(qword_1000A5AD8 + 352))(v12);
    if ( (*(int (__fastcall **)(__int64, __int64, __int64 *, __int64))(qword_1000A5AD8 + 320))(v16, 13, &v19, 1024) < 1
      || (v19 == 0x6C616E7265746E69LL ? (v17 = *(_QWORD *)v20 == 0x7961722D7865682ELL) : (v17 = 0),
          v17 ? (v18 = *(_QWORD *)&v20[6] == 0x6D6F632E737961LL) : (v18 = 0),
          v18) )
    {
      *(_QWORD *)(a1 + 64) = "invalid_remote_certificate";
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 344))(v12);
    if ( (debug & 0x100000) != 0 )
      sub_100012E04();
    return 1;
  }
  return result;
}
// 1000676BC: variable 'v7' is possibly undefined
// 1000A5908: using guessed type int debug;
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
// 1000A5AE0: using guessed type __int64 qword_1000A5AE0;
