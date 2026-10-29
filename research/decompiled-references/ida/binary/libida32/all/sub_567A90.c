__int64 __fastcall sub_567A90(__int64 *a1, char **a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebp
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // rsi
  int v14; // eax
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  get_eah();
  v4 = sub_693090(a2, a1);
  if ( (_BYTE)v4 )
  {
    v5 = *a1;
    v6 = v4;
    switch ( *a1 & 0xF )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
        goto LABEL_8;
      case 8LL:
      case 0xBLL:
        ptr = nullptr;
        v17 = 0;
        if ( !(unsigned __int8)sub_54DFE0((__int64)&ptr, a2) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v17 = 0;
            qfree(ptr);
          }
          return 0;
        }
        v12 = sub_693310(*(_QWORD *)(qword_2CA1698 + 1480), 0, ptr);
        *((_DWORD *)a1 + 3) = v12;
        if ( !v12 )
        {
          v13 = haystack;
          if ( (_QWORD)v17 )
            v13 = (const char *)ptr;
          *((_DWORD *)a1 + 3) = get_type_ordinal(0, v13);
        }
        if ( (*a1 & 0xF) != 0xB )
          goto LABEL_27;
        if ( !(unsigned __int8)sub_693090(a2, &v15) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v17 = 0;
            qfree(ptr);
          }
          return 0;
        }
        *((_DWORD *)a1 + 2) = v15;
LABEL_27:
        if ( ptr )
        {
          *(_QWORD *)&v17 = 0;
          qfree(ptr);
        }
LABEL_7:
        v5 = *a1;
LABEL_8:
        if ( (v5 & 0x1000) == 0 )
          return v6;
        if ( (unsigned __int8)sub_693030(a2, a1 + 3) && (unsigned __int8)sub_693030(a2, (char *)a1 + 28) )
          return sub_693030(a2, a1 + 4);
        break;
      case 9LL:
        if ( !(unsigned __int8)sub_693030(a2, (char *)a1 + 20) )
          return 0;
        *((_DWORD *)a1 + 3) = 0;
        if ( (*((_WORD *)a1 + 10) & 0x1010) != 0 )
          goto LABEL_17;
        if ( !(unsigned __int8)sub_693090(a2, &ptr) )
          return 0;
        *((_DWORD *)a1 + 3) = (_DWORD)ptr;
LABEL_17:
        if ( !(unsigned __int8)sub_693090(a2, &ptr) )
          return 0;
        *((_DWORD *)a1 + 4) = (_DWORD)ptr;
        if ( !(unsigned __int8)sub_693090(a2, &ptr) )
          return 0;
        v8 = (unsigned int)ptr;
        *((_DWORD *)a1 + 2) = (_DWORD)ptr;
        v9 = v8;
        v10 = *((_DWORD *)a1 + 3);
        if ( v10 )
        {
          v14 = node2ea(v10);
          v9 = *((unsigned int *)a1 + 2);
          *((_DWORD *)a1 + 3) = v14;
        }
        v11 = node2ea(v9);
        v5 = *a1;
        *((_DWORD *)a1 + 2) = v11;
        goto LABEL_8;
      case 0xALL:
      case 0xCLL:
        if ( !(unsigned __int8)sub_693030(a2, &ptr) )
          return 0;
        *((_DWORD *)a1 + 2) = (_DWORD)ptr;
        goto LABEL_7;
      default:
        if ( !under_debugger )
          interr(2927);
        BUG();
    }
  }
  return 0;
}

