/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_946D0
// Address: 0x00000000000946D0

//----- (00000000000946D0) ----------------------------------------------------
__int64 __fastcall sub_946D0(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, unsigned __int64 *a5)
{
  __int64 result; // rax
  const void *v9; // r13
  unsigned __int64 v10; // rsi
  _BYTE *v11; // rax
  bool v12; // zf
  const void *v13; // r13
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  unsigned int v18; // ebp
  unsigned int v19; // r14d
  __int16 v20; // ax
  _QWORD *v21; // [rsp+8h] [rbp-50h]
  __int64 (__fastcall **v22)(); // [rsp+10h] [rbp-48h] BYREF
  __int16 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+20h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 184) )
    sub_390A0((int)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, a5[1] - *a5);
  if ( a2 == 16777218 )
  {
    v13 = (const void *)*a5;
    v14 = a5[1];
    v15 = (_BYTE *)*a5;
    v21 = a4;
    while ( (unsigned __int64)v15 < v14 )
    {
      v12 = *v15++ == 0;
      if ( v12 )
      {
        *a5 = (unsigned __int64)v15;
        goto LABEL_18;
      }
    }
    v13 = nullptr;
LABEL_18:
    v18 = unpack_dd(a5, v14);
    v19 = unpack_dd(a5, a5[1]);
    if ( *(_BYTE *)(a1 + 184) )
      sub_390A0((int)"file_path = %s; arch = %d; is_be = %d.\n", v13, v18, v19);
    v20 = unpack_dw(a5, a5[1]);
    v22 = &off_14E810;
    v23 = v20;
    return sub_94890(
             (__int64 (__fastcall ***)(_QWORD, void **, __int64, _DWORD **, void **, void **))&v22,
             a1,
             a3,
             v21,
             v13,
             v18,
             v19 != 0);
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( a2 == 16777217 )
    {
      v9 = (const void *)*a5;
      v10 = a5[1];
      v11 = (_BYTE *)*a5;
      while ( (unsigned __int64)v11 < v10 )
      {
        v12 = *v11++ == 0;
        if ( v12 )
        {
          *a5 = (unsigned __int64)v11;
          goto LABEL_14;
        }
      }
      v9 = nullptr;
LABEL_14:
      v16 = unpack_dd(a5, v10);
      v17 = unpack_dd(a5, a5[1]);
      if ( *(_BYTE *)(a1 + 184) )
        sub_390A0((int)"file_path = %s; arch = %d; is_be = %d.\n", v9, v16, v17);
      v22 = &off_14E7F8;
      return sub_94890(
               (__int64 (__fastcall ***)(_QWORD, void **, __int64, _DWORD **, void **, void **))&v22,
               a1,
               a3,
               a4,
               v9,
               v16,
               v17 != 0);
    }
  }
  return result;
}
// 14E7F8: using guessed type __int64 (__fastcall *off_14E7F8)();
// 14E810: using guessed type __int64 (__fastcall *off_14E810)();
