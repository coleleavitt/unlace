__int64 __fastcall sub_D28950(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r12
  unsigned __int8 v6; // [rsp+1h] [rbp-69h]
  unsigned __int8 v7; // [rsp+1h] [rbp-69h]
  void *v8; // [rsp+2h] [rbp-68h] BYREF
  unsigned int v9; // [rsp+Ah] [rbp-60h]
  void *v10; // [rsp+22h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+2Ah] [rbp-40h]
  unsigned __int16 v12; // [rsp+32h] [rbp-38h]

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *a2;
    v4 = *(_QWORD *)(a1 + 560);
    v5 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = v3;
    sub_D0AF80((__int64)&v10, v4);
    sub_D0AF80((__int64)&v8, *(_QWORD *)(a1 + 560));
    result = sub_D28720(a1 + 384, v5, (unsigned int)v12 + 1, (__int64)&v8, (__int64)&v10);
    if ( v9 > 0x40 && v8 )
    {
      v6 = result;
      operator delete[](v8);
      result = v6;
    }
    if ( v11 > 0x40 )
    {
      if ( v10 )
      {
        v7 = result;
        operator delete[](v10);
        return v7;
      }
    }
  }
  return result;
}
