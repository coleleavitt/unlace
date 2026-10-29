char __fastcall sub_99A1E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2);
  if ( v2 )
  {
    v3 = sub_999800(a1, a2);
    v4 = v2 + 16;
    if ( (*(_BYTE *)(v2 + 36) & 1) != 0
      || *(_DWORD *)(v2 + 32) != 1
      || (*(_BYTE *)(v3 + 20) & 1) != 0
      || *(_DWORD *)(v3 + 16) != 1 )
    {
      LOBYTE(v3) = sub_1848D40(qword_1C7F2C0, v4, v3);
    }
    else if ( (*(_BYTE *)(v2 + 20) & 1) != 0 || (*(_BYTE *)(v3 + 4) & 1) != 0 )
    {
      LODWORD(v3) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v4, v3) >> 31;
    }
    else
    {
      LOBYTE(v3) = *(_DWORD *)(v2 + 16) < *(_DWORD *)v3;
    }
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  return v3;
}

