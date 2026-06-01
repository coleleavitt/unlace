void __fastcall sub_9C6FF0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // r12
  void *v7; // rdi

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_9C6FF0(a1, v3[3]);
      v4 = v3[7];
      v5 = (_QWORD *)v3[2];
      if ( v4 )
      {
        do
        {
          sub_9C5E60((__int64)(v3 + 5), *(_QWORD **)(v4 + 24));
          v6 = *(_QWORD *)(v4 + 16);
          operator delete((void *)v4);
          v4 = v6;
        }
        while ( v6 );
      }
      v7 = v3;
      v3 = v5;
      operator delete(v7);
    }
    while ( v5 );
  }
}

