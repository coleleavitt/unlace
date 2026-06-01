_QWORD *__fastcall sub_777D40(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rsi
  _QWORD *result; // rax

  v1 = 0;
  v2 = (unsigned int)++**(_DWORD **)a1;
  v3 = **(_QWORD **)(a1 + 16);
  if ( (unsigned int)v2 < (unsigned __int16)(*(_DWORD *)(v3 + 20) >> 6) )
    v1 = *(_QWORD *)(v3 + 8 * v2 + 48);
  result = *(_QWORD **)(a1 + 8);
  *result = v1;
  return result;
}

