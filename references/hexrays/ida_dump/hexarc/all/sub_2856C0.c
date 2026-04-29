__int64 __fastcall sub_2856C0(__int64 *a1)
{
  __int64 v1; // rax

  v1 = a1[3];
  if ( *(_DWORD *)(v1 + 8) != 52 )
    return 0;
  if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 48LL), 2) & 0xF) == 0xB )
    return 0;
  sub_24E4D0(a1, a1[3]);
  sub_24E4D0(a1, a1[3]);
  return 1;
}
