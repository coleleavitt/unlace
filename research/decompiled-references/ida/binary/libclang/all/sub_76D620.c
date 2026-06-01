int __fastcall sub_76D620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 i; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v3 = sub_7A0650(a1 + 64, a3);
  *(_QWORD *)(a2 + 120) = v3;
  for ( i = v3; i; i = *(_QWORD *)(v6 + 8) )
  {
    v5 = i;
    v6 = i & 0xFFFFFFFFFFFFFFF8LL;
    v7 = (v5 >> 2) & 1;
    if ( !(_DWORD)v7 )
    {
      LODWORD(v7) = (*(_BYTE *)(v6 + 30) & 0x2A) != 0;
      return v7;
    }
    if ( !v6 )
      BUG();
    if ( (*(_BYTE *)(*(_QWORD *)v6 + 30LL) & 0x2A) != 0 )
      return v7;
  }
  LODWORD(v7) = 0;
  return v7;
}

