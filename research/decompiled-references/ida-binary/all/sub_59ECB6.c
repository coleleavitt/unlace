__int64 __fastcall sub_59ECB6(__int64 a1, __int64 a2, int a3)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+28h] [rbp-8h] BYREF

  sub_5AEDC8(a2, v5, &v6);
  if ( sub_59E760(16900, a3, 1u, (unsigned __int64)v5) == -1 )
    return 0;
  sub_5AEE34(a2, v5, &v6);
  sub_59E760(16900, a3, 2u, (unsigned __int64)v5);
  return 1;
}
