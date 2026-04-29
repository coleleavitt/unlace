bool sub_356F0()
{
  bool result; // al
  __int16 v1; // [rsp+6Ch] [rbp-ACh]

  result = (unsigned int)getinf() == 11 && (netnode_check(), netnode_valobj() > 0) && (unsigned __int16)(v1 - 10) <= 3u;
  return result;
}
