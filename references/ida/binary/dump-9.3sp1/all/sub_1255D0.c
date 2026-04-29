char __fastcall sub_1255D0(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r13
  char v9; // al
  _BYTE *v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rax
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // ebx
  __int64 v27; // rbp
  _BYTE *v28; // [rsp+18h] [rbp-70h]
  char v29; // [rsp+18h] [rbp-70h]
  _QWORD v30[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v31[11]; // [rsp+30h] [rbp-58h] BYREF

  v31[3] = __readfsqword(0x28u);
  v6 = a4;
  while ( 2 )
  {
    v7 = *a1;
LABEL_3:
    v8 = *(_QWORD *)(a2 + 96);
    if ( (v6 & 8) == 0 )
    {
      while ( 1 )
      {
        v9 = *(_BYTE *)a3;
LABEL_6:
        if ( ((_BYTE)v7 == 15) != (v9 == 15) )
        {
          if ( (_BYTE)v7 == 15 )
            return sub_11BAD0(*((_DWORD *)a1 + 1), *((_QWORD *)a1 + 1), a3, v6);
          else
            return sub_11BAD0(*(_DWORD *)(a3 + 4), *(_QWORD *)(a3 + 8), (__int64)a1, v6);
        }
        a4 = v6 & 1;
        if ( v9 == (_BYTE)v7 )
          break;
        if ( (v6 & 1) == 0 )
          return 0;
        if ( v9 == 14 )
        {
          a3 = *(_QWORD *)(a3 + 8);
          goto LABEL_3;
        }
        if ( (_BYTE)v7 != 14 )
          return 0;
        a1 = *((unsigned __int8 **)a1 + 1);
        v8 = *(_QWORD *)(a2 + 96);
        v7 = *a1;
        if ( (v6 & 8) != 0 )
          goto LABEL_4;
      }
      if ( (v6 & 1) != 0 || *((_DWORD *)a1 + 1) == *(_DWORD *)(a3 + 4) )
      {
        switch ( v7 )
        {
          case 0LL:
            return 1;
          case 1LL:
            if ( *(_DWORD *)(a3 + 8) == *((_DWORD *)a1 + 2) )
              return 1;
            if ( !(unsigned __int8)getinf_flag() )
              return 0;
            v15 = *((_DWORD *)a1 + 2);
            v16 = *(_DWORD *)(a2 + 56);
            if ( v15 != v16 && v15 != *(_DWORD *)(a2 + 52) && v15 != *(_DWORD *)(a2 + 64) )
              return 0;
            v17 = *(_DWORD *)(a3 + 8);
            if ( v16 == v17 || v17 == *(_DWORD *)(a2 + 52) )
              return 1;
            return *(_DWORD *)(a2 + 64) == v17;
          case 2LL:
            v14 = *(_QWORD *)(a3 + 8);
            if ( (v6 & 1) == 0 )
              return *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) == *(_QWORD *)(v14 + 16);
            v26 = *((_DWORD *)a1 + 1);
            if ( (signed int)v26 > *(_DWORD *)(a3 + 4) )
              v26 = *(_DWORD *)(a3 + 4);
            v27 = sub_32ABC0(*(_QWORD *)(v14 + 16), v26, 0);
            return v27 == sub_32ABC0(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v26, 0);
          case 3LL:
          case 11LL:
            return strcmp(*(const char **)(a3 + 8), *((const char **)a1 + 1)) == 0;
          case 4LL:
            return sub_125B90(*((_QWORD *)a1 + 1), a2, *(_QWORD *)(a3 + 8), v6 & 9);
          case 5LL:
            v18 = *(_QWORD *)(a3 + 8);
            v19 = *((_QWORD *)a1 + 1);
            if ( (v6 & 1) != 0 && *(_BYTE *)(v8 + 145) )
              return *(_QWORD *)(v18 + 8) + *(int *)(a3 + 4) == *(_QWORD *)(v19 + 8) + *((int *)a1 + 1);
            else
              return *(_QWORD *)(v18 + 8) == *(_QWORD *)(v19 + 8);
          case 6LL:
            if ( (v6 & 1) != 0 && *(_BYTE *)(v8 + 145) )
              return *(_QWORD *)(a3 + 8) + *(int *)(a3 + 4) == *((_QWORD *)a1 + 1) + *((int *)a1 + 1);
            else
              return *(_QWORD *)(a3 + 8) == *((_QWORD *)a1 + 1);
          case 7LL:
            return *(_DWORD *)(a3 + 8) == *((_DWORD *)a1 + 2);
          case 8LL:
            return sub_32EFE0(*(_QWORD *)(a3 + 8), *((_QWORD *)a1 + 1));
          case 9LL:
            return (unsigned int)sub_330920(*(_QWORD *)(a3 + 8), *((_QWORD *)a1 + 1)) == 0;
          case 10LL:
            if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) != *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) )
              return 0;
            a1 = *((unsigned __int8 **)a1 + 1);
            a3 = *(_QWORD *)(a3 + 8);
            continue;
          case 12LL:
            return (unsigned int)sub_11D600(*(__int64 **)(a3 + 8), *((__int64 **)a1 + 1)) == 0;
          case 13LL:
            return (unsigned int)ecmp() == 0;
          case 14LL:
            v6 &= ~1u;
            if ( !(unsigned __int8)sub_1255D0(*((_QWORD *)a1 + 1), a2, *(_QWORD *)(a3 + 8), v6) )
              return 0;
            a1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 16LL);
            a3 = *(_QWORD *)(a3 + 8) + 16LL;
            continue;
          case 15LL:
            v20 = *((_QWORD *)a1 + 1);
            v21 = *(_QWORD *)(a3 + 8);
            if ( *(_DWORD *)v20 != 2 || *(_DWORD *)v21 != 2 )
            {
              if ( !under_debugger )
                sub_383060(51127);
LABEL_73:
              BUG();
            }
            v22 = *(_QWORD *)(v20 + 8);
            v23 = *(_QWORD *)(v21 + 8);
            v24 = *(_QWORD *)(v22 + 8);
            if ( v24 != *(_QWORD *)(v23 + 8) )
              return 0;
            if ( !v24 )
              return 1;
            v25 = 0;
            break;
          default:
            if ( !under_debugger )
              sub_383060(50281);
            goto LABEL_73;
        }
        while ( !(unsigned int)compare_arglocs() )
        {
          if ( (unsigned __int64)++v25 >= *(_QWORD *)(v22 + 8) )
            return 1;
        }
      }
      return 0;
    }
    break;
  }
LABEL_4:
  if ( (_BYTE)v7 != 4 )
  {
    v9 = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 != 4 )
      goto LABEL_6;
  }
  v30[0] = 0xFFFFFFFF00000000LL;
  v30[1] = 0;
  v10 = sub_125450((char *)v30, a2, a1, a4);
  if ( !v10 )
  {
LABEL_19:
    sub_11CDA0((__int64)v30);
    goto LABEL_17;
  }
  v28 = v10;
  v31[0] = 0xFFFFFFFF00000000LL;
  v31[1] = 0;
  v12 = sub_125450((char *)v31, a2, (_BYTE *)a3, v11);
  if ( !v12 )
  {
    sub_11CDA0((__int64)v31);
    goto LABEL_19;
  }
  v29 = sub_1255D0(v28, a2, v12, v6);
  sub_11CDA0((__int64)v31);
  sub_11CDA0((__int64)v30);
  if ( !v29 )
  {
LABEL_17:
    v9 = *(_BYTE *)a3;
    v7 = *a1;
    goto LABEL_6;
  }
  return 1;
}
