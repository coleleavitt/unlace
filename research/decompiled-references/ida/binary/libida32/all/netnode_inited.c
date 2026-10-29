char netnode_inited()
{
  char result; // al

  result = sub_3E8690();
  if ( result )
    return **(_QWORD **)(qword_2CA1698 + 1544) != 0;
  return result;
}

