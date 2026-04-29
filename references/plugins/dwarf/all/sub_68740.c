void __fastcall sub_68740(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax

  v3 = (_QWORD *)a1[11];
  if ( v3 )
  {
    v4 = a1 + 10;
    v6 = v4;
    do
    {
      while ( 1 )
      {
        v7 = v3[2];
        v8 = v3[3];
        if ( v3[4] >= a2 )
          break;
        v3 = (_QWORD *)v3[3];
        if ( !v8 )
          goto LABEL_6;
      }
      v6 = v3;
      v3 = (_QWORD *)v3[2];
    }
    while ( v7 );
LABEL_6:
    if ( v4 != v6 && a2 >= v6[4] )
    {
      v9 = a1[16];
      v10 = v6[5];
      v11 = a1[15];
      if ( a1[17] < (unsigned __int64)(v9 + 1) )
      {
        v12 = qvector_reserve(a1 + 15, v11, v9 + 1, 8);
        a1[15] = v12;
        v11 = v12;
        v9 = a1[16];
      }
      *(_QWORD *)(v11 + 8 * v9) = v10;
      ++a1[16];
      sub_685C0(a1 + 9, a2);
    }
  }
}
