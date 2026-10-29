__int64 __fastcall sub_43FE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rax
  __int64 range; // rax

  v4 = 0;
  while ( 1 )
  {
    range = rangeset_t_find_range(a1 + 336, a2);
    if ( !range )
      break;
    v6 = *(_QWORD *)(range + 8) - a2;
    if ( v6 > a3 )
      v6 = a3;
    v4 += v6;
    a3 -= v6;
    if ( !a3 )
      break;
    a2 += v6;
  }
  return v4;
}

