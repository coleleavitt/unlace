__int64 __fastcall sub_290640(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)sub_27E290(
                          a2,
                          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
                          1u,
                          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8)) )
  {
    if ( (unsigned __int8)sub_27FE80(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (unsigned __int8)sub_28E910(a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_290200((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_2903E0((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  return 0;
}
