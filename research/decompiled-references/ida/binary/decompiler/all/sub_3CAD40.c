__int64 __fastcall sub_3CAD40(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)(*(_DWORD *)(a3 + 60) - 1) > 1 || *(int *)(*(_QWORD *)(a3 + 64) + 64LL) <= 0 )
    return 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 20) = 0;
  sub_3CA9E0(a1, a2, a3);
  return 1;
}
