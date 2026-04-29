__int64 __fastcall sub_28EF00(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)sub_27CB50(
                          a2,
                          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
                          1u,
                          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8)) )
  {
    if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (unsigned __int8)sub_28D1D0(a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_28EAC0((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_28ECA0((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  return 0;
}
