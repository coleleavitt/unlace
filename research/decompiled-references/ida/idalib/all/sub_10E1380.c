_QWORD *__fastcall sub_10E1380(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *result; // rax
  __int64 v13; // rcx

  v6 = a2;
  if ( a2 == a4 )
  {
    v9 = 0;
  }
  else
  {
    v7 = a2;
    v8 = 0;
    do
    {
      do
        v7 += 2;
      while ( v7 != a3 && (*v7 == -1 || *v7 == -2) );
      ++v8;
    }
    while ( a4 != v7 );
    v9 = v8;
  }
  v10 = *(unsigned int *)(a1 + 8);
  v11 = v10 + v9;
  if ( v10 + v9 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v11, 16);
    v10 = *(unsigned int *)(a1 + 8);
    LODWORD(v11) = v10 + v9;
  }
  result = (_QWORD *)(*(_QWORD *)a1 + 16 * v10);
  if ( a2 != a4 )
  {
    do
    {
      v13 = v6[1];
      *result = *v6;
      result[1] = v13;
      do
        v6 += 2;
      while ( v6 != a3 && (*v6 == -1 || *v6 == -2) );
      result += 2;
    }
    while ( a4 != v6 );
  }
  *(_DWORD *)(a1 + 8) = v11;
  return result;
}
