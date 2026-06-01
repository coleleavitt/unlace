void __fastcall sub_62FCA0(_QWORD *a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v2 = (__int64 *)a1[2];
  v3 = (__int64 *)a1[1];
  *a1 = &off_47CFF88;
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *v3;
        if ( !*v3 )
          break;
        ++v3;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *(v3 - 1) = 0;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      ++v3;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (__int64 *)a1[1];
  }
  if ( v3 )
    operator delete(v3, a1[3] - (_QWORD)v3);
  operator delete(a1, 0x28u);
}

