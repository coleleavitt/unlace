bool __fastcall sub_3A53E0(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = *(_QWORD **)(a1 + 1648);
  if ( v3 )
  {
    v5 = (_QWORD *)(a1 + 1640);
    do
    {
      while ( 1 )
      {
        v6 = v3[2];
        v7 = v3[3];
        if ( v3[4] < a2 )
          break;
        v5 = v3;
        v3 = (_QWORD *)v3[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v3 = (_QWORD *)v3[3];
    }
    while ( v7 );
LABEL_6:
    v8 = -1;
    if ( v5 != (_QWORD *)(a1 + 1640) && a2 >= v5[4] )
      v8 = v5[5] - 1LL;
  }
  else
  {
    v8 = -1;
  }
  *a3 = v8;
  sub_3A50F0(a1 + 1632, a2);
  return *a3 != -1;
}
