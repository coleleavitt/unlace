__int64 __fastcall sub_2942C0(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)sub_281F10(
                          a2,
                          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
                          1u,
                          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8)) )
  {
    if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (unsigned __int8)sub_292590(a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_293E80((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  if ( (unsigned __int8)sub_294060((_QWORD *)a1, a2) )
    ++*(_DWORD *)(a1 + 80);
  return 0;
}
