bool __fastcall sub_2112DA0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax

  if ( *(_QWORD *)a2 )
    return *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (*(_BYTE *)(a2 + 9) & 0x70) != 0x20 || (*(_BYTE *)(a2 + 8) & 0x40) != 0 )
    BUG();
  v4 = sub_210D820(*(_QWORD *)(a2 + 24));
  *(_QWORD *)a2 = v4;
  return *(_QWORD *)(a3 + 8) == v4[1];
}
