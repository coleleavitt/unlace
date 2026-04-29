__int64 __fastcall sub_254CB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  unsigned int tinfo_property; // [rsp+Ch] [rbp-2Ch]
  __int64 v5[5]; // [rsp+10h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 > 0x45 || (*((_BYTE *)&off_4E0320 + 16 * (int)v2 + 11) & 0x10) == 0 )
    return 0;
  if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v2 + 11) & 8) != 0 || v2 != 58 && v2 - 1 > 0x2C || v2 == 16 )
    return get_tinfo_property();
  sub_242920(v5, a2, *(_QWORD *)(a1 + 24) + 48LL, *(_QWORD *)(a1 + 32) + 48LL, 0);
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  return tinfo_property;
}
