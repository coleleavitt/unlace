__int64 __fastcall sub_1EACB0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char tinfo_property; // al
  int v4; // edx
  int v5; // ecx

  if ( *(int *)(a1 + 88) <= 0 || (result = lexcompare_tinfo(*(_QWORD *)(a1 + 80), *a2, 0), (_DWORD)result) )
  {
    copy_tinfo_t(a1 + 80, a2);
    tinfo_property = get_tinfo_property(*a2, 2);
    v4 = *(_DWORD *)(a1 + 24);
    v5 = v4;
    BYTE1(v4) |= 8u;
    BYTE1(v5) &= ~8u;
    if ( (tinfo_property & 0xF) != 9 )
      v4 = v5;
    *(_DWORD *)(a1 + 24) = v4;
    result = get_tinfo_size(0, *a2, 0);
    *(_DWORD *)(a1 + 24) &= ~2u;
    *(_DWORD *)(a1 + 88) = result;
  }
  return result;
}
