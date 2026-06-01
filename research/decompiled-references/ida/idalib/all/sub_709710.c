void __fastcall sub_709710(_QWORD **a1, __int64 a2)
{
  void (__fastcall *v2)(__int64, unsigned __int64); // rax
  char v3; // al

  if ( a2 && (*(_BYTE *)(a2 + 8) & 0x7F) == 0x3B && a2 != 64 )
  {
    v2 = (void (__fastcall *)(__int64, unsigned __int64))(*a1)[20];
    if ( v2 == sub_709650 )
    {
      if ( *(char *)(a2 - 36) >= 0 )
      {
        v3 = *(_BYTE *)(a2 + 9) >> 5;
        if ( (((v3 + 6) & 7u) <= 1 || !v3) && (*(_BYTE *)(a2 - 36) & 0x7Fu) - 59 <= 2 )
          sub_709540(a1[2], a2 - 64);
      }
    }
    else
    {
      v2((__int64)a1, a2 - 64);
    }
  }
}
