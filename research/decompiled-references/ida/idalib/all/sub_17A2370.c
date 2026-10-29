__int64 __fastcall sub_17A2370(unsigned int *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  unsigned int v4; // ebp

  result = *a1;
  if ( a1[4] )
  {
    v4 = 0;
    if ( (_DWORD)result == 5 )
      v4 = a1[1];
    *a1 = 2;
    result = sub_1A43500(a1);
    if ( *a1 == 5 )
    {
      a1[1] = v4;
      return result;
    }
  }
  else if ( (_DWORD)result != 1 )
  {
    *a1 = 0;
  }
  v3 = *((void **)a1 + 11);
  if ( v3 )
  {
    result = sub_1A39780(v3);
    *((_QWORD *)a1 + 11) = 0;
  }
  return result;
}
