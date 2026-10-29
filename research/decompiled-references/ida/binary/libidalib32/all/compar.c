__int64 __fastcall compar(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax

  result = 0;
  if ( *((_QWORD *)a2 + 1) != *((_QWORD *)a1 + 1) )
  {
    v3 = a2[2];
    if ( a1[2] == v3 )
    {
      result = 0xFFFFFFFFLL;
      if ( a1[3] >= a2[3] )
        return 1;
    }
    else
    {
      return a1[2] < v3 ? -1 : 1;
    }
  }
  return result;
}

