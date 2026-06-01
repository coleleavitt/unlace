char __fastcall sub_315890(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // ecx
  _QWORD v15[11]; // [rsp+0h] [rbp-58h] BYREF

  v15[5] = __readfsqword(0x28u);
  v2 = *(_DWORD *)a1 & 0xF;
  v4 = a1;
  switch ( (int)v2 )
  {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return sub_317040(a1 + 8, a2);
    case 3:
    case 4:
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)(v4 + 16);
      v10 = *(_QWORD *)(v4 + 8);
      if ( v8 < 0 )
      {
        v8 = -v8;
        v10 = *(_QWORD *)(v4 + 16);
        v11 = *(_QWORD *)(v4 + 8) - a2;
        v9 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v11 = a2 - v10;
      }
      if ( (_DWORD)v2 == 4 && v9 < v10 )
      {
        if ( a2 >= v10 || v9 >= a2 )
        {
          v14 = *(_DWORD *)(v4 + 4);
          if ( v14 == 8 || (1LL << (8 * (unsigned __int8)v14)) - 1 >= a2 )
            return v11 % v8 == 0;
        }
      }
      else if ( a2 >= v10 && v9 >= a2 )
      {
        return v11 % v8 == 0;
      }
      return 0;
    case 5:
      if ( (*(_QWORD *)(a1 + 8) & a2) != 0 )
        return 0;
      return (*(_QWORD *)(a1 + 16) & ~a2) == 0;
    case 6:
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v5 + 32LL * *(_QWORD *)(a1 + 16);
      if ( v5 == v6 )
        return 1;
      while ( 1 )
      {
        sub_312C40((__int64)v15, v5, v4, v2);
        if ( !(unsigned __int8)sub_315890(v15, a2) )
          break;
        sub_312B80((__int64)v15);
        v5 += 32;
        if ( v6 == v5 )
          return 1;
      }
      sub_312B80((__int64)v15);
      return 0;
    case 7:
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v12 + 32LL * *(_QWORD *)(a1 + 16);
      if ( v12 == v13 )
        return 0;
      while ( 1 )
      {
        sub_312C40((__int64)v15, v12, v4, v2);
        if ( (unsigned __int8)sub_315890(v15, a2) )
          break;
        sub_312B80((__int64)v15);
        v12 += 32;
        if ( v13 == v12 )
          return 0;
      }
      sub_312B80((__int64)v15);
      return 1;
    default:
      if ( !under_debugger )
        sub_383060(51745);
      BUG();
  }
}
