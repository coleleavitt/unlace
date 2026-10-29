void __fastcall sub_20A0B50(_BYTE *a1)
{
  _QWORD **v1; // r11
  _QWORD **v2; // rbx
  _QWORD **v3; // rbp
  _QWORD **v4; // rbx

  v1 = (_QWORD **)a1;
  if ( (*a1 & 2) != 0 )
  {
    v3 = *((_QWORD ***)a1 - 2);
    v4 = &v3[*((unsigned int *)a1 - 2)];
    if ( v3 != v4 )
    {
      do
      {
        while ( *--v4 )
        {
          sub_20A0850((__int64)v4, *v4);
          if ( v3 == v4 )
            goto LABEL_10;
        }
      }
      while ( v3 != v4 );
LABEL_10:
      v4 = (_QWORD **)*(v1 - 2);
    }
    if ( v4 != v1 )
      free(v4);
  }
  else
  {
    v2 = (_QWORD **)&a1[-8 * ((*a1 >> 2) & 0xF)];
    while ( v1 != v2 )
    {
      while ( *--v1 )
      {
        sub_20A0850((__int64)v1, *v1);
        if ( v1 == v2 )
          return;
      }
    }
  }
}
