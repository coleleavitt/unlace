__int64 __fastcall sub_5933C0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // [rsp+18h] [rbp-18h]
  unsigned __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  if ( !a2 )
    return 0;
  if ( a1[2] && a2 <= *a1 - a1[3] )
  {
    v6 = a1[2] + a1[3];
    a1[3] += a2;
    if ( a1[3] == *a1 )
    {
      a1[3] = 0;
      a1[2] = 0;
    }
    return v6;
  }
  else
  {
    v5 = (*a1 + a2 + 15) / *a1;
    v4 = sub_593538(a1, v5);
    if ( v4 )
    {
      a1[3] = (*a1 + a2 - v5 * *a1 + 16) % *a1;
      if ( a1[3] )
        v3 = v4 + *a1 * (v5 - 1);
      else
        v3 = 0;
      a1[2] = v3;
      return v4 + 16;
    }
    else
    {
      return 0;
    }
  }
}
