__int64 __fastcall sub_80C690(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax
  int v4; // eax
  __int16 v5; // dx

  while ( 1 )
  {
    v1 = a1;
    a1 = *(_QWORD *)(a1 + 16);
    if ( a1 )
    {
      while ( 1 )
      {
        v3 = *(_WORD *)a1 & 0x1FF;
        if ( v3 == 49 )
        {
          v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v2 = *(_QWORD *)(v2 + 40);
        }
        else if ( v3 == 117 )
        {
          v2 = *(_QWORD *)(a1 + 24);
        }
        else
        {
          if ( v3 <= 0x3Cu )
            break;
          if ( v3 > 0x3Eu )
          {
            if ( v3 != 104 || *(_DWORD *)(a1 + 16) != 1 )
              break;
            v2 = *(_QWORD *)(a1 + 48);
          }
          else
          {
            v2 = *(_QWORD *)(a1 + 16);
          }
        }
        if ( a1 == v2 )
          break;
        a1 = v2;
      }
    }
    v4 = (*(_WORD *)(v1 + 2) >> 3) & 0x7F;
    if ( v4 == 20 )
      return *(_QWORD *)(a1 + 16);
    v5 = *(_WORD *)a1 & 0x1FF;
    if ( v4 == 19 && v5 == 93 )
      return sub_8C3180();
    if ( v5 != 80 )
      return 0;
  }
}

