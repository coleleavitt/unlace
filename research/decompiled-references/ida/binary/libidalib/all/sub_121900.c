__int64 __fastcall sub_121900(int a1, __int64 a2)
{
  __int64 ph; // rbp

  if ( a1 == -1 )
  {
    ph = get_ph();
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 11, (*(_WORD *)(ph + 8) & 0x2002) != 0);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 12, (*(_BYTE *)(ph + 9) & 0x20) != 0);
  }
  return 1;
}

