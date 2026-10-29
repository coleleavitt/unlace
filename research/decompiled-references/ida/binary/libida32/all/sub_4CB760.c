__int64 __fastcall sub_4CB760(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  char v5; // al
  int v7; // eax
  int data_elsize; // r12d
  int v9; // edx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // eax

  v3 = sub_3B9AA0(a1, a2, 4);
  if ( (v3 & 0x600) != 0x400 )
  {
LABEL_2:
    v4 = sub_4EE820(a1 + 1552, a2);
    if ( v4 )
    {
      v5 = *(_BYTE *)(v4 + 23);
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
          return 1;
        return 2;
      }
    }
    else
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      if ( (v7 & 0x2000) == 0 )
      {
        if ( (v7 & 0x2002) == 0 )
          return 1;
        return 2;
      }
    }
    return 9;
  }
  data_elsize = get_data_elsize(a2, v3, 0);
  v9 = nbits(a2);
  v10 = v9 + 14;
  v11 = v9 + 7;
  if ( v11 >= 0 )
    v10 = v11;
  v12 = data_elsize * (v10 >> 3);
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
      return 1;
    if ( v12 <= 4 )
      return 2;
    if ( v12 <= 8 )
      return 9;
    goto LABEL_2;
  }
  return 10;
}

