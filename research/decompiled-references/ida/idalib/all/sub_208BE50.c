void __fastcall sub_208BE50(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &off_2C721A0;
  v3 = v2 + 80LL * *(unsigned int *)(a1 + 88);
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 80;
        v4 = *(void **)(v3 + 32);
        if ( v4 != (void *)(v3 + 48) )
          operator delete(v4);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        if ( v2 == v3 )
          goto LABEL_6;
      }
    }
    while ( v2 != v3 );
LABEL_6:
    v3 = *(_QWORD *)(a1 + 80);
  }
  if ( v3 != a1 + 96 )
    free((void *)v3);
}
