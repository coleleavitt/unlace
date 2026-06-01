unsigned __int64 __fastcall sub_5B5250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v6; // r13
  __int64 v7; // rbp
  __int64 **v8; // rax
  __int64 *v9; // rbx
  unsigned __int64 result; // rax
  __int64 *i; // r12
  __int64 *v12; // rcx

  v6 = (int *)&unk_238B8D0;
  do
  {
    v7 = *v6;
    v8 = (__int64 **)(a1 + 8 * (5 * v7 + 5));
    v9 = *v8;
    result = (unsigned __int64)v8[1];
    for ( i = &v9[result]; i != v9; result = sub_5B5170(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), v7, v12, a5, a6) )
      v12 = v9++;
    ++v6;
  }
  while ( &unk_238B8DC != (_UNKNOWN *)v6 );
  return result;
}

