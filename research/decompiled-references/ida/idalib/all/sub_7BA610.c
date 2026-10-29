__int64 __fastcall sub_7BA610(__int64 a1, __int64 (*a2)(void), __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int *v9; // rdi

  v6 = *(_QWORD *)(a1 + 1736);
  result = *(unsigned int *)(v6 + 48);
  if ( (int)result > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(unsigned int **)(v6 + 8 * v8++ + 16);
      result = sub_73C5A0(v9, a2, a3, a4, a5, a6);
    }
    while ( *(_DWORD *)(v6 + 48) > (int)v8 );
  }
  return result;
}
