__int64 __fastcall sub_983B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // ebp

  if ( a2 )
  {
    v4 = a2;
    do
    {
      *(_BYTE *)(v4 + 44) |= 2u;
      v4 = *(_QWORD *)(v4 + 80);
    }
    while ( v4 );
    if ( (*(_BYTE *)(a3 + 44) & 2) != 0 )
    {
      v5 = a3;
LABEL_8:
      v6 = a2;
      do
      {
        *(_BYTE *)(v6 + 44) &= ~2u;
        v6 = *(_QWORD *)(v6 + 80);
      }
      while ( v6 );
      goto LABEL_10;
    }
  }
  else if ( (*(_BYTE *)(a3 + 44) & 2) != 0 )
  {
    v5 = a3;
    goto LABEL_10;
  }
  v5 = a3;
  do
    v5 = *(_QWORD *)(v5 + 80);
  while ( (*(_BYTE *)(v5 + 44) & 2) == 0 );
  if ( a2 )
    goto LABEL_8;
LABEL_10:
  v7 = sub_983990(a1, a2, v5);
  return v7 & (unsigned int)sub_983990(a1, a3, v5);
}

