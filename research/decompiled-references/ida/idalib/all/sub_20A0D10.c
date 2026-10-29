void __fastcall sub_20A0D10(_QWORD *a1)
{
  unsigned int *v1; // r12
  _QWORD **v3; // rbp
  _QWORD **v4; // r11
  unsigned int *v5; // rbp
  _QWORD *v6; // rdi
  unsigned int *v7; // r12
  unsigned int *v8; // r11
  _QWORD *v9; // rbx

  v1 = (unsigned int *)a1[7];
  v3 = *(_QWORD ***)v1;
  v4 = (_QWORD **)(*(_QWORD *)v1 + 8LL * v1[2]);
  if ( *(_QWORD ***)v1 == v4 )
  {
    v1[2] = 0;
    v5 = v1;
    goto LABEL_8;
  }
  do
  {
    while ( *--v4 )
    {
      sub_20A0850((__int64)v4, *v4);
      if ( v3 == v4 )
        goto LABEL_4;
    }
  }
  while ( v3 != v4 );
LABEL_4:
  v5 = (unsigned int *)a1[7];
  v1[2] = 0;
  if ( v5 )
  {
LABEL_8:
    v7 = *(unsigned int **)v5;
    v8 = (unsigned int *)(*(_QWORD *)v5 + 8LL * v5[2]);
    if ( *(unsigned int **)v5 != v8 )
    {
      do
      {
        while ( 1 )
        {
          v8 -= 2;
          if ( !*(_QWORD *)v8 )
            break;
          sub_20A0850((__int64)v8, *(_QWORD **)v8);
          if ( v7 == v8 )
          {
            v8 = *(unsigned int **)v5;
            goto LABEL_12;
          }
        }
      }
      while ( v7 != v8 );
      v8 = *(unsigned int **)v5;
    }
LABEL_12:
    if ( v8 != v5 + 4 )
      free(v8);
    v9 = a1 + 4;
    operator delete(v5, 0x30u);
    v6 = (_QWORD *)a1[2];
    if ( v6 != v9 )
      goto LABEL_6;
    return;
  }
  v6 = (_QWORD *)a1[2];
  if ( v6 != a1 + 4 )
LABEL_6:
    operator delete(v6);
}
