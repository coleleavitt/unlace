__int64 __fastcall sub_38ABA0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rax

  v3 = *a3;
  result = a3[1];
  v5 = *a3 + 8 * result;
  if ( v5 != *a3 )
  {
    v7 = *a2;
    v8 = *(_QWORD *)(*(_QWORD *)v3 + 48LL);
    v9 = a2[1];
    if ( a2[2] < (unsigned __int64)(v9 + 1) )
    {
      v10 = qvector_reserve(a2, v7, v9 + 1, 8);
      *a2 = v10;
      v7 = v10;
      v9 = a2[1];
    }
    *(_QWORD *)(v7 + 8 * v9) = v8;
    result = a2[1];
    v11 = v3 + 8;
    v12 = result + 1;
    for ( a2[1] = result + 1; v11 != v5; a2[1] = result + 1 )
    {
      v13 = *a2;
      v14 = *(_QWORD *)(*(_QWORD *)v11 + 56LL);
      if ( a2[2] < (unsigned __int64)(v12 + 1) )
      {
        v15 = qvector_reserve(a2, v13, v12 + 1, 8);
        v12 = a2[1];
        *a2 = v15;
        v13 = v15;
      }
      *(_QWORD *)(v13 + 8 * v12) = v14;
      result = a2[1];
      v11 += 8;
      v12 = result + 1;
    }
  }
  return result;
}
