__int64 sub_20C0B40()
{
  __int64 v1; // rbx

  if ( qword_2CFDB10 )
  {
    if ( *(_QWORD *)(qword_2CFDB10 + 48) )
      goto LABEL_3;
LABEL_6:
    v1 = sub_22527D0((void *)"pass", (size_t)&byte_4);
    if ( !qword_2CFDB10 )
      sub_2230020(&qword_2CFDB10, sub_20C09E0, sub_20C0A30);
    *(_QWORD *)(qword_2CFDB10 + 48) = v1;
    if ( qword_2CFDB10 )
      goto LABEL_4;
    goto LABEL_9;
  }
  sub_2230020(&qword_2CFDB10, sub_20C09E0, sub_20C0A30);
  if ( !*(_QWORD *)(qword_2CFDB10 + 48) )
    goto LABEL_6;
LABEL_3:
  if ( qword_2CFDB10 )
  {
LABEL_4:
    qword_2CFDB00 = qword_2CFDB10;
    return qword_2CFDB10;
  }
LABEL_9:
  sub_2230020(&qword_2CFDB10, sub_20C09E0, sub_20C0A30);
  qword_2CFDB00 = qword_2CFDB10;
  return qword_2CFDB10;
}
