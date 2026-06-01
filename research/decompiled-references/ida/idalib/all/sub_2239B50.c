__int64 __fastcall sub_2239B50(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  int v5; // ecx

  v2 = *a1;
  v3 = 0xAAAAAAAAAAAAAAABLL * ((a1[1] - *a1) >> 3);
  result = (unsigned int)v3;
  if ( (_DWORD)v3 )
  {
    v5 = 0;
    while ( a2 < *(_QWORD *)(*(_QWORD *)v2 + 8LL) || a2 > *(_QWORD *)(*(_QWORD *)v2 + 16LL) )
    {
      ++v5;
      v2 += 24;
      if ( (_DWORD)result == v5 )
        return 0;
    }
    return (unsigned int)(v5 + 1);
  }
  return result;
}
