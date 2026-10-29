_QWORD *__fastcall sub_53C4A0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rdi

  v3 = a1[14];
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_53BFC0(*(_QWORD **)(v3 + 24), a2);
    v5 = *(_QWORD *)(v3 + 32);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[5] = 0;
      qfree(v5, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v4, 0x40u);
  }
  a1[14] = 0;
  a1[15] = a1 + 13;
  a1[16] = a1 + 13;
  a1[17] = 0;
  return a1 + 13;
}
