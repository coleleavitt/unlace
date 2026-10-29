char __fastcall sub_7805A0(__int64 a1)
{
  char result; // al
  unsigned int v2; // edx
  __int64 v3; // rbp
  unsigned int v4; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi

  if ( (unsigned int)sub_77F620(a1) == 1 )
    return 1;
  v2 = sub_77F620(a1);
  result = 0;
  if ( v2 > 1 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    v4 = sub_77F620(a1);
    v5 = (_QWORD *)(v3 + 8);
    v6 = 8LL * v4;
    v7 = (_QWORD *)(v3 + v6);
    v8 = v6 - 8;
    v9 = (v6 - 8) >> 5;
    v10 = v8 >> 3;
    if ( v9 > 0 )
    {
      while ( (((*(_BYTE *)(*v5 + 97LL) & 6) - 2) & 0xFC) == 0 || *(_QWORD *)(*v5 + 88LL) > 7u )
      {
        v11 = v5[1];
        if ( (((*(_BYTE *)(v11 + 97) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(v11 + 88) <= 7u )
          return v7 == ++v5;
        v12 = v5[2];
        if ( (((*(_BYTE *)(v12 + 97) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(v12 + 88) <= 7u )
        {
          v5 += 2;
          return v7 == v5;
        }
        v13 = v5[3];
        if ( (((*(_BYTE *)(v13 + 97) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(v13 + 88) <= 7u )
        {
          v5 += 3;
          return v7 == v5;
        }
        v5 += 4;
        if ( v5 == (_QWORD *)(v3 + 32 * v9 + 8) )
        {
          v10 = v7 - v5;
          goto LABEL_12;
        }
      }
      return v7 == v5;
    }
LABEL_12:
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
          return 1;
        goto LABEL_15;
      }
      if ( (((*(_BYTE *)(*v5 + 97LL) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(*v5 + 88LL) <= 7u )
        return v7 == v5;
      ++v5;
    }
    if ( (((*(_BYTE *)(*v5 + 97LL) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(*v5 + 88LL) <= 7u )
      return v7 == v5;
    ++v5;
LABEL_15:
    if ( (((*(_BYTE *)(*v5 + 97LL) & 6) - 2) & 0xFC) != 0 && *(_QWORD *)(*v5 + 88LL) <= 7u )
      return v7 == v5;
    return 1;
  }
  return result;
}

