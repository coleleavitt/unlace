int *get_current_config()
{
  char v0; // dl
  int *result; // rax

  v0 = netnode_inited();
  result = &dword_2CCC020;
  if ( v0 )
    return (int *)(*(_QWORD *)(qword_2CCB598 + 1672) + 40LL);
  return result;
}
