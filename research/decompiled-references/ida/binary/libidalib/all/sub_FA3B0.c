unsigned __int64 __fastcall sub_FA3B0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  _QWORD **v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *j; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *i; // rbp
  _QWORD *v13; // rdi

  v2 = a1[3];
  result = a2[3];
  v4 = (_QWORD **)(v2 + 8);
  if ( v2 + 8 < result )
  {
    do
    {
      v5 = *v4++;
      sub_90AD0(v5);
      sub_90AD0(v5 + 25);
      result = a2[3];
    }
    while ( (unsigned __int64)v4 < result );
    v2 = a1[3];
  }
  v6 = (_QWORD *)*a1;
  if ( v2 == result )
  {
    for ( i = (_QWORD *)*a2; i != v6; result = sub_90AD0(v13) )
    {
      v13 = v6;
      v6 += 25;
    }
  }
  else
  {
    for ( j = (_QWORD *)a1[2]; j != v6; result = sub_90AD0(v8) )
    {
      v8 = v6;
      v6 += 25;
    }
    v9 = (_QWORD *)*a2;
    v10 = (_QWORD *)a2[1];
    if ( (_QWORD *)*a2 != v10 )
    {
      do
      {
        v11 = v10;
        v10 += 25;
        result = sub_90AD0(v11);
      }
      while ( v9 != v10 );
    }
  }
  return result;
}

