__int64 __fastcall sub_BE8B0(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v3; // rdi
  __int64 v4; // rdx

  result = (unsigned int)dword_252588;
  if ( dword_252588 )
  {
    v3 = (unsigned int *)qword_252590;
    v4 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 == v4 )
      return 0;
    while ( dword_252588 != *v3 )
    {
      v3 += 64;
      if ( (unsigned int *)v4 == v3 )
        return 0;
    }
    return v3 && sub_A2380(v3, 1u, *(_DWORD *)(a1 + 32), 0);
  }
  return result;
}

