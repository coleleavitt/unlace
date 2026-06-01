__int64 __fastcall sub_15428D0(__int64 a1)
{
  void **v1; // r12
  void **v2; // rbx

  v1 = *(void ***)(a1 + 216);
  v2 = *(void ***)(a1 + 208);
  *(_QWORD *)a1 = &off_2BE8D00;
  if ( v1 != v2 )
  {
    do
    {
      while ( *v2 )
      {
        operator delete(*v2);
        v2 += 3;
        if ( v1 == v2 )
          goto LABEL_4;
      }
      v2 += 3;
    }
    while ( v1 != v2 );
LABEL_4:
    v2 = *(void ***)(a1 + 208);
  }
  if ( v2 )
    operator delete(v2);
  operator delete(*(_QWORD *)(a1 + 184), 8LL * *(unsigned int *)(a1 + 200), 4);
  return operator delete(*(_QWORD *)(a1 + 160), 8LL * *(unsigned int *)(a1 + 176), 4);
}
