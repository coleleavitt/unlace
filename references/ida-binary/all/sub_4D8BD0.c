__int64 __fastcall sub_4D8BD0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a3 >= a1[4] )
    return 0;
  if ( (unsigned __int8)sub_4D8A50(a1, a2, a3, 4) )
    return *(_QWORD *)(a1[3] + 16 * a3);
  return 0;
}
