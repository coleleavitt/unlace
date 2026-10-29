int *get_current_config()
{
  char v0; // dl
  int *result; // rax

  v0 = netnode_inited();
  result = &dword_2CA2120;
  if ( v0 )
    return (int *)(*(_QWORD *)(qword_2CA1698 + 1480) + 40LL);
  return result;
}

