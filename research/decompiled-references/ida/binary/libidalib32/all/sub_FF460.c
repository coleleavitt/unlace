void sub_FF460()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rsi
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax

  v0 = xmmword_251788;
  if ( (_QWORD)xmmword_251788 )
  {
    v1 = qword_251780;
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(v1 + 8 * v3);
      if ( v4 )
        *(_QWORD *)(v4 + 1224) = -1;
      v3 = ++v2;
    }
    while ( v2 < v0 );
  }
}

