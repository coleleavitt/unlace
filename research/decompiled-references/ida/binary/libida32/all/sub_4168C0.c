__int64 __fastcall sub_4168C0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned int v6; // r14d
  int v7; // r15d
  unsigned int v8; // ebp

  if ( (sub_3B9AA0(a1, a2, 4) & 0x600) == 0 )
  {
    v5 = sub_4EE820(a1 + 1552, a2);
    if ( v5 )
    {
      v6 = 2 << *(_BYTE *)(v5 + 23);
      v7 = v6 - 1;
      if ( a3 != -1 )
        goto LABEL_7;
      a3 = a2 + 1;
      if ( v6 <= 1 )
        goto LABEL_2;
LABEL_8:
      v8 = a3 - a2;
      do
      {
        if ( (v7 & a3) == 0 )
          break;
        if ( (sub_3B9AA0(a1, a3, 4) & 0x600) != 0 )
          break;
        ++v8;
        ++a3;
      }
      while ( v8 < v6 );
      goto LABEL_2;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 0x2000) != 0 )
    {
      v7 = 7;
      v6 = 8;
      if ( a3 == -1 )
        goto LABEL_17;
    }
    else
    {
      v6 = 2 << ((*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 2) != 0);
      v7 = v6 - 1;
      if ( a3 == -1 )
      {
LABEL_17:
        a3 = a2 + 1;
        goto LABEL_8;
      }
    }
LABEL_7:
    if ( a3 - a2 >= v6 )
      return a3;
    goto LABEL_8;
  }
LABEL_2:
  if ( a3 == -1 )
    return a2 + 1;
  return a3;
}

