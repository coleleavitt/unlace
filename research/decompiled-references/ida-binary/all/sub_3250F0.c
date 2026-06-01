unsigned __int64 *__fastcall sub_3250F0(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 *result; // rax

  v3 = a1;
  v5 = a2;
  if ( a2 < a1 )
  {
    v3 = a2;
    v5 = a1;
  }
  result = (unsigned __int64 *)getseg(v3);
  if ( !result || *result != v3 )
    goto LABEL_7;
  do
  {
    if ( v5 < result[1] )
      break;
    v3 = *result;
    del_segm(*result, a3);
LABEL_7:
    result = (unsigned __int64 *)get_next_seg(v3);
  }
  while ( result );
  return result;
}
