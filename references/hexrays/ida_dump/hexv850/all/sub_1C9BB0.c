__int64 *__fastcall sub_1C9BB0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rcx
  __int64 *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax

  v3 = -1;
  if ( a2 )
    v3 = *a2;
  v5 = a1[185];
  if ( v5 )
  {
    if ( v5 != 1 )
      a1[185] = 1;
  }
  else
  {
    v9 = a1[184];
    if ( !a1[186] )
    {
      v10 = qvector_reserve(a1 + 184, v9, 1, 40);
      v5 = a1[185];
      a1[184] = v10;
      v9 = v10;
    }
    memset((void *)(v9 + 40 * v5), 0, 40 * (1 - v5));
    a1[185] = 1;
  }
  result = (__int64 *)a1[184];
  v7 = a1[17];
  v8 = a1[10];
  *result = v3;
  result[1] = 0;
  result[2] = v7;
  result[3] = a3;
  result[4] = v8;
  return result;
}
