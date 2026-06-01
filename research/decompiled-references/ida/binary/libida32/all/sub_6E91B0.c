char __fastcall sub_6E91B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // rdi
  void (__fastcall *v5)(__int64, unsigned __int64); // rax
  void (__fastcall *v6)(_QWORD **, __int64); // r9

  v4 = *(_QWORD ***)(a1 + 24);
  LOBYTE(v5) = a3;
  v6 = (void (__fastcall *)(_QWORD **, __int64))(*v4)[17];
  if ( v6 == sub_6E9130 )
  {
    if ( a2 )
    {
      LOBYTE(v5) = *(_BYTE *)(a2 + 8) & 0x7F;
      if ( (_BYTE)v5 == 59 && a2 != 64 )
      {
        v5 = (void (__fastcall *)(__int64, unsigned __int64))(*v4)[20];
        if ( v5 == sub_6E9070 )
        {
          if ( *(char *)(a2 - 36) >= 0 )
          {
            LOBYTE(v5) = *(_BYTE *)(a2 + 9) >> 5;
            if ( (((_BYTE)v5 + 6) & 7u) <= 1 || !(_BYTE)v5 )
            {
              LODWORD(v5) = (*(_BYTE *)(a2 - 36) & 0x7F) - 59;
              if ( (unsigned int)v5 <= 2 )
                LOBYTE(v5) = sub_6E8F60(v4[2], a2 - 64);
            }
          }
        }
        else
        {
          LOBYTE(v5) = ((__int64 (__fastcall *)(_QWORD **, __int64))v5)(v4, a2 - 64);
        }
      }
    }
  }
  else
  {
    LOBYTE(v5) = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64))v6)(v4, a2, a3, a4);
  }
  return (char)v5;
}

