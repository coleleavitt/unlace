__int64 *__fastcall sub_26C3E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v9; // rax
  char tinfo_property; // al
  __int64 v11; // rax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_DWORD *)(v3 + 8) - 1;
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    v6 = 0;
    v7 = 8LL * (unsigned int)v4;
    while ( 1 )
    {
      switch ( *(_DWORD *)(v5 + 8) )
      {
        case '#':
        case '$':
          if ( *(_QWORD *)(a2 + 32) != v5 )
            goto LABEL_5;
          goto LABEL_9;
        case '0':
          tinfo_property = get_tinfo_property();
          *a1 = 0;
          if ( (tinfo_property & 0xF) != 0xA )
            return a1;
          v11 = get_tinfo_property();
          goto LABEL_15;
        case '3':
        case ':':
          *a1 = 0;
          copy_tinfo_t();
          return a1;
        case '4':
LABEL_9:
          --v4;
          v6 = v5;
          v9 = *(_QWORD *)(*(_QWORD *)v3 + v7);
          v7 -= 8;
          if ( v4 == -1 )
            goto LABEL_5;
          v5 = v9;
          break;
        case '9':
          if ( !v6 || v6 == *(_QWORD *)(v5 + 24) )
            goto LABEL_5;
          sub_284360(v5, v6, 0);
          *a1 = 0;
          v11 = get_tinfo_property();
LABEL_15:
          *a1 = v11;
          return a1;
        default:
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  *a1 = 0;
  return a1;
}
