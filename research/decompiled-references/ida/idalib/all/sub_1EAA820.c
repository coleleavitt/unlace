__int64 __fastcall sub_1EAA820(_QWORD *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFFCLL) + 8 * a2;
  else
    return (__int64)&a1[a2];
}
