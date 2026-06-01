_QWORD *__fastcall sub_123440(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rbx
  _QWORD *result; // rax

  v2 = a1;
  v3 = a2;
  if ( a2 < a1 )
  {
    v2 = a2;
    v3 = a1;
  }
  result = (_QWORD *)getseg();
  if ( !result || *result != v2 )
    goto LABEL_7;
  do
  {
    if ( v3 < result[1] )
      break;
    del_segm();
LABEL_7:
    result = (_QWORD *)get_next_seg();
  }
  while ( result );
  return result;
}

