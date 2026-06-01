void __fastcall sub_22B350(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi

  v2 = a1[2];
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_22B090(*(_QWORD **)(v2 + 24), a2);
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree(v4, a2);
    }
    a2 = (const char *)&qword_58;
    operator delete(v3, 0x58u);
  }
}
