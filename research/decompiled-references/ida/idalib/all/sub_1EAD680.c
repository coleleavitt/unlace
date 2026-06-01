void __fastcall sub_1EAD680(__int64 a1, _BYTE *a2, signed __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5[15]; // [rsp+0h] [rbp-78h] BYREF

  sub_FC70B0((__int64)v5, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 919);
  sub_AEC220(v5, a2, a3);
  sub_AEC220(v5, nullptr, 0);
  sub_AEC220(v5, nullptr, 0);
  sub_AEA040((__int64)v5);
  v4 = *(_QWORD *)(a1 + 136);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 56) + 21LL) & 2) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 104) + 312LL) )
    {
      sub_FC70B0((__int64)v5, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 939);
      sub_AEC220(
        v5,
        *(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 104LL) + 304LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 104LL) + 312LL));
      sub_AEA040((__int64)v5);
    }
  }
}
