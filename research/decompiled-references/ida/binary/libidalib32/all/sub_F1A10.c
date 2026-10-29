__int64 __fastcall sub_F1A10(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx
  __int64 result; // rax

  *a1 = &unk_236180;
  v1 = (_QWORD *)qword_251620;
  v2 = (_QWORD *)(qword_251620 + 16 * xmmword_251628);
  if ( (_QWORD *)qword_251620 == v2 )
    goto LABEL_10;
  while ( a1 != (_QWORD *)v1[1] )
  {
    v1 += 2;
    if ( v2 == v1 )
      goto LABEL_10;
  }
  if ( !v1 )
  {
LABEL_10:
    if ( under_debugger )
      goto LABEL_14;
    interr();
LABEL_12:
    if ( !under_debugger )
    {
      interr();
      return nullsub_40(40840);
    }
LABEL_14:
    BUG();
  }
  if ( !*v1 )
    goto LABEL_12;
  *(_OWORD *)v1 = 0;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}

