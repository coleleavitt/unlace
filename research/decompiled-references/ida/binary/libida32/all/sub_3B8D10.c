__int64 __fastcall sub_3B8D10(__int64 *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // eax

  if ( !(unsigned __int8)sub_3E9640(a1) )
    return sub_3B8C60((__int64)a2, *a1, a3);
  v4 = sub_3E9FB0(a1, a3);
  if ( v4 == -1 )
    return sub_3B8C60((__int64)a2, *a1, a3);
  if ( a2 )
  {
    *a2 = v4;
    a2[1] = sub_3E9FF0(a1, v4) + v4;
  }
  return 2;
}

