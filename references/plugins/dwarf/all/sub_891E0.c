__int64 __fastcall sub_891E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  int v10; // esi

  v5 = sub_854B0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL) + 168LL), a4);
  if ( v5 == 1 )
  {
    v10 = *(unsigned __int8 *)(v7 + 32);
    if ( (unsigned __int8)(v10 - 80) > 0x1Fu
      && (unsigned __int8)(v10 - 112) > 0x1Fu
      && ((v10 & 0xFD) != 0x90 || (unsigned int)*(_QWORD *)v7 == -1) )
    {
      if ( (debug & 0x400000) != 0 )
        sub_88B80((__int64)"Cannot find IDA register # for DWARF register %d -> %d.\n", v10, -1);
      return 0;
    }
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, v8, v7);
  }
  else
  {
    if ( v5 != 3 )
      return 0;
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64, __int64, __int64))a1)(a1, a2, v8, v7, v6);
  }
}
