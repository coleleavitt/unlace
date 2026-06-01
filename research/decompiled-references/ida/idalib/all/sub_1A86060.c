__int64 __fastcall sub_1A86060(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 || !a2 )
    return 1;
  *(_QWORD *)(a2 + 24) = a3;
  return a2;
}
