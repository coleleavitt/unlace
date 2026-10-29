_QWORD *__fastcall sub_86B580(unsigned int *a1, int a2, __int64 a3)
{
  _QWORD *result; // rax
  int v4; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rdx

  result = (_QWORD *)*a1;
  if ( !(_DWORD)result )
  {
    v4 = a2 >> 4;
    a1[36] = 0;
    do
    {
      LODWORD(result) = (_DWORD)result + 1;
      v4 >>= 4;
    }
    while ( v4 );
    if ( (_DWORD)result )
    {
      if ( (int)result > 2 )
      {
        result = sub_867CC0((__int64)a1, 1u, 3, 0, 15, 0);
        if ( result )
        {
          *(_BYTE *)result = -119;
        }
        else if ( *a1 )
        {
          return result;
        }
      }
      result = sub_867CC0((__int64)a1, 1u, 1, 0, 3, 0);
      if ( result )
      {
        *(_BYTE *)result = -119;
        result = (_QWORD *)*a1;
        if ( (_DWORD)result )
          return result;
      }
      else if ( *a1 )
      {
        return result;
      }
    }
    result = sub_868B50((__int64)a1, 32);
    if ( result
      && ((*result = 0, result[2] = 4980737, result[3] = 0, (v6 = *((_QWORD **)a1 + 5)) == nullptr)
        ? (*((_QWORD *)a1 + 2) = result)
        : (*v6 = result),
          *((_QWORD *)a1 + 5) = result,
          result[3] = a3,
          v7 = *((_QWORD *)a1 + 15),
          result[1] = v7,
          *((_QWORD *)a1 + 15) = v7 + 13,
          (result = sub_867B60((__int64)a1, 1)) != nullptr) )
    {
      *(_BYTE *)result = -2;
    }
    else
    {
      *a1 = 2;
    }
  }
  return result;
}
