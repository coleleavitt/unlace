char __fastcall sub_77E5E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rax

  LOBYTE(v1) = 0;
  if ( (*(_WORD *)(a1 + 30) & 0x180) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 152);
    if ( v2 && (v2 & 6) == 0 && (v3 = v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v3 + 28) & 0x7F) == 0x45 )
    {
      LOBYTE(v1) = (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 85) & 0x10) != 0;
    }
    else
    {
      v1 = (*(__int64 *)(a1 + 56) >> 2) & 1;
      if ( ((*(__int64 *)(a1 + 56) >> 2) & 1) != 0 )
        LOBYTE(v1) = *(_QWORD *)((*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 40) != 0;
    }
  }
  return v1;
}

