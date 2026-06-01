__int64 __fastcall sub_1066250(__int64 a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // rcx
  char v5; // al
  __int64 result; // rax
  int *v7; // rbp
  unsigned __int64 v8; // rdx
  int *v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  int *v13; // rbp
  unsigned __int64 v14; // rdx
  int *v15; // r12
  _DWORD *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rax
  char v21; // si
  int v22; // edx
  __int64 v23; // rbp
  __int64 v24; // rax
  char v25; // cl
  int v26; // edx
  __int64 v27; // rbp
  __int64 v28; // rax
  char v29; // si
  int v30; // edx
  unsigned __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rax
  char v34; // cl
  int v35; // edx
  unsigned __int64 v36; // rdx

  v3 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'C':
      *a2 = v3 + 1;
      v5 = v3[1];
      if ( v5 == 48 )
      {
        *(_DWORD *)a3 |= 0x10u;
        if ( !*(_QWORD *)(a3 + 96) )
        {
          v13 = *(int **)(a3 + 24);
          v14 = *(unsigned int *)(a3 + 32);
          v15 = &v13[v14];
          if ( v13 == v15 )
          {
            if ( v14 <= 3 )
            {
LABEL_97:
              v36 = v14 + 1;
              if ( v36 > *(unsigned int *)(a3 + 36) )
              {
                sub_22134E0(a3 + 24, a3 + 40, v36, 4);
                v15 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
              }
              *v15 = 0;
              ++*(_DWORD *)(a3 + 32);
              return 1;
            }
            v17 = a3 + 64;
          }
          else
          {
            if ( !*v13 )
              return 1;
            v16 = *(_DWORD **)(a3 + 24);
            while ( v15 != ++v16 )
            {
              if ( !*v16 )
                return 1;
            }
            v17 = a3 + 64;
            if ( v14 <= 3 )
              goto LABEL_97;
            do
            {
              sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v13);
              if ( v18 )
              {
                *(_DWORD *)(operator new(0x28u) + 32) = *v13;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a3 + 96);
              }
              ++v13;
            }
            while ( v15 != v13 );
          }
          v32 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( !v32 )
          {
            if ( *(_QWORD *)(a3 + 80) == v17 )
              goto LABEL_73;
LABEL_101:
            if ( *(int *)(std::_Rb_tree_decrement() + 32) >= 0 )
              return 1;
            goto LABEL_73;
          }
          while ( 1 )
          {
            v35 = *(_DWORD *)(v32 + 32);
            if ( v35 > 0 )
            {
              v33 = *(_QWORD *)(v32 + 16);
              v34 = 1;
            }
            else
            {
              v33 = *(_QWORD *)(v32 + 24);
              v34 = 0;
            }
            if ( !v33 )
              break;
            v32 = v33;
          }
          if ( v34 )
          {
            if ( *(_QWORD *)(a3 + 80) == v32 )
              goto LABEL_73;
            goto LABEL_101;
          }
          if ( v35 >= 0 )
            return 1;
LABEL_73:
          *(_DWORD *)(operator new(0x28u) + 32) = 0;
          goto LABEL_48;
        }
        v27 = *(_QWORD *)(a3 + 72);
        if ( v27 )
        {
          while ( 1 )
          {
            v30 = *(_DWORD *)(v27 + 32);
            if ( v30 > 0 )
            {
              v28 = *(_QWORD *)(v27 + 16);
              v29 = 1;
            }
            else
            {
              v28 = *(_QWORD *)(v27 + 24);
              v29 = 0;
            }
            if ( !v28 )
              break;
            v27 = v28;
          }
          if ( !v29 )
          {
            if ( v30 >= 0 )
              return 1;
            goto LABEL_73;
          }
          if ( *(_QWORD *)(a3 + 80) == v27 )
            goto LABEL_73;
        }
        else if ( *(_QWORD *)(a3 + 80) == a3 + 64 )
        {
          goto LABEL_73;
        }
        if ( *(int *)(std::_Rb_tree_decrement() + 32) >= 0 )
          return 1;
        goto LABEL_73;
      }
      if ( v5 < 48 || (unsigned __int8)(v5 - 105) > 1u )
        return 0;
LABEL_5:
      *(_DWORD *)a3 |= 0x10u;
      return 1;
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'R':
    case 'S':
    case 'T':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'b':
    case 'c':
      return 0;
    case 'I':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x800000001LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'J':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x7FFFFFFF8000LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'K':
    case 'M':
      goto LABEL_5;
    case 'L':
      *(_DWORD *)a3 |= 0x10u;
      result = 1;
      *(_QWORD *)(a3 + 8) = -8;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'N':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x1F00000018LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'O':
      *(_DWORD *)a3 |= 0x10u;
      if ( !*(_QWORD *)(a3 + 96) )
      {
        v7 = *(int **)(a3 + 24);
        v8 = *(unsigned int *)(a3 + 32);
        v9 = &v7[v8];
        if ( v7 == v9 )
        {
          if ( v8 <= 3 )
          {
LABEL_74:
            v31 = v8 + 1;
            if ( v31 > *(unsigned int *)(a3 + 36) )
            {
              sub_22134E0(a3 + 24, a3 + 40, v31, 4);
              v9 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
            }
            *v9 = 16;
            ++*(_DWORD *)(a3 + 32);
            return 1;
          }
          v11 = a3 + 64;
        }
        else
        {
          if ( *v7 == 16 )
            return 1;
          v10 = *(_DWORD **)(a3 + 24);
          while ( v9 != ++v10 )
          {
            if ( *v10 == 16 )
              return 1;
          }
          v11 = a3 + 64;
          if ( v8 <= 3 )
            goto LABEL_74;
          do
          {
            sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v7);
            if ( v12 )
            {
              *(_DWORD *)(operator new(0x28u) + 32) = *v7;
              std::_Rb_tree_insert_and_rebalance();
              ++*(_QWORD *)(a3 + 96);
            }
            ++v7;
          }
          while ( v9 != v7 );
        }
        v23 = *(_QWORD *)(a3 + 72);
        *(_DWORD *)(a3 + 32) = 0;
        if ( !v23 )
        {
          if ( *(_QWORD *)(a3 + 80) == v11 )
            goto LABEL_47;
LABEL_78:
          if ( *(int *)(std::_Rb_tree_decrement() + 32) > 15 )
            return 1;
          goto LABEL_47;
        }
        while ( 1 )
        {
          v26 = *(_DWORD *)(v23 + 32);
          if ( v26 > 16 )
          {
            v24 = *(_QWORD *)(v23 + 16);
            v25 = 1;
          }
          else
          {
            v24 = *(_QWORD *)(v23 + 24);
            v25 = 0;
          }
          if ( !v24 )
            break;
          v23 = v24;
        }
        if ( !v25 )
        {
          if ( v26 > 15 )
            return 1;
          goto LABEL_47;
        }
        if ( *(_QWORD *)(a3 + 80) != v23 )
          goto LABEL_78;
LABEL_47:
        *(_DWORD *)(operator new(0x28u) + 32) = 16;
LABEL_48:
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(a3 + 96);
        return 1;
      }
      v19 = *(_QWORD *)(a3 + 72);
      if ( v19 )
      {
        while ( 1 )
        {
          v22 = *(_DWORD *)(v19 + 32);
          if ( v22 > 16 )
          {
            v20 = *(_QWORD *)(v19 + 16);
            v21 = 1;
          }
          else
          {
            v20 = *(_QWORD *)(v19 + 24);
            v21 = 0;
          }
          if ( !v20 )
            break;
          v19 = v20;
        }
        if ( !v21 )
        {
          if ( v22 > 15 )
            return 1;
          goto LABEL_47;
        }
        if ( *(_QWORD *)(a3 + 80) == v19 )
          goto LABEL_47;
      }
      else if ( a3 + 64 == *(_QWORD *)(a3 + 80) )
      {
        goto LABEL_47;
      }
      if ( *(int *)(std::_Rb_tree_decrement() + 32) > 15 )
        return 1;
      goto LABEL_47;
    case 'P':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0xF00000008LL;
      result = 1;
      *(_BYTE *)(a3 + 16) = 1;
      return result;
    case 'Q':
    case 'U':
      *(_DWORD *)a3 |= 1u;
      return 1;
    case 'a':
    case 'd':
      *(_DWORD *)a3 |= 2u;
      return 1;
    default:
      return 0;
  }
}

