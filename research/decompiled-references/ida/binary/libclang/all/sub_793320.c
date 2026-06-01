__int64 __fastcall sub_793320(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  if ( (*(_BYTE *)(v1 + 8) & 0x7F) != 0 )
    return ((__int64 (*)(void))((char *)dword_3C915EC + dword_3C915EC[*(_BYTE *)(v1 + 8) & 0x7F]))();
  else
    return v1 - 40;
}

