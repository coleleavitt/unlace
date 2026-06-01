_QWORD *__fastcall sub_4DE140(__int64 *a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx

  v5 = a1[1];
  v6 = (_QWORD *)*a1;
  v7 = &v6[7 * v5];
  if ( v7 != v6 )
  {
    v8 = v6;
    do
    {
      v9 = v8;
      if ( *v8 == a2 )
        return v9;
      v8 += 7;
    }
    while ( v7 != v8 );
  }
  v9 = nullptr;
  if ( !a3 )
    return v9;
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v11 = qvector_reserve(a1, v6, v5 + 1, 56);
    v12 = a1[1];
    *a1 = v11;
    v7 = (_QWORD *)(v11 + 56 * v12);
  }
  v7[2] = 0;
  *(_OWORD *)v7 = 0;
  v7[3] = 0;
  v7[4] = -1;
  v7[5] = 0;
  v7[6] = 0;
  ++a1[1];
  *v7 = a2;
  return v7;
}
