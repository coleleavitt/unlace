__int64 sub_2219840()
{
  __int64 result; // rax

  if ( !byte_2D0A7B8 )
    return 0;
  result = *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 280);
  if ( result )
    return *(_QWORD *)(result + 8);
  return result;
}
