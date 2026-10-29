void __fastcall sub_1C54310(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r13
  _QWORD *v7; // rdi

  v2 = a1 + 19;
  v3 = (_QWORD *)a1[17];
  if ( v3 != v2 )
    operator delete(v3);
  v4 = (_QWORD *)a1[13];
  if ( v4 != a1 + 15 )
    operator delete(v4);
  v5 = a1[9];
  if ( v5 )
  {
    do
    {
      sub_1069230((__int64)(a1 + 7), *(_QWORD **)(v5 + 24));
      v6 = *(_QWORD *)(v5 + 16);
      operator delete((void *)v5);
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (_QWORD *)a1[3];
  if ( v7 != a1 + 5 )
    free(v7);
}
