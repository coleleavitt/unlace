__int64 __fastcall sub_1089F90(__int64 a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // rcx
  char v5; // al
  __int64 result; // rax
  int *v7; // rbp
  unsigned __int64 v8; // rdx
  int *v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // r13
  _BOOL4 v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rbp
  unsigned __int64 v17; // rdx
  int *v18; // r12
  _DWORD *v19; // rax
  _BOOL4 v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rax
  char v27; // si
  int v28; // edx
  _BOOL4 v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  char v33; // cl
  int v34; // edx
  _BOOL4 v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // si
  int v39; // edx
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  char v42; // cl
  int v43; // edx
  unsigned __int64 v44; // rdx
  __int64 v45; // [rsp+0h] [rbp-40h]
  __int64 v46; // [rsp+0h] [rbp-40h]

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
          v16 = *(int **)(a3 + 24);
          v17 = *(unsigned int *)(a3 + 32);
          v18 = &v16[v17];
          if ( v16 == v18 )
          {
            if ( v17 <= 3 )
            {
LABEL_114:
              v44 = v17 + 1;
              if ( v44 > *(unsigned int *)(a3 + 36) )
              {
                sub_2237220(a3 + 24, a3 + 40, v44, 4);
                v18 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
              }
              *v18 = 0;
              ++*(_DWORD *)(a3 + 32);
              return 1;
            }
            v11 = a3 + 64;
          }
          else
          {
            if ( !*v16 )
              return 1;
            v19 = *(_DWORD **)(a3 + 24);
            while ( v18 != ++v19 )
            {
              if ( !*v19 )
                return 1;
            }
            v11 = a3 + 64;
            if ( v17 <= 3 )
              goto LABEL_114;
            do
            {
              v22 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v16);
              if ( v23 )
              {
                v20 = v22 || v11 == v23 || *v16 < *(_DWORD *)(v23 + 32);
                v46 = v23;
                v21 = operator new(0x28u);
                *(_DWORD *)(v21 + 32) = *v16;
                std::_Rb_tree_insert_and_rebalance(v20, v21, v46, a3 + 64);
                ++*(_QWORD *)(a3 + 96);
              }
              ++v16;
            }
            while ( v18 != v16 );
          }
          v31 = *(_QWORD *)(a3 + 72);
          *(_DWORD *)(a3 + 32) = 0;
          if ( v31 )
          {
            while ( 1 )
            {
              v43 = *(_DWORD *)(v31 + 32);
              if ( v43 > 0 )
              {
                v41 = *(_QWORD *)(v31 + 16);
                v42 = 1;
              }
              else
              {
                v41 = *(_QWORD *)(v31 + 24);
                v42 = 0;
              }
              if ( !v41 )
                break;
              v31 = v41;
            }
            if ( !v42 )
            {
              if ( v43 >= 0 )
                return 1;
              goto LABEL_109;
            }
            if ( *(_QWORD *)(a3 + 80) == v31 )
            {
LABEL_109:
              v35 = 1;
              if ( v11 != v31 )
                v35 = *(_DWORD *)(v31 + 32) > 0;
LABEL_111:
              v36 = operator new(0x28u);
              *(_DWORD *)(v36 + 32) = 0;
LABEL_76:
              std::_Rb_tree_insert_and_rebalance(v35, v36, v31, v11);
              ++*(_QWORD *)(a3 + 96);
              return 1;
            }
          }
          else
          {
            v31 = v11;
            if ( *(_QWORD *)(a3 + 80) == v11 )
            {
              v35 = 1;
              goto LABEL_111;
            }
          }
          if ( *(int *)(std::_Rb_tree_decrement(v31) + 32) >= 0 )
            return 1;
          goto LABEL_109;
        }
        v24 = *(_QWORD *)(a3 + 72);
        v25 = a3 + 64;
        if ( !v24 )
        {
          v24 = a3 + 64;
          if ( *(_QWORD *)(a3 + 80) == v25 )
          {
            v29 = 1;
LABEL_88:
            v30 = operator new(0x28u);
            *(_DWORD *)(v30 + 32) = 0;
            goto LABEL_58;
          }
          goto LABEL_105;
        }
        while ( 1 )
        {
          v39 = *(_DWORD *)(v24 + 32);
          if ( v39 > 0 )
          {
            v37 = *(_QWORD *)(v24 + 16);
            v38 = 1;
          }
          else
          {
            v37 = *(_QWORD *)(v24 + 24);
            v38 = 0;
          }
          if ( !v37 )
            break;
          v24 = v37;
        }
        if ( v38 )
        {
          if ( *(_QWORD *)(a3 + 80) != v24 )
          {
LABEL_105:
            if ( *(int *)(std::_Rb_tree_decrement(v24) + 32) >= 0 )
              return 1;
          }
        }
        else if ( v39 >= 0 )
        {
          return 1;
        }
        v29 = 1;
        if ( v25 != v24 )
          v29 = *(_DWORD *)(v24 + 32) > 0;
        goto LABEL_88;
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
LABEL_89:
            v40 = v8 + 1;
            if ( v40 > *(unsigned int *)(a3 + 36) )
            {
              sub_2237220(a3 + 24, a3 + 40, v40, 4);
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
            goto LABEL_89;
          do
          {
            v14 = sub_107A250((_QWORD *)(a3 + 56), a3 + 64, v7);
            if ( v15 )
            {
              v12 = v14 || v15 == v11 || *v7 < *(_DWORD *)(v15 + 32);
              v45 = v15;
              v13 = operator new(0x28u);
              *(_DWORD *)(v13 + 32) = *v7;
              std::_Rb_tree_insert_and_rebalance(v12, v13, v45, a3 + 64);
              ++*(_QWORD *)(a3 + 96);
            }
            ++v7;
          }
          while ( v9 != v7 );
        }
        v31 = *(_QWORD *)(a3 + 72);
        *(_DWORD *)(a3 + 32) = 0;
        if ( !v31 )
        {
          v31 = v11;
          if ( *(_QWORD *)(a3 + 80) == v11 )
          {
            v35 = 1;
LABEL_75:
            v36 = operator new(0x28u);
            *(_DWORD *)(v36 + 32) = 16;
            goto LABEL_76;
          }
          goto LABEL_93;
        }
        while ( 1 )
        {
          v34 = *(_DWORD *)(v31 + 32);
          if ( v34 > 16 )
          {
            v32 = *(_QWORD *)(v31 + 16);
            v33 = 1;
          }
          else
          {
            v32 = *(_QWORD *)(v31 + 24);
            v33 = 0;
          }
          if ( !v32 )
            break;
          v31 = v32;
        }
        if ( v33 )
        {
          if ( *(_QWORD *)(a3 + 80) != v31 )
          {
LABEL_93:
            if ( *(int *)(std::_Rb_tree_decrement(v31) + 32) > 15 )
              return 1;
          }
        }
        else if ( v34 > 15 )
        {
          return 1;
        }
        v35 = 1;
        if ( v31 != v11 )
          v35 = *(_DWORD *)(v31 + 32) > 16;
        goto LABEL_75;
      }
      v24 = *(_QWORD *)(a3 + 72);
      v25 = a3 + 64;
      if ( !v24 )
      {
        v24 = a3 + 64;
        if ( v25 == *(_QWORD *)(a3 + 80) )
        {
          v29 = 1;
          goto LABEL_57;
        }
        goto LABEL_69;
      }
      while ( 1 )
      {
        v28 = *(_DWORD *)(v24 + 32);
        if ( v28 > 16 )
        {
          v26 = *(_QWORD *)(v24 + 16);
          v27 = 1;
        }
        else
        {
          v26 = *(_QWORD *)(v24 + 24);
          v27 = 0;
        }
        if ( !v26 )
          break;
        v24 = v26;
      }
      if ( v27 )
      {
        if ( *(_QWORD *)(a3 + 80) != v24 )
        {
LABEL_69:
          if ( *(int *)(std::_Rb_tree_decrement(v24) + 32) > 15 )
            return 1;
        }
      }
      else if ( v28 > 15 )
      {
        return 1;
      }
      v29 = 1;
      if ( v25 != v24 )
        v29 = *(_DWORD *)(v24 + 32) > 16;
LABEL_57:
      v30 = operator new(0x28u);
      *(_DWORD *)(v30 + 32) = 16;
LABEL_58:
      std::_Rb_tree_insert_and_rebalance(v29, v30, v24, v25);
      ++*(_QWORD *)(a3 + 96);
      return 1;
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
