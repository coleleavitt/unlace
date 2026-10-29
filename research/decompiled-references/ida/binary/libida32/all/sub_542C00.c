__int64 __fastcall sub_542C00(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = a1[31];
  if ( !*(_BYTE *)(v1 + 102) && (*(_BYTE *)(v1 + 100) & 0xEF) == 0xD )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 36) |= 0x800u;
    (*(void (__fastcall **)(__int64 *, char *, __int64))(v2 + 136))(a1, "ends", 0xFFFFFFFFLL);
  }
  (*(void (__fastcall **)(__int64 *, const char *, _QWORD))(*a1 + 192))(a1, &byte_22CD811, 0);
  return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 136))(a1, &byte_22CD811, 0xFFFFFFFFLL);
}

