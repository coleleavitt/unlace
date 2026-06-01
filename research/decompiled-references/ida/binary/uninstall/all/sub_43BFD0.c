__int64 __fastcall sub_43BFD0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _BYTE *v5; // rax
  __int64 result; // rax
  int v7; // edx

  if ( a3 == 1 && *(_DWORD *)a2 == 4 )
    return sub_43ADB0(a1, *(const char **)(a2 + 8), *(_DWORD *)(a2 + 16), a4);
  sub_4399D0(a1, (_DWORD *)a2, a3, a4);
  v5 = *(_BYTE **)(a4 + 120);
  if ( v5 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v5 = *(_BYTE **)(a4 + 120);
  }
  *v5 = 8;
  *(_DWORD *)(a4 + 3276) = 0;
  result = (unsigned int)dword_65450C;
  ++*(_QWORD *)(a4 + 120);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 0x80000000 )
    {
      v7 = *(_DWORD *)(a4 + 48);
      LODWORD(result) = 1;
    }
    else if ( (int)result < 0 )
    {
      v7 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v7 )
      {
        result = (unsigned int)(v7 + result);
        *(_DWORD *)(a4 + 44) = v7;
        *(_DWORD *)(a4 + 48) = result;
        return result;
      }
    }
    else
    {
      v7 = *(_DWORD *)(a4 + 48);
    }
    result = (unsigned int)(v7 + result);
    *(_DWORD *)(a4 + 48) = result;
  }
  return result;
}

