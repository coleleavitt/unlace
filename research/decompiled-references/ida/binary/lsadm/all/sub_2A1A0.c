__int64 __fastcall sub_2A1A0(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v1 = qword_7BCB0;
  sub_2B4D0(qword_7BCB0);
  v3 = qword_7BCB8;
  if ( qword_7BCB8 )
  {
    v4 = *(_QWORD **)qword_7BCB8;
    v5 = *(_QWORD *)qword_7BCB8 + 8LL * *((_QWORD *)qword_7BCB8 + 1);
    if ( *(_QWORD *)qword_7BCB8 != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return sub_2B520(v1);
      }
      if ( (_QWORD *)v5 != v4 )
      {
        memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
        --v3[1];
      }
    }
  }
  return sub_2B520(v1);
}

