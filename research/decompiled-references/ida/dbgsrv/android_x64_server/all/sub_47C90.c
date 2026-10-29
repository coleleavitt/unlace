/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C90
// Address: 0x0000000000047C90

//----- (0000000000047C90) ----------------------------------------------------
__int64 __fastcall sub_47C90(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax

  if ( a5 )
  {
    v5 = a5;
    v9 = *(_QWORD *)(a1 + 536);
    *(_DWORD *)(v9 + 84) = a2;
    *(_DWORD *)(v9 + 80) = 0;
    v10 = a4;
    v11 = *(_QWORD *)(a1 + 536);
    if ( a4 )
    {
      v12 = 0;
      do
      {
        v13 = a3 + (int)v12;
        if ( *(_QWORD *)(v11 + 24) > v13 )
        {
          *(_DWORD *)(v11 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v11 + 8) + 32 * v13 + 12);
          v11 = *(_QWORD *)(a1 + 536);
        }
        ++v12;
      }
      while ( v12 < v10 );
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) )
    {
      v14 = *(_QWORD **)(a1 + 536);
      if ( !a4 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 32LL))(v14);
      v15 = 0;
      while ( 1 )
      {
        v16 = a3 + (int)v15;
        if ( v14[3] <= v16 )
        {
          if ( !(_BYTE)under_debugger )
            interr(3258);
          BUG();
        }
        if ( !(unsigned __int8)sub_4B820((int *)(v14[2] + 40 * v16), (__int64)v14, v5) )
          break;
        ++v15;
        v5 += 32;
        v14 = *(_QWORD **)(a1 + 536);
        if ( v15 >= v10 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 32LL))(v14);
      }
    }
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
