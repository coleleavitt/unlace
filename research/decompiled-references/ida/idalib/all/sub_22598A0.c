void __fastcall sub_22598A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 *v3; // r12
  __int64 *v4; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  *a1 = &off_2BEB770;
  v2 = (_QWORD *)a1[9];
  if ( v2 != a1 + 11 )
    operator delete(v2);
  v3 = (__int64 *)a1[7];
  v4 = (__int64 *)a1[6];
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
    v4 = (__int64 *)a1[6];
  }
  if ( v4 )
    operator delete(v4);
  v6 = (_QWORD *)a1[2];
  v7 = a1 + 4;
  *(v7 - 4) = &off_2BEB750;
  if ( v6 != v7 )
    operator delete(v6);
}
