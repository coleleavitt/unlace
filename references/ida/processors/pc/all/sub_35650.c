unsigned __int8 sub_35650()
{
  unsigned __int8 result; // al
  __int64 v1; // rax
  unsigned __int16 v2; // [rsp+6Ch] [rbp-ACh]

  if ( (unsigned int)getinf() != 11 )
    return 0;
  netnode_check();
  if ( netnode_valobj() <= 0 )
    return 0;
  result = 0;
  if ( v2 <= 9u )
  {
    v1 = 684;
    return _bittest64(&v1, v2);
  }
  return result;
}
