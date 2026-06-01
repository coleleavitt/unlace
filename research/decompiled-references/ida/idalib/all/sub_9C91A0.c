char __fastcall sub_9C91A0(__int64 *a1, __int64 *a2)
{
  _BYTE v3[9]; // [rsp+1h] [rbp-9h] BYREF

  if ( ((*a2 >> 1) & 1) == ((*a1 >> 1) & 1) )
    return sub_9C8F40((__int64)v3, *a1 & 0xFFFFFFFFFFFFFFF8LL, *a2 & 0xFFFFFFFFFFFFFFF8LL);
  else
    return 0;
}
