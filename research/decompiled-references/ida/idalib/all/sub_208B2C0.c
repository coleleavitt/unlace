__int64 *__fastcall sub_208B2C0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *result; // rax
  __int64 v4; // rdx

  result = (__int64 *)(a1 + 8);
  if ( a3 )
    result = *(__int64 **)(a1 + 16);
  v4 = *result;
  a2[1] = result;
  *a2 = v4;
  *(_QWORD *)(v4 + 8) = a2;
  *result = (__int64)a2;
  a2[2] = a1;
  return result;
}
