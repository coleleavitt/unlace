__int64 get_local_types_tlc()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = *(_QWORD *)(qword_2CA1698 + 1464);
  result = *(_QWORD *)(v0 + 64);
  if ( !result )
  {
    result = create_tlc_for_til(0, 1);
    *(_QWORD *)(v0 + 64) = result;
  }
  return result;
}

