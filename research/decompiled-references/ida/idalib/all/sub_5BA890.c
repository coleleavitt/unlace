__int64 __fastcall sub_5BA890(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+10h] [rbp-48h] BYREF
  char v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( ((unsigned __int8)sub_3C5DC0((__int64)a1, a3) & 2) != 0 )
    return 0;
  if ( (unsigned int)find_sp_value(&v6, a3, 0xFFFFFFFF) == 1 )
  {
    sub_5BA7A0(a1, a2, a3, v6);
  }
  else
  {
    v8 = 0;
    v7 = -1;
    sub_3E2000(a1, (__int64)&v7, a3);
    v5 = v7;
    if ( v7 >= a3 )
      return 0;
    while ( (int)sub_5C9B30(a1, a2, v5) < 0 )
    {
      sub_3E2EB0(a1, &v7, a3);
      v5 = v7;
      if ( v7 >= a3 )
        return 0;
    }
    v6 = sub_5B9200(a1, a2, v5);
    sub_5BA7A0(a1, a2, a3, v6);
  }
  return 1;
}
