__int64 __fastcall sub_B3720(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // rdx
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi

  if ( *(_BYTE *)a2 != 9 || !a4 )
    return 0;
  v6 = *(int *)(*(_QWORD *)(a2 + 8) + 16LL);
  v7 = *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8 * v6);
  if ( !v7 )
    return 1;
  v8 = *(_QWORD **)(a1 + 48);
  if ( v8[1] )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = *(int *)(*v8 + 4 * v10);
      if ( (_DWORD)v6 != (_DWORD)v11 )
      {
        v12 = *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8 * v11);
        if ( !v12 )
        {
          if ( !under_debugger )
            sub_37DDE0(50924);
          JUMPOUT(0x3080C);
        }
        if ( (unsigned __int8)sub_121110(v12, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v7, 9) )
          return 1;
        v8 = *(_QWORD **)(a1 + 48);
      }
      v10 = ++v9;
    }
    while ( (unsigned __int64)v9 < v8[1] );
  }
  return 0;
}
