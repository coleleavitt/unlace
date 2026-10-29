__int64 __fastcall sub_40E8C0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  char v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3 = -1;
  v4 = 0;
  sub_3E3290(a1, (__int64)&v3, a2);
  if ( v3 == -1 )
    return 0;
  while ( (v4 & 0x1Fu) - 16 > 1 )
  {
    sub_3E3390(a1, (__int64)&v3, a2);
    if ( v3 == -1 )
      return 0;
  }
  return 1;
}
