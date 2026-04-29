bool __fastcall sub_2895C0(__int64 a1)
{
  unsigned int v2; // eax
  bool v3; // cc
  _QWORD *v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(a1 + 8);
      v3 = v2 <= 0x3B;
      if ( v2 != 59 )
        break;
LABEL_8:
      a1 = *(_QWORD *)(a1 + 24);
    }
    while ( 1 )
    {
      if ( !v3 )
        return v2 == 65;
      if ( v2 == 51 )
        break;
      if ( v2 != 57 )
        return 0;
      if ( (unsigned int)sub_2894B0(*(_QWORD *)(a1 + 24)) == -1 )
        return 0;
      v4 = *(_QWORD **)(a1 + 32);
      if ( !v4[1] )
        return 0;
      a1 = *v4;
      v2 = *(_DWORD *)(*v4 + 8LL);
      v3 = v2 <= 0x3B;
      if ( v2 == 59 )
        goto LABEL_8;
    }
    v6 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v6 + 8) != 48 )
      return 0;
    v7 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v7 + 8) != 52 )
      return 0;
    a1 = *(_QWORD *)(v7 + 24);
  }
}
