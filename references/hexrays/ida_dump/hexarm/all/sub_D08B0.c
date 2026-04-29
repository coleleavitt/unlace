_QWORD *__fastcall sub_D08B0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *result; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // r15
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rax

  result = *(_QWORD **)(a1 + 80);
  v6 = a3[1];
  v7 = a2[1];
  v8 = result[14];
  if ( v7 < v6 )
  {
    v13 = *a2;
    if ( a2[2] < v6 )
    {
      v14 = qvector_reserve(a2, v13, a3[1], 4);
      v7 = a2[1];
      *a2 = v14;
      v13 = v14;
    }
    result = memset((void *)(v13 + 4 * v7), 0, 4 * (v6 - v7));
    a2[1] = v6;
    v6 = a3[1];
  }
  else if ( v6 != v7 )
  {
    a2[1] = v6;
  }
  v9 = 0;
  v10 = 0;
  if ( v6 )
  {
    do
    {
      ++v9;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 176LL);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, *(unsigned int *)(*a3 + 4 * v10));
      result = (_QWORD *)v11(v8, *(unsigned int *)(*a3 + 4 * v10), v12);
      *(_DWORD *)(*a2 + 4 * v10) = (_DWORD)result;
      v10 = v9;
    }
    while ( (unsigned __int64)v9 < a3[1] );
  }
  return result;
}
