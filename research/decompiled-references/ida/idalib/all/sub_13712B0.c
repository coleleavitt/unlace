__int64 __fastcall sub_13712B0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  void **v4; // r12
  void **v5; // rbx

  v2 = *(_BYTE *)(a1 + 24) == 0;
  *(_QWORD *)a1 = &off_2C439F8;
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *(void ***)(a1 + 32);
  v5 = &v4[4 * *(unsigned int *)(a1 + 40)];
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 4;
        if ( *v5 == v5 + 2 )
          break;
        operator delete(*v5);
        if ( v4 == v5 )
          goto LABEL_7;
      }
    }
    while ( v4 != v5 );
LABEL_7:
    v5 = *(void ***)(a1 + 32);
  }
  if ( v5 != (void **)(a1 + 48) )
    free(v5);
  return nullsub_670(a1);
}
