_DWORD *__fastcall sub_856930(int a1, _DWORD *a2, int a3, int a4)
{
  __int64 v4; // rdx
  int v6; // eax

  if ( (a3 & 0x20000) != 0 && (v4 = (unsigned int)(a1 - 6), (dword_23BF120[v4] & a4) == 0) )
  {
    *a2 = dword_23BF100[v4] - 2145648640;
    if ( a1 > 9 )
    {
      a2[1] = (_DWORD)&stru_80000;
      return a2 + 2;
    }
    else
    {
      v6 = 393216;
      if ( a1 <= 7 )
        v6 = 131085;
      a2[1] = v6;
      return a2 + 2;
    }
  }
  else
  {
    *a2 = a1 - 2145648640;
    return a2 + 1;
  }
}
