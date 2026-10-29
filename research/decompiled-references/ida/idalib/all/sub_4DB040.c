void __fastcall sub_4DB040(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rbx

  v5 = *(_QWORD **)(*(_QWORD *)a1 + 1720LL);
  if ( !a2 && a3 == -1 )
  {
    v10 = (_QWORD *)v5[15];
    if ( (unsigned __int8)sub_4D5E80(v10, v5 + 13, 137) )
      sub_4DA510((__int64)(v5 + 12), (__int64)v10, (__int64)(v5 + 13));
    v11 = v5[21];
    if ( (unsigned __int8)sub_4D6410(v11, (__int64)(v5 + 19), 134) )
      sub_4DA450((__int64)(v5 + 18), v11, (__int64)(v5 + 19));
  }
  else if ( a2 < a3 )
  {
    v6 = (_QWORD *)v5[14];
    v7 = v5 + 13;
    if ( v6 )
    {
      v8 = v5 + 13;
      v9 = (_QWORD *)v5[14];
      do
      {
        if ( v9[4] < a2 )
        {
          v9 = (_QWORD *)v9[3];
        }
        else
        {
          v8 = v9;
          v9 = (_QWORD *)v9[2];
        }
      }
      while ( v9 );
      do
      {
        if ( v6[4] < a3 )
        {
          v6 = (_QWORD *)v6[3];
        }
        else
        {
          v7 = v6;
          v6 = (_QWORD *)v6[2];
        }
      }
      while ( v6 );
      for ( ; v8 != v7; v8 = (_QWORD *)sub_4D5DE0((__int64)v5, v8) )
        ;
    }
  }
}
