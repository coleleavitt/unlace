__int64 __fastcall sub_24F8F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 v4; // rdx
  unsigned int tinfo_property; // [rsp+Ch] [rbp-2Ch]
  __int64 v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 > 0x45 || (*((_BYTE *)&off_4B3CC0 + 16 * (int)v2 + 11) & 0x10) == 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( (*((_BYTE *)&off_4B3CC0 + 16 * (int)v2 + 11) & 8) != 0 || v2 != 58 && v2 - 1 > 0x2C || v2 == 16 )
    return get_tinfo_property(*(_QWORD *)(v4 + 48), 3);
  sub_23D560(v6, a2, v4 + 48, *(_QWORD *)(a1 + 32) + 48LL, 0);
  tinfo_property = get_tinfo_property(v6[0], 3);
  clear_tinfo_t(v6);
  return tinfo_property;
}
