void __fastcall sub_20B290(unsigned int a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = qword_8CB680;
  byte_8CB698 = 0;
  if ( qword_8CB680 )
  {
    v4 = xmmword_8CB688;
    if ( (_QWORD)xmmword_8CB688 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + 32 * v5;
        if ( *(int *)v6 >= -1 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( v7 )
          {
            *(_QWORD *)(v6 + 16) = 0;
            qfree(v7, a2);
            v3 = qword_8CB680;
          }
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&xmmword_8CB688 = 0;
    qfree(v3, a2);
    qword_8CB680 = 0;
    *((_QWORD *)&xmmword_8CB688 + 1) = 0;
  }
  if ( (_BYTE)a2 )
  {
    sub_24F550(a1);
    dword_8CC55C |= 1u;
  }
}
