__int64 __fastcall sub_10862D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // rdi
  __int64 result; // rax
  __int64 v5; // r8
  bool v7; // zf
  int *v8; // rbp
  unsigned __int64 v9; // rdx
  int *v10; // r12
  int *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15[15]; // [rsp+14h] [rbp-3Ch] BYREF

  v3 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'A':
      *(_DWORD *)a3 |= 1u;
      return 1;
    case 'I':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x7FFFFFFF800LL;
      *(_BYTE *)(a3 + 16) = 1;
      return 1;
    case 'J':
      *(_DWORD *)a3 |= 0x10u;
      v7 = *(_QWORD *)(a3 + 96) == 0;
      v15[0] = 0;
      if ( !v7 )
      {
        sub_8DB6A0((_QWORD *)(a3 + 56), v15);
        return 1;
      }
      v8 = *(int **)(a3 + 24);
      v9 = *(unsigned int *)(a3 + 32);
      v10 = &v8[v9];
      if ( v8 != v10 )
      {
        if ( !*v8 )
          return 1;
        v11 = v8;
        while ( v10 != ++v11 )
        {
          if ( !*v11 )
            return 1;
        }
        v12 = (_QWORD *)(a3 + 56);
        if ( v9 <= 3 )
          goto LABEL_24;
        do
        {
          sub_1056510((_QWORD *)(a3 + 56), a3 + 64, v8);
          if ( v13 )
          {
            *(_DWORD *)(operator new(0x28u) + 32) = *v8;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a3 + 96);
          }
          ++v8;
        }
        while ( v10 != v8 );
LABEL_30:
        *(_DWORD *)(a3 + 32) = 0;
        sub_8DB6A0(v12, v15);
        return 1;
      }
      v12 = (_QWORD *)(a3 + 56);
      if ( v9 > 3 )
        goto LABEL_30;
LABEL_24:
      v14 = v9 + 1;
      if ( v14 > *(unsigned int *)(a3 + 36) )
      {
        sub_22134E0(a3 + 24, a3 + 40, v14, 4);
        v10 = (int *)(*(_QWORD *)(a3 + 24) + 4LL * *(unsigned int *)(a3 + 32));
      }
      *v10 = 0;
      ++*(_DWORD *)(a3 + 32);
      return 1;
    case 'K':
      *(_DWORD *)a3 |= 0x10u;
      *(_QWORD *)(a3 + 8) = 0x1F00000000LL;
      *(_BYTE *)(a3 + 16) = 1;
      return 1;
    case 'R':
    case 'S':
    case 'f':
    case 's':
      *(_DWORD *)a3 |= 2u;
      return 1;
    case 'c':
      result = v3[1] & 0xDF;
      LOBYTE(result) = v3[1] == 102 || (v3[1] & 0xDF) == 82;
      if ( (_BYTE)result )
      {
        *(_DWORD *)a3 |= 2u;
        *a2 = v3 + 1;
      }
      return result;
    case 'v':
      result = 0;
      if ( (unsigned __int8)(v3[1] - 100) <= 0xEu )
      {
        v5 = 16897;
        if ( _bittest64(&v5, (unsigned int)(unsigned __int8)v3[1] - 100) )
        {
          *(_DWORD *)a3 |= 2u;
          *a2 = v3 + 1;
          return 1;
        }
      }
      return result;
    default:
      return 0;
  }
}

