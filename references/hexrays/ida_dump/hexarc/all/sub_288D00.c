__int64 __fastcall sub_288D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, unsigned __int8 a6)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  char tinfo_property; // al
  int tinfo_size; // eax
  int v15; // eax
  __int64 v16; // r14

  v10 = a5[3];
  if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v10 + 48), 2) & 0xF) - 10) <= 2u )
    return 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v10 + 48), 2);
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  if ( (get_tinfo_property(*(_QWORD *)(v10 + 48), 2) & 0xF) == 9 )
    return 0;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL), 0);
  v15 = sub_27EF40(a1, a3, tinfo_size, a6, 0);
  if ( v15 == 1 )
  {
    if ( (unsigned __int8)sub_2776A0(*(_QWORD *)(a1 + 72), a4 + 48, v10 + 48, (__int64)(a5 + 6), 0) )
      return 0;
  }
  else if ( v15 == 2 )
  {
    return 0;
  }
  v11 = sub_288BF0(a1, a3, (__int64)a5, a5[3] + 48);
  if ( !(_BYTE)v11 )
    return 0;
  v16 = a5[4];
  if ( v16 )
  {
    sub_24E2B0(a5[4]);
    clear_tinfo_t(v16 + 48);
    j__qfree(v16);
  }
  sub_24E4D0(a5, a5[3]);
  if ( a3 )
    sub_23CE40(a3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( (unsigned __int8)sub_27C780(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v11;
}
