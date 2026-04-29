__int64 __fastcall sub_294680(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)sub_2822D0(
                          a2,
                          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
                          1u,
                          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8)) )
  {
    if ( (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (unsigned __int8)sub_292950(a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_294240((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_294420((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  return 0;
}
