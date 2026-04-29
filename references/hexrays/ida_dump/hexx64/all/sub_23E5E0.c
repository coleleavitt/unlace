__int64 __fastcall sub_23E5E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char tinfo_property; // al
  __int64 v5; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 52 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    tinfo_property = get_tinfo_property(*(_QWORD *)(v3 + 48), 2);
    if ( tinfo_property )
    {
      if ( (unsigned __int8)((tinfo_property & 0xF) - 11) <= 1u )
      {
        v6[0] = 0;
        copy_tinfo_t(v6, a2 + 48);
        sub_255850(a2, v3);
        v5 = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 48) = v6[0];
        ++*(_DWORD *)(a1 + 64);
        v6[0] = v5;
        clear_tinfo_t(v6);
      }
    }
  }
  return 0;
}
