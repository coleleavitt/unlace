__int64 __fastcall sub_594A6C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+8h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+18h] [rbp-18h] BYREF
  __int64 i; // [rsp+28h] [rbp-8h]

  v7[0] = a1;
  v6 = a2;
  v5 = a3;
  for ( i = sub_5951E3(&v6, v7) >> 2; i > 0; --i )
  {
    if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
      return v7[0];
    sub_595334(v7);
    if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
      return v7[0];
    sub_595334(v7);
    if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
      return v7[0];
    sub_595334(v7);
    if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
      return v7[0];
    sub_595334(v7);
  }
  v4 = sub_5951E3(&v6, v7);
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 != 1 )
        return v6;
      goto LABEL_22;
    }
    if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
      return v7[0];
    sub_595334(v7);
  }
  if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
    return v7[0];
  sub_595334(v7);
LABEL_22:
  if ( (unsigned __int8)sub_595302(&v5, v7[0]) )
    return v7[0];
  sub_595334(v7);
  return v6;
}
