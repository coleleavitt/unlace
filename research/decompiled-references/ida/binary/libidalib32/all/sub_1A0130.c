__int64 __fastcall sub_1A0130(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rdi
  _QWORD *v5; // r13
  TView *v6; // rdi

  get_qerrno();
  LOBYTE(v1) = (_QWORD)xmmword_255E38 != 0;
  if ( !(_QWORD)xmmword_255E38 )
  {
    v3 = *(_QWORD *)(a1 + 8);
LABEL_3:
    sub_1A00D0(v3 + 136);
    goto LABEL_4;
  }
  *(_QWORD *)&xmmword_255E38 = xmmword_255E38 - 1;
  v5 = (_QWORD *)(qword_255E30 + 56 * xmmword_255E38);
  if ( v5[3] )
  {
    v5[4] = 0;
    qfree();
  }
  if ( *v5 )
  {
    v5[1] = 0;
    qfree();
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( !(_QWORD)xmmword_255E38 )
    goto LABEL_3;
  v6 = *(TView **)(v3 + 240);
  if ( v6 && *(int *)(a1 + 84) <= 0 )
    sub_19F8F0(v6, qword_255E30 + 56 * xmmword_255E38 - 56);
LABEL_4:
  sub_19F740();
  set_qerrno();
  return v1;
}

