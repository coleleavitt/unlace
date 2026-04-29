__int64 *__fastcall sub_1BCC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rbx
  __int64 *result; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx

  v6 = (int *)a1[217];
  if ( !v6 || *v6 > 1 )
  {
    sub_1B8E0((__int64)(a1 + 217), 0, 0, 0, a5, a6);
    v6 = (int *)a1[217];
  }
  v7 = (__int64 *)a1[218];
  v8 = v7;
  if ( !v6 || *v6 > 1 )
  {
    sub_1B8E0((__int64)(a1 + 217), 0, 0, 0, a5, a6);
    v7 = (__int64 *)a1[218];
  }
  result = (__int64 *)a1[219];
  v10 = &v7[(_QWORD)result];
  if ( v8 != v10 )
  {
    result = v8;
    do
    {
      v11 = *result++;
      *(_BYTE *)(v11 + 17) = 1;
    }
    while ( result != v10 );
  }
  return result;
}
