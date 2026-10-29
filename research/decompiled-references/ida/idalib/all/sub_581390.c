__int64 __fastcall sub_581390(__int64 *a1, char **a2)
{
  __int64 eah; // r13
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  const char *v15; // rsi
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  eah = get_eah();
  v5 = sub_6B3810(a2, a1);
  if ( (_BYTE)v5 )
  {
    v6 = *a1;
    v7 = v5;
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
        v23 = 0;
        if ( !(unsigned __int8)sub_567720((__int64)&ptr, a2) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v23 = 0;
            qfree(ptr);
          }
          return 0;
        }
        v14 = sub_6B3A90(*(_QWORD *)(qword_2CCB598 + 1672), 0, ptr);
        *((_DWORD *)a1 + 4) = v14;
        if ( !v14 )
        {
          v15 = haystack;
          if ( (_QWORD)v23 )
            v15 = (const char *)ptr;
          *((_DWORD *)a1 + 4) = get_type_ordinal(0, v15);
        }
        if ( (*a1 & 0xF) != 0xB )
          goto LABEL_33;
        if ( !(unsigned __int8)sub_6B3810(a2, &v21) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v23 = 0;
            qfree(ptr);
          }
          return 0;
        }
        v20 = v21;
        if ( v21 == *(_QWORD *)(eah + 16) )
          v20 = -1;
        a1[1] = v20;
LABEL_33:
        v16 = a1[1];
        if ( *(_DWORD *)(eah + 24) != 8 )
          v16 = (int)v16;
        v17 = ptr;
        a1[1] = v16;
        if ( v17 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v17);
        }
LABEL_7:
        v6 = *a1;
LABEL_8:
        if ( (v6 & 0x1000) == 0 )
          return v7;
        if ( (unsigned __int8)sub_6B37B0(a2, a1 + 5) && (unsigned __int8)sub_6B37B0(a2, (char *)a1 + 44) )
          return sub_6B37B0(a2, a1 + 6);
        break;
      case 9LL:
        if ( !(unsigned __int8)sub_6B37B0(a2, a1 + 4) )
          return 0;
        a1[2] = 0;
        if ( (a1[4] & 0x1010) != 0 )
          goto LABEL_17;
        if ( !(unsigned __int8)sub_6B3810(a2, &ptr) )
          return 0;
        v18 = (__int64)ptr;
        if ( ptr == *(void **)(eah + 16) )
          v18 = -1;
        a1[2] = v18;
LABEL_17:
        if ( !(unsigned __int8)sub_6B3810(a2, &ptr) )
          return 0;
        v9 = (__int64)ptr;
        if ( ptr == *(void **)(eah + 16) )
          v9 = -1;
        a1[3] = v9;
        v10 = (int)v9;
        if ( *(_DWORD *)(eah + 24) == 8 )
          v10 = v9;
        a1[3] = v10;
        if ( !(unsigned __int8)sub_6B3810(a2, &ptr) )
          return 0;
        v11 = (__int64)ptr;
        if ( ptr == *(void **)(eah + 16) )
          v11 = -1;
        v12 = a1[2];
        a1[1] = v11;
        if ( v12 )
        {
          v19 = node2ea(v12);
          v11 = a1[1];
          a1[2] = v19;
        }
        v13 = node2ea(v11);
        v6 = *a1;
        a1[1] = v13;
        goto LABEL_8;
      case 0xALL:
      case 0xCLL:
        if ( !(unsigned __int8)sub_6B37B0(a2, &ptr) )
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
