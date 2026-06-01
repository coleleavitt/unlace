__int64 __fastcall sub_3F24E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 144) )
    return sub_40ACA0();
  v3 = *(_DWORD *)(a2 + 16) & 0x70000;
  switch ( v3 )
  {
    case 0x40000:
      sub_3F1EF0(a1, a2);
      return 0;
    case 0x10000:
      return ((__int64 (__fastcall *)(__int64, __int64))sub_3E4860)(*(_QWORD *)(*(_QWORD *)(v2 + 776) + 56LL), a2);
    case 0x20000:
      return sub_3E47E0(*(_QWORD *)(*(_QWORD *)(v2 + 776) + 56LL), a2);
    default:
      if ( !under_debugger )
        sub_37EA20(51995);
      BUG();
  }
}
