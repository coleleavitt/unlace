unsigned __int64 *__fastcall set_default_dataseg(__int64 a1)
{
  __int64 *v1; // r13
  unsigned __int64 *result; // rax
  signed int v3; // r12d
  unsigned __int64 *i; // rbx

  v1 = *(__int64 **)(qword_2CCB598 + 1672);
  result = (unsigned __int64 *)v1[2];
  v3 = *((_DWORD *)result + 21);
  if ( v3 >= *((_DWORD *)result + 17) && v3 <= *((_DWORD *)result + 18) && v3 != *((_DWORD *)result + 20) )
  {
    result = sub_506150((__int64)(v1 + 203));
    for ( i = result; result; i = result )
    {
      result = (unsigned __int64 *)sub_51C570(*v1, i, v3, a1);
      if ( !(_BYTE)result )
        break;
      result = sub_505EB0((__int64)(v1 + 203), *i);
    }
  }
  return result;
}
