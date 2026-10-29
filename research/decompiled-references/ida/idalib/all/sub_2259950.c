void __fastcall sub_2259950(_QWORD *a1)
{
  _QWORD *v2; // rdi
  volatile signed __int32 *v3; // rdi
  _QWORD *v4; // rdi
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rdi

  *a1 = &off_2C760D0;
  v2 = (_QWORD *)a1[10];
  if ( v2 != a1 + 12 )
    operator delete(v2);
  v3 = (volatile signed __int32 *)a1[9];
  if ( v3 && !_InterlockedSub(v3 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (_QWORD *)a1[5];
  if ( v4 != a1 + 7 )
    operator delete(v4);
  v5 = (__int64 *)a1[3];
  v6 = (__int64 *)a1[2];
  if ( v5 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        ++v6;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        if ( v5 == v6 )
          goto LABEL_11;
      }
      ++v6;
    }
    while ( v5 != v6 );
LABEL_11:
    v6 = (__int64 *)a1[2];
  }
  if ( v6 )
    operator delete(v6);
}
