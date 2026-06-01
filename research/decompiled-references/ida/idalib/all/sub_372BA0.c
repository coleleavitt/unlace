__int64 __fastcall sub_372BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = *(_QWORD *)(qword_2CCB598 + 624);
  v3 = 0;
  if ( v2 )
  {
    v3 = 1;
    if ( (*(_BYTE *)(v2 + 32) & 0x40) != 0 )
      callui();
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
