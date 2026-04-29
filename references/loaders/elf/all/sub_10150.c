__int64 __fastcall sub_10150(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == 1879048195 )
  {
    if ( !*(_BYTE *)(a1 + 348) )
    {
      sub_C090(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
      *(_BYTE *)(a1 + 348) = 1;
    }
    return 0;
  }
  if ( v3 > 0x70000003 )
  {
    if ( v3 - 1879048196 <= 1 )
      return 0;
  }
  else
  {
    v4 = 1;
    if ( v3 == 1879048193 )
      return v4;
    if ( v3 == 1879048194 )
      return 0;
  }
  if ( (debug & 0x10) != 0 )
  {
    sub_E950((__int64)"Unsupported or unknown section type 0x%X, skipped\n", v3);
    return a3;
  }
  else
  {
    return a3;
  }
}
