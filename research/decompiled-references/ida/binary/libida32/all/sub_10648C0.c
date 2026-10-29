__int64 __fastcall sub_10648C0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // rdi
  __int64 result; // rax
  bool v6; // zf
  int *v7; // rbp
  unsigned __int64 v8; // rdx
  int *v9; // r12
  int *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14[15]; // [rsp+14h] [rbp-3Ch] BYREF

  v3 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'I':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x7FFFFFFF800LL;
      *(_BYTE *)(a3 + 16) = 1;
      return 1;
    case 'J':
      *(_DWORD *)a3 |= 0x10u;
      v6 = *(_QWORD *)(a3 + 96) == 0;
      v14[0] = 0;
      if ( !v6 )
      {
        sub_8DB6A0((_QWORD *)(a3 + 56), v14);
        return 1;
      }
      v7 = *(int **)(a3 + 24);
      v8 = *(unsigned int *)(a3 + 32);
      v9 = &v7[v8];
      if ( v7 != v9 )
      {
        if ( !*v7 )
          return 1;
        v10 = v7;
        while ( v9 != ++v10 )
        {
          if ( !*v10 )
            return 1;
        }
        v11 = (_QWORD *)(a3 + 56);
        if ( v8 <= 3 )
          goto LABEL_22;
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
LABEL_28:
        *(_DWORD *)(a3 + 32) = 0;
        sub_8DB6A0(v11, v14);
        return 1;
      }
      v11 = (_QWORD *)(a3 + 56);
      if ( v8 > 3 )
        goto LABEL_28;
LABEL_22:
      v13 = v8 + 1;
      if ( v13 > *(unsigned int *)(a3 + 36) )
      {
        sub_22134E0(a3 + 24, a3 + 40, v13, 4);
        v9 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
      }
      *v9 = 0;
      ++*(_DWORD *)(a3 + 32);
      return 1;
    case 'K':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0xFFF00000000LL;
      *(_BYTE *)(a3 + 16) = 1;
      return 1;
    case 'Z':
      result = 0;
      if ( (unsigned __int8)(v3[1] - 66) <= 1u )
      {
        *(_DWORD *)a3 |= 1u;
        *a2 = v3 + 1;
        return 1;
      }
      return result;
    case 'f':
    case 'q':
      *(_DWORD *)a3 |= 2u;
      return 1;
    case 'k':
      *(_DWORD *)a3 |= 1u;
      return 1;
    case 'l':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x7FFFFFFF8000LL;
      *(_BYTE *)(a3 + 16) = 1;
      return 1;
    default:
      return 0;
  }
}

