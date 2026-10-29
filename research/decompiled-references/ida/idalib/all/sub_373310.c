__int64 __fastcall sub_373310(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(qword_2CCB598 + 624);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 0x40) != 0 )
      callui();
    if ( *(_QWORD *)(a1 + 48) > 1u )
      callui();
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
