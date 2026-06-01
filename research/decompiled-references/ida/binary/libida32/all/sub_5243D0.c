unsigned __int64 __fastcall sub_5243D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp

  if ( (*(_BYTE *)(a2 + 70) & 0xF) == 0xB )
  {
    v5 = a2;
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 <= 0xFFu )
        return v6 | (unsigned __int8)a3 & 0xC0;
      v5 = sub_51B750((__int64)a1, *(_QWORD *)v5);
      if ( (~*(_BYTE *)(v5 + 68) & 0x70) == 0 )
      {
        if ( *(_QWORD *)v5 <= 0xFFu )
        {
LABEL_12:
          if ( !under_debugger )
            interr(3019);
          BUG();
        }
        v5 = sub_51B750((__int64)a1, *(_QWORD *)v5);
      }
      if ( !v5 )
        goto LABEL_12;
      if ( !sub_524160(v5, *a1, v6, 1) )
        return 0;
      if ( (*(_BYTE *)(v5 + 70) & 0xF) != 0xB )
        return v6 | (unsigned __int8)a3 & 0xC0;
    }
  }
  return a3;
}

