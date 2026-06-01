__int64 __fastcall sub_10C7C80(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 result; // rax
  char v7; // al
  bool v8; // zf
  __int64 *v9; // rbx
  int *v10; // r9
  unsigned __int64 v11; // rdx
  int *v12; // r15
  int v13; // ebp
  _DWORD *v14; // rax
  int *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // al
  char v20; // al
  unsigned __int64 v21; // rdx
  int *v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-68h]
  _BOOL4 v24; // [rsp+Ch] [rbp-5Ch]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  __int64 v27; // [rsp+24h] [rbp-44h] BYREF
  int v28; // [rsp+2Ch] [rbp-3Ch]
  _BYTE v29[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *a2;
  switch ( *(_BYTE *)*a2 )
  {
    case '@':
      v5 = sub_10BB3C0(*a2);
      if ( !v5 )
        return 0;
      *a2 = (unsigned int)(v5 - 1) + v3;
      goto LABEL_4;
    case 'A':
    case 'D':
    case 'Q':
    case 'R':
    case 'S':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'k':
    case 'l':
    case 'q':
    case 't':
    case 'u':
    case 'v':
    case 'x':
    case 'y':
      goto LABEL_4;
    case 'C':
    case 'G':
      return 1;
    case 'I':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x1F00000000LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'J':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x3F00000000LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'K':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x7FFFFFFF80LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'L':
      *(_DWORD *)a3 |= 0x10u;
      v8 = *(_QWORD *)(a3 + 96) == 0;
      v9 = &v27;
      v27 = 0xFFFF000000FFLL;
      v25 = a3 + 24;
      v28 = -1;
      v26 = a3 + 40;
      if ( v8 )
        goto LABEL_17;
LABEL_53:
      v22 = (int *)v9;
      v9 = (__int64 *)((char *)v9 + 4);
      sub_8FF3E0((_QWORD *)(a3 + 56), v22);
      if ( v9 != (__int64 *)v29 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(a3 + 96) )
            goto LABEL_53;
LABEL_17:
          v10 = *(int **)(a3 + 24);
          v11 = *(unsigned int *)(a3 + 32);
          v12 = &v10[v11];
          if ( v10 == v12 )
            break;
          v13 = *(_DWORD *)v9;
          if ( *v10 != *(_DWORD *)v9 )
          {
            v14 = *(_DWORD **)(a3 + 24);
            while ( v12 != ++v14 )
            {
              if ( *v14 == v13 )
                goto LABEL_51;
            }
            if ( v11 > 3 )
            {
              v15 = *(int **)(a3 + 24);
              do
              {
                v17 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v15);
                if ( v18 )
                {
                  v24 = v17 || v18 == a3 + 64 || *v15 < *(_DWORD *)(v18 + 32);
                  v23 = v18;
                  v16 = operator new(0x28u);
                  *(_DWORD *)(v16 + 32) = *v15;
                  std::_Rb_tree_insert_and_rebalance(v24, v16, v23, a3 + 64);
                  ++*(_QWORD *)(a3 + 96);
                }
                ++v15;
              }
              while ( v12 != v15 );
LABEL_55:
              *(_DWORD *)(a3 + 32) = 0;
              goto LABEL_53;
            }
            goto LABEL_48;
          }
LABEL_51:
          v9 = (__int64 *)((char *)v9 + 4);
          if ( v9 == (__int64 *)v29 )
            return 1;
        }
        if ( v11 > 3 )
          goto LABEL_55;
        v13 = *(_DWORD *)v9;
LABEL_48:
        v21 = v11 + 1;
        if ( v21 > *(unsigned int *)(a3 + 36) )
        {
          sub_2237220(v25, v26, v21, 4);
          v12 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
        }
        *v12 = v13;
        ++*(_DWORD *)(a3 + 32);
        goto LABEL_51;
      }
      return 1;
    case 'M':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x300000000LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'N':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0xFF00000000LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'O':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x7F00000000LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'W':
      *a2 = v3 + 1;
      if ( *(_BYTE *)(v3 + 1) == 115 )
        goto LABEL_4;
      return 0;
    case 'Y':
      *a2 = v3 + 1;
      v7 = *(_BYTE *)(v3 + 1);
      if ( v7 == 107 )
        goto LABEL_4;
      if ( v7 <= 107 )
      {
        if ( v7 != 50 && v7 != 105 )
          return 0;
      }
      else if ( v7 != 116 && v7 != 122 && v7 != 109 )
      {
        return 0;
      }
LABEL_4:
      *(_DWORD *)a3 |= 2u;
      return 1;
    case 'Z':
    case 'e':
    case 's':
      *(_DWORD *)a3 |= 0x10u;
      return 1;
    case 'f':
      v19 = **(_BYTE **)(a3 + 104);
      if ( v19 == 43 || v19 == 61 )
        return 0;
      goto LABEL_4;
    case 'j':
      *a2 = v3 + 1;
      v20 = *(_BYTE *)(v3 + 1);
      if ( v20 == 82 || v20 == 114 )
        goto LABEL_4;
      return 0;
    default:
      return 0;
  }
}
