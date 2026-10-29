__int64 __fastcall sub_34A8A0(__int64 a1, const char *a2)
{
  void (__fastcall *v3)(const char *, __int64, bool); // rbp
  __int64 ph; // rax

  if ( (_DWORD)a1 == -1 )
  {
    v3 = *(void (__fastcall **)(const char *, __int64, bool))(*(_QWORD *)a2 + 16LL);
    ph = get_ph(a1, a2);
    v3(a2, 1, (*(_BYTE *)(ph + 12) & 0x10) != 0);
  }
  return 1;
}
