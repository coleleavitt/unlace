_QWORD *__fastcall cryptex_init(_QWORD *result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x8
  _QWORD *v5; // x10

  v4 = 0;
  result[1] = a3;
  result[2] = a4;
  *result = a2;
  do
  {
    v5 = &result[v4];
    v5[4] = 0;
    *((_DWORD *)v5 + 10) = -1;
    v4 += 2;
  }
  while ( v4 != 8 );
  return result;
}
