__int64 __fastcall sub_F99460(__int64 *a1, unsigned int a2)
{
  int v2; // edx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 i; // rdx

  v2 = *((_DWORD *)a1 + 42);
  if ( a2 < v2 + 1499 )
  {
    result = *a1;
    if ( a2 > 0x5DA )
    {
      result = a1[7];
      a2 -= 1499;
    }
  }
  else
  {
    result = a1[14];
    a2 = a2 - 1499 - v2;
  }
  v4 = *(_QWORD *)(result + 16);
  for ( i = result + 40; a2 >= v4; v4 = *(_QWORD *)(i - 24) )
  {
    result = i;
    i += 40;
    a2 -= v4;
  }
  return result;
}

