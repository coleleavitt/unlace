__int64 __fastcall sub_13616F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+8h] [rbp-70h]
  _QWORD v11[4]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h]

  v9 = a2;
  v10 = a3;
  if ( a5 )
  {
    sub_101B340(v11, (unsigned int *)&v9, (*(_BYTE *)(a1[2] + 1LL) & 0x20) != 0);
    sub_101B390((__int64)&v12, (int *)&v9);
    sub_13616F0(a1, v12, v13, v14, v15);
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 48LL))(
             a1,
             (unsigned int)v9,
             v10,
             a4,
             a5,
             v7,
             v11[0],
             v11[1],
             v11[2]);
  }
  return result;
}
