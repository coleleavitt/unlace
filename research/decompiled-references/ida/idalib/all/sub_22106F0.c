_QWORD *__fastcall sub_22106F0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  v2 = sub_22103C0();
  v3 = v2;
  if ( !*(_BYTE *)(v2 + 140) )
    goto LABEL_10;
  v4 = *(_QWORD **)(v2 + 120);
  v5 = *(unsigned int *)(v2 + 132);
  v6 = &v4[v5];
  if ( v4 != v6 )
  {
    result = *(_QWORD **)(v2 + 120);
    if ( a1 == *v4 )
      goto LABEL_9;
    do
    {
      if ( v6 == ++result )
        break;
    }
    while ( a1 != *result );
  }
  if ( (unsigned int)v5 < *(_DWORD *)(v3 + 128) )
  {
    *(_DWORD *)(v3 + 132) = v5 + 1;
    *v6 = a1;
    v4 = *(_QWORD **)(v3 + 120);
    result = &v4[v5];
  }
  else
  {
LABEL_10:
    result = (_QWORD *)sub_2236760(v3 + 120, a1);
    v4 = *(_QWORD **)(v3 + 120);
    if ( !*(_BYTE *)(v3 + 140) )
    {
      v8 = &v4[*(unsigned int *)(v3 + 128)];
      goto LABEL_12;
    }
  }
LABEL_9:
  v8 = &v4[*(unsigned int *)(v3 + 132)];
LABEL_12:
  if ( v8 != result && *result >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++result;
    do
    {
      v9 = result;
      if ( v8 == result )
        break;
      ++result;
    }
    while ( *v9 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
