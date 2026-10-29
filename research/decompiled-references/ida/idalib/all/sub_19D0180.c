__int64 __fastcall sub_19D0180(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx

  if ( !a3 )
    return 0;
  v4 = sub_BFD710(a2);
  v5 = 0;
  if ( (*(_WORD *)v4 & 0x1FF) == 0x47 )
    LOBYTE(v5) = *(_QWORD *)(a3 + 120) == *(_QWORD *)(v4 + 16);
  return v5;
}
