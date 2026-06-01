void __fastcall sub_385260(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  _QWORD *v4; // rdi

  if ( a1 && (_QWORD)xmmword_8CF2A8 )
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD **)(qword_8CF2A0 + 8 * v3);
      if ( v4 )
      {
        if ( a1 == v4[3] )
          break;
      }
      v3 = ++v2;
      if ( v2 >= (unsigned __int64)xmmword_8CF2A8 )
        return;
    }
    sub_385020(v4);
  }
}
