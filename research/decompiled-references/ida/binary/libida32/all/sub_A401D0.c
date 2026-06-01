__int64 __fastcall sub_A401D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  char v4; // dl
  unsigned __int64 v5; // rsi

  while ( 1 )
  {
    v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v3 = *(_QWORD *)v2;
    v4 = *(_BYTE *)(*(_QWORD *)v2 + 16LL);
    if ( v4 == 8 )
      break;
LABEL_4:
    if ( v4 != 40 )
      return 0;
    a2 = *(_QWORD *)(v3 + 32);
  }
  while ( *(_WORD *)(v3 + 18) >> 3 != 72 )
  {
    v5 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFFFFFF0LL;
    v3 = *(_QWORD *)v5;
    v4 = *(_BYTE *)(*(_QWORD *)v5 + 16LL);
    if ( v4 != 8 )
      goto LABEL_4;
  }
  return 1;
}

