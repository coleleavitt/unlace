__int64 __fastcall sub_1DB8140(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *i; // rbx
  _QWORD *v4; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = sub_B8BF90(a1);
      for ( i = (_QWORD *)v2; v2; i = (_QWORD *)v2 )
      {
        if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0x47 )
          break;
        if ( (*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          break;
        a1 = *(_QWORD *)((*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) + 48);
        v2 = sub_B8BF90(a1);
      }
      if ( !sub_B77AF0(a1) )
        break;
      a1 = *(_QWORD *)(sub_B77AF0(a1) + 48);
    }
    v4 = sub_B77970(a1);
    if ( !v4 )
      break;
    a1 = (__int64)v4;
  }
  return a1;
}
