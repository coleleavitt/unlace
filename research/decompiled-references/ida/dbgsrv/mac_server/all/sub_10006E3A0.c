/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E3A0
// Address: 0x000000010006E3A0

//----- (000000010006E3A0) ----------------------------------------------------
__int64 __fastcall sub_10006E3A0(_QWORD *a1, char *a2, unsigned int a3)
{
  unsigned int v4; // r15d
  _DWORD *v5; // r14
  __int64 (__fastcall **v6)(); // rax
  char v8; // [rsp+3h] [rbp-3Dh] BYREF
  int v9; // [rsp+4h] [rbp-3Ch] BYREF
  int v10; // [rsp+8h] [rbp-38h] BYREF
  int v11; // [rsp+Ch] [rbp-34h] BYREF

  if ( (debug[2] & 0x10) != 0 )
    sub_1000139E0((int)"TLS: OpenSSL version \"%s\"\n", a2);
  if ( qsscanf(a2, "OpenSSL %d.%d.%d%c", &v11, &v10, &v9, &v8) == 4 )
  {
    v4 = (v11 << 24) | (v10 << 16) | v8 | (v9 << 8);
    if ( v4 < a3 )
      return 0;
    if ( v4 > 0x100FFFF )
    {
      v5 = operator new(0x218u);
      __bzero(v5, 536);
      v6 = off_1000AA998;
      goto LABEL_16;
    }
LABEL_14:
    v5 = operator new(0x1A8u);
    __bzero(v5, 424);
    v6 = off_1000AA8C8;
LABEL_16:
    *(_QWORD *)v5 = v6;
    *a1 = v5;
    v5[92] = v4;
    LOBYTE(v4) = 1;
    return v4;
  }
  v4 = 0;
  if ( qsscanf(a2, "LibreSSL %d.%d.%d", &v11, &v10, &v9) == 3 )
  {
    v4 = 0;
    if ( v11 == 2 && (unsigned int)(v10 - 6) >= 0xFFFFFFFC )
    {
      if ( (debug[2] & 0x10) != 0 )
        sub_1000139E0((int)"TLS: LibreSSL detected. Setting OpenSSL API version to 1.0.1g\n");
      v4 = 16777575;
      if ( a3 > 0x1000167 )
        return 0;
      goto LABEL_14;
    }
  }
  return v4;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AA8C8: using guessed type __int64 (__fastcall *off_1000AA8C8[2])();
// 1000AA998: using guessed type __int64 (__fastcall *off_1000AA998[2])();
