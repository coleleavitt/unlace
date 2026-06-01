bool __fastcall sub_B51380(__int64 a1)
{
  bool result; // al
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  result = 0;
  if ( (*(_WORD *)(a1 + 30) & 0x180) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 152);
    if ( v2 && (v2 & 6) == 0 && (v3 = v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v3 + 28) & 0x7F) == 0x47 )
    {
      return (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 85) & 0x10) != 0;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 56);
      result = 0;
      if ( (v4 & 4) != 0 )
        return *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 40) != 0;
    }
  }
  return result;
}

