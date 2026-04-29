__int64 __fastcall os_log_simple_type_from_asl(int a1)
{
  unsigned int v1; // w8

  if ( a1 <= 0 )
    v1 = 0;
  else
    v1 = a1;
  if ( v1 >= 7 )
    v1 = 7;
  return os_log_simple_type_from_asl__level2ostype[v1];
}
