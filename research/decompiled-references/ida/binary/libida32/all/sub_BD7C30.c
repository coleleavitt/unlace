__int64 __fastcall sub_BD7C30(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int16 v3; // ax

  while ( 1 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    if ( v3 == 79 )
    {
      v2 = sub_BD6670(a1);
      goto LABEL_3;
    }
    if ( ((v3 + 452) & 0x1FFu) <= 1 )
    {
      v2 = *(_QWORD *)(a1 + 16);
      goto LABEL_3;
    }
    if ( v3 != 48 )
      break;
    v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
      goto LABEL_3;
    v2 = *(_QWORD *)(v2 + 40);
    if ( v2 == a1 )
      return a1;
LABEL_4:
    a1 = v2;
  }
  if ( v3 == 116 )
  {
    v2 = *(_QWORD *)(a1 + 24);
LABEL_3:
    if ( v2 == a1 )
      return a1;
    goto LABEL_4;
  }
  return a1;
}

