void __fastcall sub_9C1B0(unsigned int a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax

  v3 = qword_250A80;
  byte_250A98 = 0;
  if ( qword_250A80 )
  {
    v4 = xmmword_250A88;
    if ( (_QWORD)xmmword_250A88 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + 32 * v5;
        if ( *(int *)v6 >= -1 && *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
          v3 = qword_250A80;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&xmmword_250A88 = 0;
    qfree();
    qword_250A80 = 0;
    *((_QWORD *)&xmmword_250A88 + 1) = 0;
  }
  if ( a2 )
  {
    sub_D2910(a1);
    dword_251538 |= 1u;
  }
}

