char __fastcall sub_ECEB40(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 i; // rax
  __int64 v4; // rax
  char v5; // dl
  __int64 *v7; // rdx
  __int64 v8; // rax
  char v9; // dl

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v2 - 40 > 6 )
  {
    if ( (unsigned int)v2 - 64 > 2 )
    {
      if ( v2 == 33 )
        return *(_QWORD *)(a2 + 72) != 0;
    }
    else
    {
      v7 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
        v8 = v7[1];
      else
        v8 = *v7;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        v9 = *(_BYTE *)(v4 + 16);
        if ( (unsigned __int8)(v9 - 2) > 4u )
          break;
        if ( v9 == 6 && *(_QWORD *)(v4 + 40) )
        {
LABEL_8:
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 8) & 3LL | v4;
          return 1;
        }
        v8 = *(_QWORD *)(v4 + 32);
      }
    }
    return 0;
  }
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(v4 + 32) )
  {
    v4 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(_BYTE *)(v4 + 16);
    if ( (unsigned __int8)(v5 - 2) > 4u )
      break;
    if ( v5 == 6 && *(_QWORD *)(v4 + 40) )
      goto LABEL_8;
  }
  return sub_B4F900(a2) != 0;
}

