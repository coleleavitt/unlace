_QWORD *__fastcall sub_8C92E0(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = a1;
  v3 = a2 + 48;
  if ( *(_BYTE *)(a2 + 26) == 1 )
    v3 = a2 + 40;
  v4 = *(unsigned __int16 *)(a2 + 24);
  *a1 = v3;
  a1[1] = 0;
  a1[4] = 0;
  a1[3] = a2 + 8 * v4 + 48;
  return result;
}

