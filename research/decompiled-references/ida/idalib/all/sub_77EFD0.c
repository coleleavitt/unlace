__int64 __fastcall sub_77EFD0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v10; // rbx

  if ( *(_BYTE *)(a3 + 8) )
  {
    v5 = *(_QWORD *)a3;
    v6 = a1[6] + 176LL * *(_QWORD *)a3;
    v7 = *(_QWORD *)(v6 + 32) - 1LL;
    if ( v7 < 0 )
    {
      return sub_77E230(a1, a2, a3);
    }
    else
    {
      while ( 1 )
      {
        result = sub_77EFD0(a1, v5, *(_QWORD *)(v6 + 24) + 9 * v7);
        if ( (_BYTE)result )
          break;
        if ( v7-- == 0 )
          return sub_77E230(a1, a2, a3);
        v5 = *(_QWORD *)a3;
      }
    }
  }
  else
  {
    v10 = a1[12];
    a1[12] = a2;
    result = sub_77EDA0(a1, *(_QWORD *)a3, 0);
    a1[12] = v10;
  }
  return result;
}
