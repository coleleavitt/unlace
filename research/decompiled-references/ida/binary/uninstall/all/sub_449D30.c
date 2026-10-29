_DWORD *__fastcall sub_449D30(int a1, int a2, __int64 a3)
{
  int v3; // r8d
  int v4; // edi
  _DWORD *result; // rax
  unsigned __int64 v6; // rcx
  int v7; // edx

  v3 = *(_DWORD *)(a3 + 80);
  v4 = a1 - *(_DWORD *)(a3 + 104);
  result = nullptr;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a3 + 120);
    result = (_DWORD *)(v6 + 28LL * v3 - 28);
    while ( (unsigned __int64)result >= v6 )
    {
      v7 = result[2];
      if ( v7 > v4 || result[3] + v7 <= v4 )
        goto LABEL_8;
      if ( *result == 1 || a2 == 3 )
        return result;
      if ( a2 == 4 )
      {
        if ( result[5] != -1 )
          return result;
        result -= 7;
      }
      else
      {
LABEL_8:
        result -= 7;
      }
    }
    return nullptr;
  }
  return result;
}

