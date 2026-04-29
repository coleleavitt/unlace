__int64 __fastcall sub_320770(__int64 a1, __int64 a2, _QWORD *a3)
{
  int tinfo_property; // esi
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  if ( (*a3 & 0x100) != 0 )
  {
    tinfo_property = get_tinfo_property(*a3, 7);
    if ( tinfo_property )
    {
      if ( (unsigned __int8)sub_5F710(*(__int64 **)(a1 + 16), tinfo_property) )
      {
        v7 = *(_QWORD *)(a1 + 16);
        v8[0] = off_4B6D40;
        v8[1] = 6;
        v8[2] = v7;
        ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD, __int64))visit_subtypes)(v8, 0, a3, 0, 0, v6);
      }
    }
  }
  return 0;
}
