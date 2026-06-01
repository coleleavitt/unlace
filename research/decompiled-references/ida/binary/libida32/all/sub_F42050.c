__int64 __fastcall sub_F42050(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  while ( (*(_BYTE *)(a1 + 17) & 8) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16);
    if ( (_BYTE)v3 == 42 )
      goto LABEL_2;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      v4 = sub_F3F130(a1);
      if ( v4 )
      {
        a1 = v4;
        goto LABEL_2;
      }
      v3 = *(unsigned __int8 *)(a1 + 16);
    }
    if ( (unsigned int)(unsigned __int8)v3 - 43 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
        goto LABEL_18;
      v5 = sub_F3F130(a1);
      if ( !v5 )
      {
        v3 = *(unsigned __int8 *)(a1 + 16);
LABEL_18:
        if ( (unsigned __int8)(v3 - 2) > 4u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
            return 0;
          v3 = sub_F3F130(a1);
          a1 = v3;
          if ( !v3 )
            return 0;
          LOBYTE(v3) = *(_BYTE *)(v3 + 16);
        }
        if ( (_BYTE)v3 == 6 && *(_QWORD *)(a1 + 40) )
          return 1;
LABEL_2:
        v2 = *(_QWORD *)(a1 + 32);
        goto LABEL_3;
      }
      a1 = v5;
    }
    while ( 1 )
    {
      v2 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(a1 + 18) & 0x10) == 0 )
        break;
      a1 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(a1 + 16) - 43 > 1 )
        a1 = sub_F3F130(a1);
    }
LABEL_3:
    a1 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
  }
  return 0;
}

