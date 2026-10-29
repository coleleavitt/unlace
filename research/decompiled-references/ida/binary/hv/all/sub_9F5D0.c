_WORD *__fastcall sub_9F5D0(__int64 a1)
{
  unsigned int v1; // edx
  _WORD *v2; // rax
  _WORD *v3; // r9
  __int16 v4; // cx
  _WORD *result; // rax
  _WORD *v6; // r8
  __int16 v7; // cx

  v1 = *(_DWORD *)(a1 + 80);
  v2 = (_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 132));
  v3 = &v2[~(unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 132) - 1)];
  do
  {
    v4 = *--v2 - v1;
    if ( v1 > (unsigned __int16)*v2 )
      v4 = 0;
    *v2 = v4;
  }
  while ( v2 != v3 );
  result = (_WORD *)(*(_QWORD *)(a1 + 112) + 2LL * v1);
  v6 = &result[~(unsigned __int64)(v1 - 1)];
  do
  {
    v7 = *--result - v1;
    if ( v1 > (unsigned __int16)*result )
      v7 = 0;
    *result = v7;
  }
  while ( result != v6 );
  return result;
}

