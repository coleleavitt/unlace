__int64 netnode_is_available()
{
  __int64 v0; // rdx
  __int64 result; // rax

  v0 = **(_QWORD **)(qword_2CCB598 + 1736);
  result = 0;
  if ( v0 )
    return *(unsigned __int8 *)(v0 + 5804);
  return result;
}
