void __fastcall sub_3EFDB0(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  if ( a1 )
  {
    v1 = (_QWORD *)(qword_8D14A0 + 8 * xmmword_8D14A8);
    if ( (_QWORD *)qword_8D14A0 == v1 )
      goto LABEL_9;
    v2 = (_QWORD *)qword_8D14A0;
    while ( *v2 != a1 )
    {
      if ( v1 == ++v2 )
        goto LABEL_9;
    }
    if ( v1 == v2 )
    {
LABEL_9:
      if ( *((_QWORD *)&xmmword_8D14A8 + 1) < (unsigned __int64)(xmmword_8D14A8 + 1) )
      {
        qword_8D14A0 = qvector_reserve(&qword_8D14A0, qword_8D14A0, xmmword_8D14A8 + 1, 8);
        v1 = (_QWORD *)(qword_8D14A0 + 8 * xmmword_8D14A8);
      }
      *v1 = a1;
      *(_QWORD *)&xmmword_8D14A8 = xmmword_8D14A8 + 1;
    }
  }
}
