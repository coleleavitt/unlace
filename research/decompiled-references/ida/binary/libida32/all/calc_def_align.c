__int64 __fastcall calc_def_align(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  char v6; // al
  unsigned int v7; // eax

  v4 = a2;
  v5 = sub_4EE820(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, a1);
  if ( !v5 )
    return v4;
  v6 = *(_BYTE *)(v5 + 23);
  if ( a3 <= 1 || !v6 )
    return v4;
  if ( a2 == 1 )
  {
    v4 = 2;
    if ( a3 == 2 )
      return v4;
    if ( v6 != 2 )
      return 2 * (unsigned int)(a3 != 3) + 2;
    v4 = 3;
    goto LABEL_20;
  }
  if ( a3 == 2 )
    return v4;
  if ( v6 == 2 )
  {
    if ( a2 > 2 )
    {
      if ( a3 == 3 || a2 > 4 )
        return v4;
      return (unsigned int)(a3 != 4) + 4;
    }
    v4 = a2 + 1;
LABEL_20:
    if ( a3 == 3 )
      return v4;
    return (unsigned int)(a3 != 4) + 4;
  }
  v7 = 4;
  if ( a2 >= 4 )
    v7 = a2;
  if ( a3 != 3 )
    return v7;
  return v4;
}

