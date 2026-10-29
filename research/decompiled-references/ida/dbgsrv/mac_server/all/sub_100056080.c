/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056080
// Address: 0x0000000100056080

//----- (0000000100056080) ----------------------------------------------------
__int64 __fastcall sub_100056080(__int64 a1, unsigned int a2, _QWORD *a3, unsigned __int64 *a4, unsigned __int64 *a5)
{
  __int64 result; // rax
  const char *v9; // r13
  unsigned __int64 v10; // rsi
  _BYTE *v11; // rax
  _BYTE *v12; // rcx
  bool v13; // zf
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  __int16 v21; // ax
  unsigned __int64 *v22; // [rsp+10h] [rbp-50h]
  _QWORD *v23; // [rsp+18h] [rbp-48h]
  __int64 (__fastcall **v24)(); // [rsp+20h] [rbp-40h] BYREF
  __int16 v25; // [rsp+28h] [rbp-38h]

  if ( *(_BYTE *)(a1 + 184) == 1 )
    sub_100000AE0((int)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, a5[1] - *a5);
  if ( a2 == 16777218 )
  {
    v23 = a3;
    v9 = (const char *)*a5;
    v14 = a5[1];
    v15 = (_BYTE *)*a5;
    v22 = a4;
    while ( (unsigned __int64)v15 < v14 )
    {
      v16 = v15 + 1;
      v13 = *v15++ == 0;
      if ( v13 )
      {
        *a5 = (unsigned __int64)v16;
        goto LABEL_18;
      }
    }
    v9 = nullptr;
LABEL_18:
    v17 = unpack_dd(a5, v14);
    v20 = unpack_dd(a5, a5[1]);
    v19 = v20;
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000AE0((int)"file_path = %s; arch = %d; is_be = %d.\n", v9, v17, v20);
    v21 = unpack_dw((unsigned __int8 **)a5, a5[1]);
    v24 = &off_1000A9870;
    v25 = v21;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( a2 != 16777217 )
      return result;
    v23 = a3;
    v9 = (const char *)*a5;
    v10 = a5[1];
    v11 = (_BYTE *)*a5;
    v22 = a4;
    while ( (unsigned __int64)v11 < v10 )
    {
      v12 = v11 + 1;
      v13 = *v11++ == 0;
      if ( v13 )
      {
        *a5 = (unsigned __int64)v12;
        goto LABEL_14;
      }
    }
    v9 = nullptr;
LABEL_14:
    v17 = unpack_dd(a5, v10);
    v18 = unpack_dd(a5, a5[1]);
    v19 = v18;
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000AE0((int)"file_path = %s; arch = %d; is_be = %d.\n", v9, v17, v18);
    v24 = &off_1000A9858;
  }
  return sub_100056240(
           (__int64 (__fastcall ***)(_QWORD, __int128 *, __int64, char **, __int128 *, __int128 *))&v24,
           a1,
           v23,
           v22,
           v9,
           v17,
           v19 != 0);
}
// 1000A9858: using guessed type __int64 (__fastcall *off_1000A9858)();
// 1000A9870: using guessed type __int64 (__fastcall *off_1000A9870)();
