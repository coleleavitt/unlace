__int64 __fastcall sub_8A4D10(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi

  *(_QWORD *)a1 = off_2B14078;
  v2 = *(void **)(a1 + 160);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v2);
  }
  v3 = *(_QWORD *)(a1 + 128);
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_8A4990(*(_QWORD **)(v3 + 24));
    v5 = *(void **)(v3 + 32);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[5] = 0;
      qfree(v5);
    }
    operator delete(v4, 0x58u);
  }
  v6 = *(_QWORD *)(a1 + 80);
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_8A4990(*(_QWORD **)(v6 + 24));
    v8 = *(void **)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree(v8);
    }
    operator delete(v7, 0x58u);
  }
  sub_8A4C50(*(void **)(a1 + 32));
  return sub_7A9AB0((_QWORD *)a1);
}

