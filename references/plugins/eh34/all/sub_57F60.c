__int64 __fastcall sub_57F60(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, const char *); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  *a2 = -2;
  *a3 = -1;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, const char *))get_hexdsp(a1, a2);
  if ( !hexdsp(347, a1, "__eh34_try_continuation") )
    return 0;
  v6 = *(_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)(v6 + 32) )
    return 0;
  v7 = *(_QWORD *)(v6 + 24);
  if ( (*(_QWORD *)v7 & 0xFFFFFFFF000000FFLL) != 0x400000002LL || *(_BYTE *)(v7 + 24) != 20 )
    return 0;
  *a2 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(_QWORD *)(v8 + 32);
  if ( v9 != 2 )
  {
    if ( v9 > 1 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      if ( (*(_QWORD *)(v10 + 80) & 0xFFFFFFFF000000FFLL) == 0x80000000ALL )
      {
        v11 = *(_QWORD *)(v10 + 88);
        if ( *(_BYTE *)v11 == 6 )
        {
          *a3 = *(_QWORD *)(v11 + 8);
          return 1;
        }
      }
    }
    return 0;
  }
  return 1;
}
