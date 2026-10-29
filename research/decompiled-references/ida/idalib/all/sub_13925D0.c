void __fastcall sub_13925D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 *v5; // rbx
  __int64 v6; // rdi

  *a1 = &off_2C440B0;
  v2 = a1[6];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[5];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (__int64 *)a1[3];
  v5 = (__int64 *)a1[2];
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        if ( v4 == v5 )
          goto LABEL_8;
      }
      ++v5;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = (__int64 *)a1[2];
  }
  if ( v5 )
    operator delete(v5);
}
