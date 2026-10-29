unsigned __int64 __fastcall sub_42A310(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // r15
  int v8; // r14d
  unsigned __int64 v9; // rbp
  unsigned int v10; // ecx
  int v11; // ecx

  if ( (sub_3BE900(a1, a2, 4) & 0x600) == 0 )
  {
    v5 = sub_505D70(a1 + 203, a2);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 43);
      v7 = 2 << v6;
      v8 = (2 << v6) - 1;
      if ( a3 != -1 )
        goto LABEL_7;
      a3 = a2 + 1;
      if ( v7 <= 1 )
        goto LABEL_2;
LABEL_8:
      v9 = a3 - a2;
      do
      {
        if ( (v8 & a3) == 0 )
          break;
        if ( (sub_3BE900(a1, a3, 4) & 0x600) != 0 )
          break;
        ++v9;
        ++a3;
      }
      while ( v9 < v7 );
      goto LABEL_2;
    }
    v10 = *(_DWORD *)(a1[2] + 8LL);
    if ( (v10 & 0x2000) != 0 )
    {
      v8 = 7;
      v7 = 8;
      if ( a3 == -1 )
        goto LABEL_17;
    }
    else
    {
      v11 = (v10 >> 1) & 1;
      v7 = 2 << v11;
      v8 = (2 << v11) - 1;
      if ( a3 == -1 )
      {
LABEL_17:
        a3 = a2 + 1;
        goto LABEL_8;
      }
    }
LABEL_7:
    if ( a3 - a2 >= v7 )
      return a3;
    goto LABEL_8;
  }
LABEL_2:
  if ( a3 == -1 )
    return a2 + 1;
  return a3;
}
