unsigned __int64 __fastcall sub_3E39C0(__int64 a1, __int64 a2, char a3)
{
  __int64 i; // rsi
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = -1;
  v8 = 0;
  sub_4108F0(a1, &v7, a2);
  for ( i = v7; v7 != -1; i = v7 )
  {
    if ( !a3 )
    {
      while ( (v8 & 0x20) != 0 || (unsigned __int8)(v8 - 4) <= 1u )
      {
        sub_410A70(a1, &v7, a2);
        i = v7;
        if ( v7 == -1 )
          return v9 - __readfsqword(0x28u);
      }
    }
    sub_411F00(a1, i, a2);
    sub_410A70(a1, &v7, a2);
  }
  return v9 - __readfsqword(0x28u);
}
