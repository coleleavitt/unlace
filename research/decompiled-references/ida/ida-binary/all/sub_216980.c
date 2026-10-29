__int64 __fastcall sub_216980(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *a1;
  result = a1[1];
  v6 = a1[2];
  v7 = result + 1;
  if ( (unsigned __int64)a2 >= v4 && (unsigned __int64)a2 < v4 + 8 * v6 )
  {
    v8 = *a2;
    if ( v6 < v7 )
    {
      v10 = qvector_reserve(a1, v4, result + 1, 8);
      *a1 = v10;
      v4 = v10;
      result = a1[1];
    }
    *(_QWORD *)(v4 + 8 * result) = v8;
    ++a1[1];
  }
  else
  {
    if ( v6 < v7 )
    {
      v9 = qvector_reserve(a1, v4, result + 1, 8);
      *a1 = v9;
      v4 = v9;
      result = a1[1];
    }
    *(_QWORD *)(v4 + 8 * result) = *a2;
    ++a1[1];
  }
  return result;
}
