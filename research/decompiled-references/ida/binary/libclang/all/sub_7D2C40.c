__int64 __fastcall sub_7D2C40(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // ecx

  if ( a2 )
  {
    v3 = 1;
    if ( a3 < (*(_DWORD *)(a2 + 20) & 0x1FFFFFFFu) && (*(_BYTE *)(a1 + 5) & 8) == 0 )
    {
      v3 = 0;
      v4 = *(_QWORD *)(a2 + 8LL * a3 + 24);
      if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x2D )
      {
        LOBYTE(v5) = sub_B07C80(*(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
        return v5;
      }
    }
  }
  else
  {
    return 1;
  }
  return v3;
}

