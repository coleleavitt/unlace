__int64 __fastcall sub_3FB750(_QWORD *a1, unsigned int a2)
{
  int v3; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+4h] [rbp-24h]
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3 = -1;
  v4 = 0;
  sub_3DD670(a1, (__int64)&v3, a2);
  if ( v3 == -1 )
    return 0;
  while ( (v4 & 0x1Fu) - 16 > 1 )
  {
    sub_3DD750(a1, (__int64)&v3, a2);
    if ( v3 == -1 )
      return 0;
  }
  return 1;
}

