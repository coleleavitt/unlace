bool __fastcall sub_CAE920(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  return ((*(_BYTE *)(v1 + 8) + 70) & 0x7Fu) <= 3;
}
