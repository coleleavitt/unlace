void __fastcall sub_69B00(_OWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi

  *(_QWORD *)a1 = &off_C88C0;
  a1[1] = 0;
  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
  {
    v3 = *((_QWORD *)a1 + 5);
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = v4 + v2;
        ++v5;
        v4 += 264;
        sub_1B750(v6);
        v2 = *((_QWORD *)a1 + 4);
      }
      while ( v3 != v5 );
    }
    *((_QWORD *)a1 + 5) = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
