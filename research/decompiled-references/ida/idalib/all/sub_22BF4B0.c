void __fastcall sub_22BF4B0(__int64 a1)
{
  _QWORD **v1; // rbp
  _QWORD **v2; // rbx

  v1 = *(_QWORD ***)a1;
  v2 = (_QWORD **)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD ***)a1 != v2 )
  {
    do
    {
      while ( *--v2 )
      {
        sub_20A0850((__int64)v2, *v2);
        if ( v2 == v1 )
          goto LABEL_4;
      }
    }
    while ( v2 != v1 );
LABEL_4:
    v2 = *(_QWORD ***)a1;
  }
  if ( v2 != (_QWORD **)(a1 + 16) )
    free(v2);
}
