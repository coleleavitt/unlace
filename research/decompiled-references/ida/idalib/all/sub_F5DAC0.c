__int64 __fastcall sub_F5DAC0(__int64 a1)
{
  _QWORD *v1; // rdx

  if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
    return *(_QWORD *)(a1 + 48);
  v1 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL) & 4) != 0 )
    return v1[1];
  else
    return *v1;
}
