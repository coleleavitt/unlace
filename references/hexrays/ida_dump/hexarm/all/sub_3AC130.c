__int64 __fastcall sub_3AC130(__int64 *a1, __int64 a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *i; // rbx
  __int64 v8; // r12
  int v9; // eax
  int v10; // eax
  __int64 v12; // rbp
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax

  v5 = *a1;
  v6 = 8 * a1[1];
  for ( i = (_QWORD *)(*a1 + v6 - 8); ; --i )
  {
    if ( i != (_QWORD *)(v5 + v6 - 8) )
      a2 = i[1];
    v8 = *i;
    v9 = *(_DWORD *)(*i + 8LL);
    if ( (unsigned int)(v9 - 53) <= 3 )
      return 2;
    if ( (unsigned int)(v9 - 2) <= 0xD )
      break;
    switch ( v9 )
    {
      case '3':
      case '<':
LABEL_14:
        if ( *(_DWORD *)(*(i - 1) + 8LL) == 52 )
        {
          --i;
        }
        else if ( !a3 )
        {
          return 0;
        }
        goto LABEL_12;
      case ':':
        if ( a2 != *(_QWORD *)(v8 + 24) )
          goto LABEL_31;
        if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 0xA )
          goto LABEL_14;
        v15 = *(_DWORD *)(v8 + 8);
        if ( v15 == 52 )
        {
LABEL_17:
          v12 = *(i - 1);
          v13 = *(_DWORD *)(v12 + 8);
          if ( v13 == 48 )
          {
            while ( (get_tinfo_property(*(_QWORD *)(v12 + 48), 2) & 0xF) == 0xA
                 && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 48LL), 2) & 0xF) == 0xA )
            {
              v14 = *(i - 2);
              --i;
              v8 = v12;
              v13 = *(_DWORD *)(v14 + 8);
              v12 = v14;
              if ( v13 != 48 )
                goto LABEL_23;
            }
            v13 = *(_DWORD *)(v12 + 8);
          }
LABEL_23:
          if ( v13 != 51
            && v13 != 60
            && (v13 != 58 || v8 != *(_QWORD *)(v12 + 24) || (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) != 0xA) )
          {
            return 3;
          }
          --i;
          a2 = v8;
          goto LABEL_12;
        }
        if ( v15 == 58 )
          goto LABEL_31;
        break;
      case '4':
        goto LABEL_17;
    }
    if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 0xB )
      goto LABEL_17;
    v10 = *(_DWORD *)(v8 + 8);
    if ( v10 == 59 )
      goto LABEL_12;
    if ( v10 == 57 )
    {
      if ( (unsigned int)sub_28E0F0(*(_QWORD *)(v8 + 24)) != -1 )
        goto LABEL_12;
      v10 = *(_DWORD *)(v8 + 8);
    }
    if ( v10 != 48 )
    {
      if ( v10 != 58 )
        return 0;
LABEL_31:
      if ( *(_QWORD *)(v8 + 24) != a2 || (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xB )
        return 0;
    }
LABEL_12:
    v5 = *a1;
    v6 = 8 * a1[1];
  }
  if ( *(_QWORD *)(v8 + 32) == a2 )
    return 0;
  return (unsigned int)(v9 != 2) + 1;
}
