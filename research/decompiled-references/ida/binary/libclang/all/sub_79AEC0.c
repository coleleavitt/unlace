bool __fastcall sub_79AEC0(__int64 a1)
{
  __int64 v2; // rdi

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(sub_793320(a1) + 88) + 18200LL);
    if ( v2 )
      return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 120LL))(v2, a1) == 0;
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 18200LL);
    if ( v2 )
      return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 120LL))(v2, a1) == 0;
  }
  return 0;
}

