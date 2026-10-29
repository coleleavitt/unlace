/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140017F10
// Address: 0x0000000140017F10

//----- (0000000140017F10) ----------------------------------------------------
__int64 __fastcall sub_140017F10(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // ebp
  HANDLE v5; // rcx
  __int64 v6; // rsi
  signed int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  signed int v11; // eax
  unsigned __int64 v12; // rax
  signed int v13; // eax
  unsigned __int64 v14; // rax
  signed int v15; // eax
  unsigned __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rax
  _BYTE v19[16]; // [rsp+60h] [rbp-68h] BYREF
  int v20; // [rsp+70h] [rbp-58h] BYREF
  __int64 v21; // [rsp+78h] [rbp-50h]
  __int64 v22; // [rsp+80h] [rbp-48h]
  int v23; // [rsp+88h] [rbp-40h] BYREF
  __int64 v24; // [rsp+90h] [rbp-38h]
  wchar_t *v25; // [rsp+98h] [rbp-30h]
  int v26; // [rsp+A0h] [rbp-28h]
  __int128 v27; // [rsp+A8h] [rbp-20h]
  char v28; // [rsp+E8h] [rbp+20h] BYREF

  v4 = a3;
  v5 = hObject;
  v6 = a2;
  if ( !hObject )
  {
    LOBYTE(a2) = 1;
    v7 = qword_1400CAEB8(10, a2, 0, &v28);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = sub_14005A890(v7);
      sub_140012440(
        a1,
        (struct __crt_locale_pointers *)"AUTOHIDE NONE\n"
                                        "Failed to acquire 'load driver' privilege, please run as admin!\n"
                                        "Error: %s\n",
        v10);
      return v9;
    }
    LOBYTE(v8) = 1;
    v11 = qword_1400CAEB8(20, v8, 0, &v28);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = sub_14005A890(v11);
      sub_140012440(
        a1,
        (struct __crt_locale_pointers *)"AUTOHIDE NONE\n"
                                        "Failed to acquire 'debug' privilege, is system booted in /debug mode?\n"
                                        "Error: %s\n",
        v12);
      return v9;
    }
    v13 = qword_1400CAEA8(aXz);
    v9 = v13;
    if ( v13 < 0 && v13 != -1073741554 )
    {
      v14 = sub_14005A890(v13);
      sub_140012440(
        a1,
        (struct __crt_locale_pointers *)"AUTOHIDE NONE\n"
                                        "Failed to load 'kldbgdrv', please use local kernel debugging at least once!\n"
                                        "Error: %s\n",
        v14);
      return v9;
    }
    v23 = 48;
    v24 = 0;
    v25 = asc_1400C6050;
    v26 = 64;
    v27 = 0;
    v15 = qword_1400CAEC0(&hObject, 3221225472LL, &v23, v19, 0, 128, 0, 2, 64, 0, 0);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = sub_14005A890(v15);
      sub_140012440(a1, (struct __crt_locale_pointers *)"AUTOHIDE NONE\nFailed to open 'kldbgdrv'\nError: %s\n", v16);
      return v9;
    }
    v5 = hObject;
  }
  v20 = v4 + 16;
  v21 = v6;
  v22 = 16;
  result = qword_1400CAEC8(v5, 0, 0, 0, v19, 2277383, &v20, 24, v6, 16);
  v9 = result;
  if ( (int)result >= 0 )
    return result;
  v18 = sub_14005A890(result);
  sub_140012440(
    a1,
    (struct __crt_locale_pointers *)"AUTOHIDE NONE\n"
                                    "Failed to access model specific register, is system booted in /debug mode?\n"
                                    "Error: %s\n",
    v18);
  return v9;
}
// 140017F8A: variable 'v8' is possibly undefined
// 1400C6040: using guessed type wchar_t aXz[3];
// 1400C6050: using guessed type wchar_t asc_1400C6050[3];
// 1400CAEA8: using guessed type __int64 (__fastcall *qword_1400CAEA8)(_QWORD);
// 1400CAEB8: using guessed type __int64 (__fastcall *qword_1400CAEB8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400CAEC0: using guessed type __int64 (__fastcall *qword_1400CAEC0)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _DWORD);
// 1400CAEC8: using guessed type __int64 (__fastcall *qword_1400CAEC8)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD);
