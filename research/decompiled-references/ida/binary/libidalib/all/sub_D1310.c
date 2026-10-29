void __fastcall sub_D1310(__int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rdi

  if ( *(_BYTE *)(a1 + 180) )
  {
    v1 = xmmword_252458;
    v2 = qword_252758;
    if ( qword_252758 )
    {
      *(_QWORD *)qword_252758 = qword_252450;
      v2[2] = v1;
      sub_CDCF0((__int64)v2, 24);
    }
    else
    {
      sub_9E1E0();
    }
  }
}

