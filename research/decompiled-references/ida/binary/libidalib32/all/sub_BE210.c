__int64 __fastcall sub_BE210(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v3; // rdi
  unsigned int *v4; // rdx

  result = (unsigned int)dword_251408;
  if ( dword_251408 )
  {
    v3 = (unsigned int *)qword_251410;
    v4 = (unsigned int *)(qword_251410 + 232 * xmmword_251418);
    if ( (unsigned int *)qword_251410 == v4 )
      return 0;
    while ( dword_251408 != *v3 )
    {
      v3 += 58;
      if ( v4 == v3 )
        return 0;
    }
    return v3 && sub_A2020(v3, 1u, *(_DWORD *)(a1 + 32), 0);
  }
  return result;
}

