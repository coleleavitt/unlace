unsigned int *__fastcall set_default_dataseg(unsigned __int32 a1)
{
  __int64 *v1; // r13
  unsigned int *result; // rax
  signed int v3; // r12d
  unsigned int *i; // rbx

  v1 = *(__int64 **)(qword_2CA1698 + 1480);
  result = (unsigned int *)v1[2];
  v3 = result[21];
  if ( v3 >= (int)result[17] && v3 <= (int)result[18] && v3 != result[20] )
  {
    result = sub_4EEBF0((__int64)(v1 + 194));
    for ( i = result; result; i = result )
    {
      result = (unsigned int *)sub_504650(*v1, i, v3, a1);
      if ( !(_BYTE)result )
        break;
      result = sub_4EE960((__int64)(v1 + 194), *i);
    }
  }
  return result;
}

