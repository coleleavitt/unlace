_DWORD *__fastcall sub_209EC40(int *a1, int *a2, int *a3, int *a4, _DWORD *a5)
{
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rsi
  _DWORD *result; // rax
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // r9

  while ( a2 != a1 && a4 != a3 )
  {
    while ( 1 )
    {
      v5 = *a3;
      if ( *a3 >= (unsigned int)*a1 )
        break;
      v6 = *((_QWORD *)a3 + 1);
      a3 += 4;
      *a5 = v5;
      a5 += 4;
      *((_QWORD *)a5 - 1) = v6;
      if ( a4 == a3 || a2 == a1 )
        goto LABEL_6;
    }
    v14 = *((_QWORD *)a1 + 1);
    a5 += 4;
    *(a5 - 4) = *a1;
    a1 += 4;
    *((_QWORD *)a5 - 1) = v14;
  }
LABEL_6:
  v7 = (char *)a2 - (char *)a1;
  result = a5;
  v9 = v7 >> 4;
  if ( v7 > 0 )
  {
    do
    {
      v10 = *a1;
      result += 4;
      a1 += 4;
      *(result - 4) = v10;
      *((_QWORD *)result - 1) = *((_QWORD *)a1 - 1);
      --v9;
    }
    while ( v9 );
  }
  v11 = (char *)a4 - (char *)a3;
  v12 = v11 >> 4;
  if ( v11 > 0 )
  {
    do
    {
      v13 = *a3;
      result += 4;
      a3 += 4;
      *(result - 4) = v13;
      *((_QWORD *)result - 1) = *((_QWORD *)a3 - 1);
      --v12;
    }
    while ( v12 );
  }
  return result;
}
