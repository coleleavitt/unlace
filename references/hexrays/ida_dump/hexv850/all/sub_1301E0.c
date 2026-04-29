unsigned __int64 __fastcall sub_1301E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi

  result = *(_QWORD *)(a2 + 464);
  if ( (int)result > 0 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= result || (v9 = *(int *)(*(_QWORD *)(a2 + 456) + 4 * v8), v9 >= *(_QWORD *)(a2 + 440)) )
      {
        if ( !under_debugger )
          sub_37CFE0(50442);
        BUG();
      }
      ++v8;
      sub_1BE430(
        *(_DWORD *)(a2 + 432) + 104 * v9,
        (_DWORD)a1,
        *(_DWORD *)(*(_QWORD *)(a2 + 432) + 104 * v9 + 88),
        0,
        0,
        a6);
      result = *(_QWORD *)(a2 + 464);
    }
    while ( (int)result > (int)v8 );
  }
  v10 = a1[2];
  if ( v10 )
  {
    a1[3] = 0;
    result = qfree(v10);
    a1[2] = 0;
    a1[4] = 0;
  }
  return result;
}
