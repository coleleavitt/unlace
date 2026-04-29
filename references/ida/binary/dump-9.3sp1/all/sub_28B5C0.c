__int64 __fastcall sub_28B5C0(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v12; // rax

  v5 = *(_QWORD *)(a1 + 24);
  v6 = v5 - 1;
  if ( v5 - 1 > 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = v5 - 3 - ((v5 - 2) & 0xFFFFFFFFFFFFFFFELL);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 8 * v6);
      if ( *(_DWORD *)(v10 + 8) != 71 )
        break;
      v9 = *(_QWORD **)(v10 + 24);
      if ( a2 != v9[1] + 16LL )
      {
        v12 = (_QWORD *)*v9;
        if ( v9 == (_QWORD *)*v9 )
          goto LABEL_18;
        while ( (_QWORD *)a2 != v12 + 2 )
        {
          v12 = (_QWORD *)*v12;
          if ( v9 == v12 )
            goto LABEL_18;
        }
        if ( v9 == v12 )
        {
LABEL_18:
          if ( !under_debugger )
            sub_383060(52557);
          BUG();
        }
        if ( a4 )
        {
          *a4 = v9;
          a4[1] = v12;
        }
        return *v12 + 16LL;
      }
      a2 = *(_QWORD *)(v7 + 8 * v6 - 8);
      if ( a2 && (!a3 || *(_DWORD *)(a2 + 8) == 73) )
      {
        v6 -= 2;
        if ( v6 != v8 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
