__int64 __fastcall sub_55B00(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  if ( a3 >= (unsigned __int64)((__int64)(a1[1] - *a1) >> 3) )
    return 2147500037LL;
  *a2 = *(_QWORD *)(*a1 + 8LL * a3);
  return 0;
}
