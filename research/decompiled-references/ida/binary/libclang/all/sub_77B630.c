__int64 __fastcall sub_77B630(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rcx

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 || (a3 = 0, (((*(_BYTE *)(a1 + 97) & 6) - 2) & 0xFC) != 0) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 && (v3 & 4) != 0 && (v5 = v3 & 0xFFFFFFFFFFFFFFF8LL, (v3 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      a3 = *(_BYTE *)(v5 + 8) & 1;
      if ( (*(_BYTE *)(v5 + 8) & 1) == 0 )
        LOBYTE(a3) = *(_QWORD *)(v5 + 8) != 0;
    }
    else
    {
      LOBYTE(a3) = v3 > 7;
    }
  }
  return a3;
}

