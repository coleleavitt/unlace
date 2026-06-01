__int64 __fastcall sub_2299260(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  __int64 v7; // rsi

  switch ( a2 )
  {
    case 0x10u:
      sub_2299260(a1, 0);
      sub_2299260(a1, 81);
      sub_2299260(a1, 82);
      sub_2299260(a1, 83);
      break;
    case 0x77u:
      sub_2299260(a1, 110);
      break;
    case 0x7Au:
      sub_2299260(a1, 117);
      break;
    case 0x79u:
      sub_2299260(a1, 116);
      break;
    case 0x78u:
      sub_2299260(a1, 114);
      sub_2299260(a1, 118);
      break;
  }
  result = 1LL << a2;
  v4 = (__int64 *)(a1 + 8LL * (a2 >> 6));
  v5 = *v4;
  if ( (*v4 & (1LL << a2)) != 0 )
  {
    v4[3] |= result;
    v6 = &unk_26FB800;
    result = v5 & ~result;
    *v4 = result;
    do
    {
      while ( a2 != *v6 )
      {
        v6 += 2;
        if ( &unk_26FBAF8 == (_UNKNOWN *)v6 )
          return result;
      }
      v7 = (unsigned int)v6[1];
      v6 += 2;
      result = sub_2299260(a1, v7);
    }
    while ( &unk_26FBAF8 != (_UNKNOWN *)v6 );
  }
  return result;
}
