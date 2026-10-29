_QWORD *__fastcall sub_17005F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rdi
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v2 + 420) )
    goto LABEL_10;
  v3 = *(_QWORD **)(v2 + 400);
  v4 = *(unsigned int *)(v2 + 412);
  v5 = &v3[v4];
  if ( v3 != v5 )
  {
    result = *(_QWORD **)(v2 + 400);
    if ( a2 == *v3 )
      goto LABEL_9;
    do
    {
      if ( v5 == ++result )
        break;
    }
    while ( a2 != *result );
  }
  if ( (unsigned int)v4 < *(_DWORD *)(v2 + 408) )
  {
    *(_DWORD *)(v2 + 412) = v4 + 1;
    *v5 = a2;
    v3 = *(_QWORD **)(v2 + 400);
    result = &v3[v4];
  }
  else
  {
LABEL_10:
    result = (_QWORD *)sub_2236760(v2 + 400, a2);
    v3 = *(_QWORD **)(v2 + 400);
    if ( !*(_BYTE *)(v2 + 420) )
    {
      v7 = &v3[*(unsigned int *)(v2 + 408)];
      goto LABEL_12;
    }
  }
LABEL_9:
  v7 = &v3[*(unsigned int *)(v2 + 412)];
LABEL_12:
  if ( v7 != result && *result >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++result;
    do
    {
      v8 = result;
      if ( v7 == result )
        break;
      ++result;
    }
    while ( *v8 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
