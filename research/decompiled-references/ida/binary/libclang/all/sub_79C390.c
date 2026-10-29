bool __fastcall sub_79C390(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // rax
  _BOOL4 v3; // eax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx

  v1 = a1;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0x16 )
  {
    while ( (*(_BYTE *)(v1 + 9) & 0x20) != 0 )
    {
      v2 = *(_QWORD *)(v1 - 32);
      v1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      v3 = ((v2 >> 2) & 1) == 0;
      if ( v3 )
      {
        if ( (*(_BYTE *)(v1 + 8) & 0x7F) != 0x16 )
          goto LABEL_7;
      }
      else
      {
        v1 = *(_QWORD *)v1;
        if ( (*(_BYTE *)(v1 + 8) & 0x7F) != 0x16 )
          return v3;
      }
    }
    v4 = *(_QWORD *)(sub_79A2E0(v1) + 16);
    v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v4 & 4) != 0 )
      v5 = (_QWORD *)*v5;
    v6 = sub_79C2A0((__int64)v5);
    LOBYTE(v3) = 0;
    if ( (*(_BYTE *)(v6 + 8) & 0x7F) == 0 )
    {
      v8 = *(_QWORD *)(v7 - 8);
      if ( (v8 & 7) == 0 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 16);
          if ( *(_DWORD *)v10 == 3 )
          {
            if ( *(_WORD *)(v10 + 16) != 29811 || (v3 = 0, *(_BYTE *)(v10 + 18) != 100) )
              v3 = 1;
            LOBYTE(v3) = !v3;
          }
        }
      }
    }
  }
  else
  {
LABEL_7:
    LOBYTE(v3) = 0;
  }
  return v3;
}

