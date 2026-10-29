__int64 __fastcall sub_2156C90(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 *v3; // r12
  __int64 *v4; // rbx
  __int64 v5; // rdi

  *a1 = &off_2BE95E0;
  v2 = (_QWORD *)a1[21];
  if ( v2 != a1 + 23 )
    operator delete(v2);
  v3 = (__int64 *)a1[16];
  v4 = (__int64 *)a1[15];
  *a1 = &off_2BE9620;
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( !*v4 )
          break;
        ++v4;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        if ( v3 == v4 )
          goto LABEL_6;
      }
      ++v4;
    }
    while ( v3 != v4 );
LABEL_6:
    v4 = (__int64 *)a1[15];
  }
  if ( v4 )
    operator delete(v4);
  return nullsub_1465(a1);
}
