bool __fastcall sub_742D70(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rdx
  unsigned __int8 v4; // bp
  unsigned __int8 *v6; // [rsp+0h] [rbp-658h] BYREF
  unsigned __int8 *v7; // [rsp+8h] [rbp-650h]
  unsigned __int16 v8[780]; // [rsp+10h] [rbp-648h] BYREF
  unsigned __int64 v9; // [rsp+628h] [rbp-30h]

  v3 = &a2[a3];
  v9 = __readfsqword(0x28u);
  v7 = v3;
  if ( a2 >= v3 )
    return a2 >= v3;
  v4 = *a2;
  v6 = a2 + 1;
  if ( v4 > 3u )
  {
    if ( v4 == 4 )
    {
      sub_7469F0(v8, &v6);
      while ( 1 )
      {
        a2 = v6;
        v3 = v7;
        if ( v6 >= v7 )
          break;
        sub_746B10(v8, &v6);
        if ( !(unsigned __int8)sub_73D2C0(a1, v8, 0xFFFF, nullptr, 0) )
          return 0;
      }
      return a2 >= v3;
    }
  }
  else if ( v4 > 1u )
  {
    sub_746A90(v8, &v6);
    if ( (unsigned __int8)sub_73D2C0(a1, v8, 0xFFFF, nullptr, 0) )
    {
      if ( v4 == 2 )
        sub_746A40((char *)&v8[1] + v8[0], &v6);
      goto LABEL_6;
    }
  }
  else
  {
    if ( !v4 )
      return ++a2 >= v3;
    sub_746A90(v8, &v6);
    if ( (unsigned __int8)sub_73A6B0(a1, v8, 0) )
    {
LABEL_6:
      a2 = v6;
      v3 = v7;
      return a2 >= v3;
    }
  }
  return 0;
}
