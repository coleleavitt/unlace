char __fastcall sub_3EA270(_DWORD *a1, int a2, int a3)
{
  char result; // al
  int v4; // eax

  result = 1;
  if ( a2 != 8 && a1[95] != a2 && a1[97] != a2 && a1[101] != a2 )
  {
    if ( a1[99] == a2
      || a1[100] == a2
      || a1[102] == a2
      || a1[21] == 8
      && (a1[103] == a2
       || a1[104] == a2
       || a1[105] == a2
       || a1[106] == a2
       || a1[107] == a2
       || a1[108] == a2
       || a1[109] == a2
       || a1[110] == a2) )
    {
      return a1[20] >= a3;
    }
    else if ( a3 == 16 && (v4 = a1[140], v4 <= a2) && a1[155] + 16 > a2 )
    {
      return (((_BYTE)a2 - (_BYTE)v4) & 0xF) == 0;
    }
    else
    {
      result = 1;
      if ( a1[113] != a2 && a1[114] != a2 && a1[115] != a2 && a1[116] != a2 )
        return a1[177] <= a2;
    }
  }
  return result;
}
