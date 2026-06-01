void __fastcall sub_3C5760(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = a1[2];
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_3C52F0(*(_QWORD **)(v2 + 24), a2);
    v4 = *(_QWORD *)(v2 + 96);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[13] = 0;
      qfree(v4, a2);
    }
    v5 = v3[9];
    if ( v5 )
    {
      v3[10] = 0;
      qfree(v5, a2);
    }
    v6 = v3[6];
    if ( v6 )
    {
      v3[7] = 0;
      qfree(v6, a2);
    }
    a2 = (const char *)&qword_80;
    operator delete(v3, 0x80u);
  }
}
