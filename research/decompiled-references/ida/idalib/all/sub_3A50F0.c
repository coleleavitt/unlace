void __fastcall sub_3A50F0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *i; // rdx
  __int64 v7; // r10
  __int64 v8; // r9

  v2 = *(_QWORD **)(a1 + 16);
  v3 = a1 + 8;
  while ( 1 )
  {
    if ( !v2 )
    {
LABEL_5:
      sub_3A4E90(a1, v3, v3);
      return;
    }
    while ( 1 )
    {
      v4 = v2[4];
      if ( v4 >= a2 )
        break;
      v2 = (_QWORD *)v2[3];
      if ( !v2 )
        goto LABEL_5;
    }
    v5 = (_QWORD *)v2[2];
    if ( a2 >= v4 )
      break;
    v3 = (__int64)v2;
    v2 = (_QWORD *)v2[2];
  }
  for ( i = (_QWORD *)v2[3]; i; i = (_QWORD *)i[2] )
  {
    while ( 1 )
    {
      v7 = i[3];
      if ( a2 < i[4] )
        break;
      i = (_QWORD *)i[3];
      if ( !v7 )
        goto LABEL_12;
    }
    v3 = (__int64)i;
  }
LABEL_12:
  while ( v5 )
  {
    while ( 1 )
    {
      v8 = v5[3];
      if ( v5[4] >= a2 )
        break;
      v5 = (_QWORD *)v5[3];
      if ( !v8 )
        goto LABEL_15;
    }
    v2 = v5;
    v5 = (_QWORD *)v5[2];
  }
LABEL_15:
  sub_3A4E90(a1, (__int64)v2, v3);
}
