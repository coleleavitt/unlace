unsigned __int64 __fastcall sub_1CB4650(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 *a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 *v10; // rbp
  __int64 *v11; // r14
  __int64 v12; // rsi
  _BYTE v16[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( a3 )
  {
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a3, 0x1D04u, 0);
    sub_15F7200(v16);
  }
  v10 = &a7[a8];
  if ( a7 != v10 )
  {
    v11 = a7;
    do
    {
      v12 = *v11++;
      sub_17B7510(a1, v12);
    }
    while ( v10 != v11 );
  }
  return sub_BC21A0(*(_QWORD **)(a1 + 248), a4, a5, (__int64)a7, a8, a6, a9);
}
