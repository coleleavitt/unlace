__int64 __fastcall sub_A447C0(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, int); // rax

  v2 = *(_QWORD *)(a1 + 2320);
  if ( (*(_BYTE *)(v2 + 47) & 0x20) != 0 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, int))(**(_QWORD **)(a1 + 17448) + 704LL);
    if ( v3 == sub_A321B0 )
      return (unsigned int)(a2 + 25);
  }
  else
  {
    if ( (*(_BYTE *)(v2 + 60) & 0x10) == 0 )
      return (unsigned int)(a2 + 25);
    v3 = *(__int64 (__fastcall **)(__int64, int))(**(_QWORD **)(a1 + 17448) + 712LL);
    if ( v3 == sub_A321C0 )
      return (unsigned int)(a2 + 25);
  }
  return ((__int64 (*)(void))v3)();
}

