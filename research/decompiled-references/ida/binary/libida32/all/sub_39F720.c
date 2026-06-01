unsigned __int64 __fastcall sub_39F720(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rsi

  result = a4;
  if ( a3 >= a2 )
  {
    v5 = a3;
    a3 = a2;
    a2 = v5;
  }
  v6 = -2;
  if ( a2 != -1 )
    v6 = a2;
  if ( a3 != v6 )
  {
    v7 = 0;
    while ( (_DWORD)result != dword_2389780[v7] )
    {
      if ( ++v7 == 14 )
      {
        if ( !under_debugger )
          interr(44);
        BUG();
      }
    }
    return sub_39F4C0(*(_QWORD *)(*(_QWORD *)a1 + 1344LL), v7, a3, v6);
  }
  return result;
}

