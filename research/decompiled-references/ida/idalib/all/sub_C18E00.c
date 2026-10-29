_QWORD *__fastcall sub_C18E00(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // r12
  _QWORD *result; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // r12
  int *v11; // rsi
  __int64 v12; // rdi

  v3 = a3;
  v6 = 56LL * a3 + 8;
  result = (_QWORD *)operator new[](v6);
  *result = v3;
  v8 = result + 1;
  if ( v3 )
  {
    v9 = result + 1;
    do
    {
      *(_DWORD *)v9 = 0;
      *((_BYTE *)v9 + 4) &= ~1u;
      v9 += 7;
    }
    while ( v9 != (_QWORD *)((char *)result + v6) );
  }
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 16) = a3;
  if ( a3 )
  {
    v10 = (__int64)&result[7 * a3 + 1];
    do
    {
      v11 = a2;
      v12 = (__int64)v8;
      v8 += 7;
      a2 += 14;
      result = (_QWORD *)sub_A54D20(v12, v11);
    }
    while ( (_QWORD *)v10 != v8 );
  }
  return result;
}
