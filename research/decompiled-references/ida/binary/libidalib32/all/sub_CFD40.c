void __fastcall sub_CFD40(__int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rdi

  if ( *(_BYTE *)(a1 + 180) )
  {
    v1 = xmmword_2512E8;
    v2 = qword_2515B0;
    if ( qword_2515B0 )
    {
      *(_QWORD *)qword_2515B0 = qword_2512E0;
      v2[2] = v1;
      sub_CC780((__int64)v2, 24);
    }
    else
    {
      sub_9E0A0();
    }
  }
}

