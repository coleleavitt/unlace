__int64 __fastcall sub_59C070(int **a1, int **a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx

  v2 = **a1;
  v3 = **a2;
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      v5 = *((_DWORD *)a1 + 2);
      v6 = *((_DWORD *)a2 + 2);
      result = 0xFFFFFFFFLL;
      if ( v5 >= v6 )
        return v6 < v5;
    }
  }
  return result;
}

