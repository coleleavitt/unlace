/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BDEC
// Address: 0x0005BDEC

//----- (0005BDEC) --------------------------------------------------------
char *__fastcall sub_5BDEC(int a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int *a5)
{
  _BYTE *v6; // r6
  unsigned int *v7; // r7
  char *result; // r0
  const char *v9; // r4
  unsigned int v10; // r1
  _BYTE *v11; // r0
  _BYTE *v12; // r3
  bool v13; // zf
  unsigned int v14; // r0
  unsigned int v15; // r1
  _BYTE *v16; // r2
  const char *v17; // r4
  _BYTE *v18; // r3
  int v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r6
  int v23; // r5
  int v24; // r5
  int v25; // r7
  _UNKNOWN **v29; // [sp+20h] [bp-Ch] BYREF
  __int16 v30; // [sp+24h] [bp-8h]

  v6 = (_BYTE *)(a1 + 96);
  v7 = a5;
  if ( *(_BYTE *)(a1 + 96) )
  {
    v7 = a5;
    sub_1BBA0((int)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, a5[1] - *a5);
  }
  result = (char *)-1;
  if ( a2 == 16777218 )
  {
    v14 = *v7;
    v15 = v7[1];
    v16 = (_BYTE *)*v7;
    while ( 1 )
    {
      v17 = nullptr;
      if ( (unsigned int)v16 >= v15 )
        break;
      v18 = v16 + 1;
      v13 = *v16++ == 0;
      if ( v13 )
      {
        *v7 = (unsigned int)v18;
        v17 = (const char *)v14;
        break;
      }
    }
    v19 = unpack_dd(v7, v15);
    v20 = unpack_dd(v7, v7[1]);
    v21 = (unsigned __int8)*v6;
    v22 = v19;
    v23 = v20;
    if ( v21 )
      sub_1BBA0((int)"file_path = %s; arch = %d; is_be = %d.\n", v17, v22, v20);
    v30 = unpack_dw(v7, v7[1]);
    v29 = &off_DA088;
    return sub_5BF34(
             (int (__fastcall ***)(_DWORD, void **, int, _DWORD *, void **, void **))&v29,
             a1,
             a3,
             a4,
             v17,
             v22,
             v23 != 0);
  }
  else if ( a2 == 16777217 )
  {
    v9 = (const char *)*v7;
    v10 = v7[1];
    v11 = (_BYTE *)*v7;
    while ( (unsigned int)v11 < v10 )
    {
      v12 = v11 + 1;
      v13 = *v11++ == 0;
      if ( v13 )
      {
        *v7 = (unsigned int)v12;
        goto LABEL_19;
      }
    }
    v9 = nullptr;
LABEL_19:
    v24 = unpack_dd(v7, v10);
    v25 = unpack_dd(v7, v7[1]);
    if ( *v6 )
      sub_1BBA0((int)"file_path = %s; arch = %d; is_be = %d.\n", v9, v24, v25);
    v29 = &off_DA07C;
    return sub_5BF34(
             (int (__fastcall ***)(_DWORD, void **, int, _DWORD *, void **, void **))&v29,
             a1,
             a3,
             a4,
             v9,
             v24,
             v25 != 0);
  }
  return result;
}
// DA07C: using guessed type _UNKNOWN *off_DA07C;
// DA088: using guessed type _UNKNOWN *off_DA088;
