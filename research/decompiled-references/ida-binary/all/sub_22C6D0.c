__int64 __fastcall sub_22C6D0(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v3; // rdi
  __int64 v4; // rdx

  result = (unsigned int)dword_8CC428;
  if ( (_DWORD)dword_8CC428 )
  {
    v3 = (unsigned int *)qword_8CC430;
    v4 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 == v4 )
      return 0;
    while ( (_DWORD)dword_8CC428 != *v3 )
    {
      v3 += 64;
      if ( (unsigned int *)v4 == v3 )
        return 0;
    }
    return v3 && sub_210D40(v3, 1u, *(_DWORD *)(a1 + 32), 0);
  }
  return result;
}
