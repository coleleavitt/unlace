_QWORD *__fastcall sub_105F1C0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx

  v6 = sub_2246AB0(a2, a3, a4, 0);
  if ( v6 == -1 )
  {
    v12 = a2[1];
    v13 = *a2;
    a1[2] = 0;
    a1[3] = 0;
    a1[1] = v12;
    *a1 = v13;
    return a1;
  }
  else
  {
    v7 = a2[1];
    v8 = v6 + a4;
    if ( v8 > v7 )
    {
      v8 = a2[1];
      v9 = 0;
    }
    else
    {
      v9 = v7 - v8;
    }
    v10 = *a2;
    a1[3] = v9;
    if ( v6 > v7 )
      v6 = v7;
    *a1 = v10;
    a1[1] = v6;
    a1[2] = v10 + v8;
    return a1;
  }
}
