void __fastcall sub_2BBCE0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rax

  *a1 = &off_4B4310;
  a1[8] = 0;
  switch_dbctx(*((int *)a1 + 2));
  sub_13BC80(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4B4258;
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v5 + v3);
        v8 = v7[4];
        *v7 = off_4B3CE8;
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8);
        }
        v3 = a1[5];
        v5 += 88;
      }
    }
    a1[6] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x58u);
}
