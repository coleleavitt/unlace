__int64 __fastcall sub_3236F0(__int64 a1, const char *a2)
{
  __int64 ph; // rbp

  if ( (_DWORD)a1 == -1 )
  {
    ph = get_ph(a1, a2);
    (*(void (__fastcall **)(const char *, __int64, bool))(*(_QWORD *)a2 + 16LL))(
      a2,
      11,
      (*(_WORD *)(ph + 8) & 0x2002) != 0);
    (*(void (__fastcall **)(const char *, __int64, bool))(*(_QWORD *)a2 + 16LL))(
      a2,
      12,
      (*(_BYTE *)(ph + 9) & 0x20) != 0);
  }
  return 1;
}
