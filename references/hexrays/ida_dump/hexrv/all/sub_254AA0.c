__int64 __fastcall sub_254AA0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // ecx
  _DWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbp

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 <= v2 )
  {
    v4 = a1;
    if ( v3 < v2 )
      return 1;
    while ( 1 )
    {
      switch ( v2 )
      {
        case 'F':
        case 'N':
        case 'O':
          return 0;
        case 'G':
          return sub_255840(*(_QWORD *)(v4 + 24), *(_QWORD *)(a2 + 24));
        case 'H':
        case 'P':
        case 'T':
          return sub_254C50(*(_QWORD *)(v4 + 24), *(_QWORD *)(a2 + 24), 0);
        case 'I':
          return sub_255B70(*(_QWORD *)(v4 + 24), *(_QWORD *)(a2 + 24));
        case 'J':
          return sub_255720(*(_QWORD *)(v4 + 24), *(_QWORD *)(a2 + 24));
        case 'K':
        case 'L':
          v6 = *(_QWORD *)(v4 + 24);
          v7 = *(_QWORD *)(a2 + 24);
          result = sub_254C50(v6, v7, 0);
          if ( (_DWORD)result )
            return result;
          v4 = *(_QWORD *)(v6 + 64);
          a2 = *(_QWORD *)(v7 + 64);
          v2 = *(_DWORD *)(v4 + 8);
          v8 = *(_DWORD *)(a2 + 8);
          if ( v2 < v8 )
            return 0xFFFFFFFFLL;
          if ( v8 < v2 )
            return 1;
          break;
        case 'M':
          v11 = *(_QWORD *)(v4 + 24);
          v12 = *(_QWORD *)(a2 + 24);
          result = sub_254C50(v11, v12, 0);
          if ( !(_DWORD)result )
            return sub_2549E0((__int64 *)(v11 + 112), (__int64 *)(v12 + 112));
          return result;
        case 'Q':
          v9 = *(_DWORD **)(a2 + 24);
          v10 = **(_DWORD **)(v4 + 24);
          if ( *v9 < v10 )
            return 0xFFFFFFFFLL;
          return *v9 > v10;
        case 'R':
          return sub_251DF0(*(unsigned __int64 ***)(v4 + 24), *(unsigned __int64 ***)(a2 + 24));
        case 'S':
          return sub_2559D0(*(_QWORD *)(v4 + 24), *(_QWORD *)(a2 + 24));
        default:
          if ( !under_debugger )
            sub_37DDE0(50067);
          BUG();
      }
    }
  }
  return 0xFFFFFFFFLL;
}
