__int64 __fastcall sub_59E3E8(__int64 a1, __int64 a2)
{
  if ( (unsigned __int64)(8 * a2) > *(_QWORD *)(a1 + 16) )
    return sub_5933C0(*(_QWORD **)a1, 8 * a2);
  else
    return *(_QWORD *)(a1 + 8);
}
