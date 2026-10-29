__int64 __fastcall sub_40F640(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rax
  _QWORD *v8; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax

  v6 = *(_QWORD **)(a2 + 72);
  if ( v6 )
  {
    v8 = (_QWORD *)(a2 + 64);
    v11 = (_QWORD *)(a2 + 64);
    do
    {
      while ( 1 )
      {
        v12 = v6[2];
        v13 = v6[3];
        if ( v6[4] < a3 )
          break;
        v11 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v12 )
          goto LABEL_6;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v13 );
LABEL_6:
    if ( v8 == v11 || (v14 = v11[4], v14 >= a3 + a4) )
    {
      *(_QWORD *)a1 = -1;
      return 0;
    }
    else
    {
      if ( a5 )
        *a5 = v14;
      if ( a6 )
        *a6 += a3 - v14;
      *(_QWORD *)a1 = v11[5];
      *(_BYTE *)(a1 + 8) = *((_BYTE *)v11 + 48);
      return 1;
    }
  }
  else
  {
    *(_QWORD *)a1 = -1;
    return 0;
  }
}
