__int64 __fastcall sub_995800(unsigned __int64 a1, _BYTE *a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int64 v4; // rbx
  __int16 v5; // ax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax

  if ( a2 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v2 = sub_BFB9F0(a1);
          v3 = *(_WORD *)v2 & 0x1FF;
          if ( v3 != 60 )
            break;
          a1 = *(_QWORD *)(v2 + 16);
        }
        if ( v3 != 48 )
          break;
        v6 = *(_QWORD *)(v2 + 16);
        if ( (v6 & 4) != 0 )
          a1 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        else
          a1 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        *a2 = 1;
      }
      v7 = sub_995780(v2);
      a1 = v7;
    }
    while ( v2 != v7 );
    return *(_QWORD *)(v7 + 8);
  }
  else
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = sub_BFB9F0(a1);
          v5 = *(_WORD *)v4 & 0x1FF;
          if ( v5 != 60 )
            break;
          a1 = *(_QWORD *)(v4 + 16);
        }
        if ( v5 != 48 )
          break;
        a1 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
          a1 = *(_QWORD *)(a1 + 40);
      }
      v9 = sub_995780(v4);
      a1 = v9;
    }
    while ( v4 != v9 );
    return *(_QWORD *)(v9 + 8);
  }
}
