_QWORD *__fastcall sub_53DBB0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // r9

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 16);
    v6 = (_QWORD *)(a1 + 8);
    do
    {
      while ( (int)QT::QtPrivate::compareStrings(v3[6], v3[5], v5, v4, 1, v3[6]) < 0 )
      {
        v3 = (_QWORD *)v3[3];
        if ( !v3 )
          goto LABEL_6;
      }
      v6 = v3;
      v3 = (_QWORD *)v3[2];
    }
    while ( v3 );
LABEL_6:
    if ( v2 != v6 && (int)QT::QtPrivate::compareStrings(v5, v4, v6[6], v6[5], 1, v7) >= 0 )
      return v6;
  }
  return v2;
}
