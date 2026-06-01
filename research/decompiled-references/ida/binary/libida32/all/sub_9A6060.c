char __fastcall sub_9A6060(__int64 *a1, __int64 *a2)
{
  char result; // al
  unsigned __int8 *v3; // r8
  unsigned __int8 *v4; // rdx
  unsigned __int8 v5; // cl
  _BYTE v6[9]; // [rsp+1h] [rbp-9h] BYREF

  result = 0;
  if ( ((*a2 >> 1) & 1) == ((*a1 >> 1) & 1) )
  {
    v3 = (unsigned __int8 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
    v4 = (unsigned __int8 *)(*a2 & 0xFFFFFFFFFFFFFFF8LL);
    v5 = *v4;
    if ( *v3 == 2 )
    {
      return v5 == 2;
    }
    else if ( v5 != 2 )
    {
      return sub_9A5D20((__int64)v6, v3, v4);
    }
  }
  return result;
}

