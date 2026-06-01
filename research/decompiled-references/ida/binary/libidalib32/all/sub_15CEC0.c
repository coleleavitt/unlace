char __fastcall sub_15CEC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char result; // al
  __int64 v9; // rdi

  result = sub_153BD0(*(_QWORD *)(a1 + 96));
  if ( result || a5 )
  {
    result = sub_120040(a3, a2, *(_QWORD *)(a1 + 96));
    v9 = *(_QWORD *)(a1 + 96);
    if ( result )
    {
      if ( *(_DWORD *)(v9 + 908) != 10 || (*(_BYTE *)(v9 + 912) & 0x20) == 0 )
        return sub_19B690(2, 0, 0);
    }
    else
    {
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 600LL))(v9, a2, a3, a4);
    }
  }
  return result;
}

