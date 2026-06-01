unsigned __int64 *__fastcall get_prev_func(unsigned __int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 *result; // rax

  v2 = *(_QWORD *)(qword_2CCB598 + 1672) + 1704LL;
  while ( 1 )
  {
    v3 = sub_505E30(v2, a1);
    result = sub_505DE0(v2, v3);
    if ( !result || *((char *)result + 17) >= 0 )
      break;
    a1 = *result;
  }
  return result;
}
