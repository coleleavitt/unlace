void __fastcall sub_3C6650(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  _QWORD *v4; // rax
  bool v5; // zf
  void **v6; // rbx
  void **v7; // r12
  void *v8; // rdi

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_3C6650(a1, v2[3]);
      v4 = v2;
      v2 = (_QWORD *)v2[2];
      *v4 = *(_QWORD *)(a1 + 24);
      v5 = (*(_QWORD *)(a1 + 48))-- == 1;
      *(_QWORD *)(a1 + 24) = v4;
      if ( v5 )
      {
        v6 = *(void ***)a1;
        v7 = (void **)(*(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8));
        if ( *(void ***)a1 != v7 )
        {
          do
          {
            v8 = *v6++;
            qfree(v8);
          }
          while ( v7 != v6 );
          v7 = *(void ***)a1;
        }
        if ( v7 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree(v7);
          *(_QWORD *)a1 = 0;
          *(_QWORD *)(a1 + 16) = 0;
        }
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 24) = 0;
      }
    }
    while ( v2 );
  }
}

