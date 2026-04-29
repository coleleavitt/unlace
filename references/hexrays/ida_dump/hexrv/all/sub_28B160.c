bool __fastcall sub_28B160(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  bool result; // al
  int v8; // r15d
  int v9; // r14d
  int v10; // r12d
  int v11; // r13d
  int v12; // r12d
  char tinfo_property; // al
  int v14; // edx
  char v15; // bl
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *a2;
  v17[1] = __readfsqword(0x28u);
  v16 = 41;
  if ( !(unsigned int)lexcompare_tinfo(v4, 41, 0) )
  {
    v6 = *a3;
    v17[0] = 25;
    if ( !(unsigned int)lexcompare_tinfo(v6, 25, 0) )
    {
      clear_tinfo_t(v17);
      clear_tinfo_t(&v16);
      return 0;
    }
    clear_tinfo_t(v17);
  }
  clear_tinfo_t(&v16);
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL) + 80LL);
  v9 = v8;
  v10 = v8 - 1;
  v11 = -v8;
  if ( (get_tinfo_property(*a2, 2) & 0xF) != 0xB )
    v9 = v11 & (get_tinfo_size(0, *a2, 0) + v10);
  v12 = v11 & (get_tinfo_size(0, *a3, 0) + v10);
  if ( v9 > v12 )
    return 0;
  if ( v9 <= v8 && v8 < v12 )
  {
    if ( (get_tinfo_property(*a2, 2) & 0x3F) != 9 )
      return 0;
    v17[0] = 25;
    if ( v12 != get_tinfo_size(0, 25, 0) )
    {
      clear_tinfo_t(v17);
      return 0;
    }
    clear_tinfo_t(v17);
  }
  tinfo_property = get_tinfo_property(*a3, 2);
  if ( (tinfo_property & 0xE) != 0 || (v14 = tinfo_property & 0x30, result = 1, !v14) )
  {
    v15 = get_tinfo_property(*a2, 2);
    return ((get_tinfo_property(*a3, 2) & 0xF) == 9) == ((v15 & 0xF) == 9);
  }
  return result;
}
