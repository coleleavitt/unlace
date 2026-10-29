__int64 __fastcall sub_40F6E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v6 = *(_QWORD **)(a2 + 72);
  v7 = (_QWORD *)(a2 + 64);
  if ( !v6 )
    goto LABEL_15;
  v10 = v7;
  do
  {
    while ( 1 )
    {
      v11 = v6[4];
      if ( a3 < v11 || v11 >= a3 && *(_QWORD *)a1 < v6[5] )
        break;
      v6 = (_QWORD *)v6[3];
      if ( !v6 )
        goto LABEL_8;
    }
    v10 = v6;
    v6 = (_QWORD *)v6[2];
  }
  while ( v6 );
LABEL_8:
  if ( v7 == v10 || (v12 = v10[4], v12 >= a3 + a4) )
  {
LABEL_15:
    *(_QWORD *)a1 = -1;
    return 0;
  }
  else
  {
    if ( a5 )
      *a5 = v12;
    if ( a6 )
      *a6 += a3 - v12;
    *(_QWORD *)a1 = v10[5];
    *(_BYTE *)(a1 + 8) = *((_BYTE *)v10 + 48);
    return 1;
  }
}
