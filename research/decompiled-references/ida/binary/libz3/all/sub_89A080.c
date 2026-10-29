unsigned __int64 __fastcall sub_89A080(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 result; // rax
  int v4; // esi
  int v5; // edx
  int v6; // ecx

  *(_DWORD *)a1 = 0;
  result = *a2;
  *(_QWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    if ( result )
    {
      v4 = *(_DWORD *)(result - 4);
      v5 = 0;
      result += 32LL;
      while ( v5 != v4 )
      {
        v6 = *(_DWORD *)result;
        ++v5;
        result += 40LL;
        if ( v6 != -1 )
          break;
        *(_DWORD *)a1 = v5;
      }
    }
  }
  else if ( result )
  {
    result = *(unsigned int *)(result - 4);
    *(_DWORD *)a1 = result;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    return 0;
  }
  return result;
}

