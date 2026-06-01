_QWORD *__fastcall sub_C770A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi

  v2 = a2 + 48;
  result = a1;
  v4 = a2 + 48;
  if ( *(_BYTE *)(a2 + 26) == 1 )
    v4 = a2 + 40;
  v5 = *(unsigned __int16 *)(a2 + 24);
  *a1 = v4;
  a1[1] = 0;
  a1[4] = 0;
  a1[3] = v2 + 8 * v5;
  return result;
}

