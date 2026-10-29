void sub_FF640()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rsi
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax

  v0 = xmmword_252928;
  if ( (_QWORD)xmmword_252928 )
  {
    v1 = qword_252920;
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(v1 + 8 * v3);
      if ( v4 )
      {
        *(_QWORD *)(v4 + 1232) = -1;
        *(_DWORD *)(v4 + 1240) = -1;
      }
      v3 = ++v2;
    }
    while ( v2 < v0 );
  }
}

