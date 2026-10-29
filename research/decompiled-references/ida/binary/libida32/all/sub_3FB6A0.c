__int64 __fastcall sub_3FB6A0(_QWORD *a1, unsigned int a2)
{
  int v3; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+4h] [rbp-24h]
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3 = -1;
  v4 = 0;
  sub_3DD670(a1, (__int64)&v3, a2);
  while ( v3 != -1 )
  {
    if ( (v4 & 0x1Fu) <= 0x13 )
    {
      if ( (v4 & 0x1Fu) > 0x11 )
        return 1;
    }
    else if ( (v4 & 0x1F) == 0x15 )
    {
      return 1;
    }
    sub_3DD750(a1, (__int64)&v3, a2);
  }
  return 0;
}

