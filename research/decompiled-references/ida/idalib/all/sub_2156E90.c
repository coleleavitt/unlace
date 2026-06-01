void __fastcall sub_2156E90(_QWORD *a1)
{
  __int64 *v2; // r12
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v2 = (__int64 *)a1[16];
  v3 = (__int64 *)a1[15];
  *a1 = &off_2BE9620;
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
        if ( v2 == v3 )
          goto LABEL_4;
      }
      ++v3;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (__int64 *)a1[15];
  }
  if ( v3 )
    operator delete(v3);
  nullsub_1465(a1);
  operator delete(a1, 0x90u);
}
