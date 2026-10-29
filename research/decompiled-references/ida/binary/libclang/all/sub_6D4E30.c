__int64 __fastcall sub_6D4E30(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, int); // rax

  v2 = *(_QWORD *)(a1 + 2160);
  if ( (*(_BYTE *)(v2 + 47) & 0x20) != 0 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, int))(**(_QWORD **)(a1 + 17288) + 704LL);
    if ( v3 == sub_6A6830 )
      return (unsigned int)(a2 + 22);
  }
  else
  {
    if ( (*(_BYTE *)(v2 + 60) & 0x10) == 0 )
      return (unsigned int)(a2 + 22);
    v3 = *(__int64 (__fastcall **)(__int64, int))(**(_QWORD **)(a1 + 17288) + 712LL);
    if ( v3 == sub_6A6840 )
      return (unsigned int)(a2 + 22);
  }
  return ((__int64 (*)(void))v3)();
}

