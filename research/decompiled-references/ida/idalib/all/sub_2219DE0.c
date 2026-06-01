__int64 __fastcall sub_2219DE0(std::_V2 *a1, const char **a2, _QWORD *a3)
{
  __int64 result; // rax
  const char *v4; // r12
  _QWORD *v5; // rcx

  if ( a3 )
  {
    if ( *a3 )
      return 0;
    v4 = *a2;
    v5 = a3;
  }
  else
  {
    v4 = *a2;
    v5 = nullptr;
  }
  if ( !(unsigned __int8)sub_2219A70(a1, v4, 4, v5) )
    return 0;
  result = *(unsigned int *)&v4[*(_QWORD *)a1];
  if ( *((_BYTE *)a1 + 16) != 1 )
    result = _byteswap_ulong(result);
  *a2 += 4;
  return result;
}
