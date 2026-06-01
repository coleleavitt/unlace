__int64 __fastcall sub_BD6820(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int16 v3; // ax
  int v4; // eax
  __int16 v5; // cx

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    if ( v1 )
    {
      while ( 1 )
      {
        v3 = *(_WORD *)v1 & 0x1FF;
        if ( v3 == 48 )
        {
          v2 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
            v2 = *(_QWORD *)(v2 + 40);
        }
        else if ( v3 == 116 )
        {
          v2 = *(_QWORD *)(v1 + 24);
        }
        else if ( ((v3 + 452) & 0x1FFu) <= 1 )
        {
          v2 = *(_QWORD *)(v1 + 16);
        }
        else
        {
          if ( v3 != 103 || *(_DWORD *)(v1 + 16) != 1 )
            break;
          v2 = *(_QWORD *)(v1 + 48);
        }
        if ( v1 == v2 )
          break;
        v1 = v2;
      }
    }
    v4 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
    if ( v4 == 20 )
      return *(_QWORD *)(v1 + 16);
    a1 = v1;
    v5 = *(_WORD *)v1 & 0x1FF;
    if ( v4 == 19 && v5 == 92 )
      return sub_C709A0(v1);
    if ( v5 != 79 )
      return 0;
  }
}

