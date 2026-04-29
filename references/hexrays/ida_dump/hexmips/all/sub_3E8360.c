__int64 __fastcall sub_3E8360(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16 v4; // dx
  __int64 v5; // rax
  unsigned int v6; // ecx

  v4 = *(_WORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 8) + ((*(_BYTE *)(a1 + 33) & 4) == 0 ? 8LL : 6LL);
  if ( v4 == 203 )
  {
    LOBYTE(a4) = *(_QWORD *)(a1 + 56) == v5;
    return a4;
  }
  else
  {
    v6 = 0;
    if ( (v4 & 0xFFF7) == 0x63 && *(_BYTE *)(a1 + 41) == 1 && !*(_WORD *)(a1 + 46) )
      LOBYTE(v6) = *(_QWORD *)(a1 + 96) == v5;
    return v6;
  }
}
