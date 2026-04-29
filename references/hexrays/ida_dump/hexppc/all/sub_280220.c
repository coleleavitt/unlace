__int64 __fastcall sub_280220(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 v9; // r11
  _QWORD *v10; // r9
  int v11; // eax
  _QWORD *v13; // rax
  _QWORD **v14; // rdi
  _QWORD *v15; // rdx
  _QWORD *v16; // r8

  v4 = *(_QWORD *)(a1 + 24);
  if ( (int)v4 > 0 )
  {
    v6 = (int)v4;
    while ( 1 )
    {
      if ( v6 < v4 )
        a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v6);
      if ( a2 && (unsigned int)(*(_DWORD *)(a2 + 8) - 74) <= 3 )
        break;
      if ( (int)--v6 <= 0 )
        return 0;
    }
    v7 = v6 - 1;
    v8 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v7);
    v9 = (__int64)&v8[-v7 - 1];
    while ( 1 )
    {
      v10 = (_QWORD *)a2;
      a2 = *v8;
      if ( !*v8 )
        break;
      v11 = *(_DWORD *)(a2 + 8);
      if ( v11 == 71 )
      {
        v14 = *(_QWORD ***)(a2 + 24);
        v15 = *v14;
        do
        {
          if ( v14 == v15 )
          {
            if ( !under_debugger )
              sub_37EEE0(50605);
            BUG();
          }
          v16 = v15 + 2;
          v13 = v15;
          v15 = (_QWORD *)*v15;
        }
        while ( v16 != v10 );
        while ( 1 )
        {
          v13 = (_QWORD *)*v13;
          if ( v14 == v13 )
            break;
          if ( *((_DWORD *)v13 + 7) == a3 )
            return 1;
          if ( *((_DWORD *)v13 + 6) != 70 )
            return 0;
        }
      }
      else if ( (unsigned int)(v11 - 74) <= 3 )
      {
        return 0;
      }
      if ( --v8 == (__int64 *)v9 )
        return 0;
    }
  }
  return 0;
}
