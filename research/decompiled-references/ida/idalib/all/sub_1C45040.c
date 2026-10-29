void __fastcall sub_1C45040(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4, double a5)
{
  __int16 v5; // ax

  if ( a2 )
  {
    v5 = *(_WORD *)a2 & 0x1FF;
    if ( v5 == 2 )
    {
      a2 = *(_QWORD *)(a2 + 16);
      if ( !a2 )
        return;
      v5 = *(_WORD *)a2 & 0x1FF;
    }
    if ( ((v5 + 509) & 0x1FFu) <= 0x7E )
      sub_1C43FC0(a1, a2, a3 | 0x100000000LL, a4, a5);
  }
}
