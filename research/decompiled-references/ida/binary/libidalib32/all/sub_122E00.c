_DWORD *__fastcall sub_122E00(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  _DWORD *result; // rax

  v2 = a1;
  v3 = a2;
  if ( a2 < a1 )
  {
    v2 = a2;
    v3 = a1;
  }
  result = (_DWORD *)getseg();
  if ( !result || *result != v2 )
    goto LABEL_7;
  do
  {
    if ( v3 < result[1] )
      break;
    del_segm();
LABEL_7:
    result = (_DWORD *)get_next_seg();
  }
  while ( result );
  return result;
}

