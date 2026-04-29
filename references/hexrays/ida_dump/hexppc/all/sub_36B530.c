unsigned __int8 __fastcall sub_36B530(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned __int8 result; // al
  __int64 v6; // rdi
  unsigned __int8 v8; // al
  char tinfo_property; // al
  unsigned __int8 v11; // [rsp+Ch] [rbp-2Ch]
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 24) > 1u )
    return 0;
  v6 = *(_QWORD *)(a2 + 64);
  if ( a4 )
  {
    v12[0] = 7;
    if ( (unsigned int)lexcompare_tinfo(v6, 7, 0) )
    {
      v8 = 0;
    }
    else
    {
      v8 = a4;
      if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
        v8 = sub_36B4A0(a1, a3);
    }
    v11 = v8;
    clear_tinfo_t(v12);
    return v11;
  }
  else
  {
    tinfo_property = get_tinfo_property(v6, 2);
    if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
      return 0;
    result = 1;
    if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
      return sub_36B4A0(a1, a3);
  }
  return result;
}
