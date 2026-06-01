void __fastcall sub_9C2D0(unsigned int a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax

  v3 = qword_251B00;
  byte_251B18 = 0;
  if ( qword_251B00 )
  {
    v4 = xmmword_251B08;
    if ( (_QWORD)xmmword_251B08 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + 32 * v5;
        if ( *(int *)v6 >= -1 && *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
          v3 = qword_251B00;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&xmmword_251B08 = 0;
    qfree();
    qword_251B00 = 0;
    *((_QWORD *)&xmmword_251B08 + 1) = 0;
  }
  if ( a2 )
  {
    sub_D3E40(a1);
    dword_2526BC |= 1u;
  }
}

