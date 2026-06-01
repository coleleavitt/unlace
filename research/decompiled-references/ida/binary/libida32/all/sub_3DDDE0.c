unsigned __int64 __fastcall sub_3DDDE0(_QWORD *a1, unsigned int a2)
{
  __int64 i; // rsi
  unsigned int v5; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+4h] [rbp-24h]
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = -1;
  v6 = 0;
  sub_3DD670(a1, (__int64)&v5, a2);
  for ( i = v5; v5 != -1; i = v5 )
  {
    if ( (v6 & 0x20) == 0 )
      sub_3DCE60(a1, i, a2, 0);
    sub_3DD750(a1, (__int64)&v5, a2);
  }
  return v7 - __readfsqword(0x28u);
}

