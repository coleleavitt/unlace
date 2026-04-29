__int64 __fastcall sub_1EF530(__int64 a1)
{
  __int64 result; // rax
  char tinfo_property; // al
  int v3; // edx
  int v4; // ecx

  if ( *(int *)(a1 + 88) <= 0 || (result = lexcompare_tinfo(), (_DWORD)result) )
  {
    copy_tinfo_t();
    tinfo_property = get_tinfo_property();
    v3 = *(_DWORD *)(a1 + 24);
    v4 = v3;
    BYTE1(v3) |= 8u;
    BYTE1(v4) &= ~8u;
    if ( (tinfo_property & 0xF) != 9 )
      v3 = v4;
    *(_DWORD *)(a1 + 24) = v3;
    result = get_tinfo_size();
    *(_DWORD *)(a1 + 24) &= ~2u;
    *(_DWORD *)(a1 + 88) = result;
  }
  return result;
}
