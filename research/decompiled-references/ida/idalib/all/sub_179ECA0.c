int *__fastcall sub_179ECA0(int *a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  unsigned int v3; // ecx
  int v4; // r9d
  __int64 v5; // rsi
  int *result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-34h]

  v1 = *(_QWORD *)(a1 + 1);
  v2 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = 0;
  v3 = *a1;
  v4 = a1[8];
  v8 = v1;
  v5 = *((_QWORD *)a1 + 3);
  result = a1 - 10;
  if ( *(a1 - 10) > (unsigned int)*a1 )
  {
    while ( 1 )
    {
      result[10] = *result;
      *(_QWORD *)(result + 11) = *(_QWORD *)(result + 1);
      result[18] = result[8];
      v7 = *((_QWORD *)result + 2);
      *((_QWORD *)result + 2) = 0;
      *((_QWORD *)result + 7) = v7;
      *((_QWORD *)result + 8) = *((_QWORD *)result + 3);
      if ( *(result - 10) <= v3 )
        break;
      result -= 10;
    }
  }
  else
  {
    result = a1;
  }
  *result = v3;
  result[8] = v4;
  *(_QWORD *)(result + 1) = v8;
  *((_QWORD *)result + 2) = v2;
  *((_QWORD *)result + 3) = v5;
  return result;
}
