char netnode_inited()
{
  char result; // al

  result = sub_3FB5F0();
  if ( result )
    return **(_QWORD **)(qword_2CCB598 + 1736) != 0;
  return result;
}
