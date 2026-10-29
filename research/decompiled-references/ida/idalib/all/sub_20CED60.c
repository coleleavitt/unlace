char *__fastcall sub_20CED60(__int64 a1)
{
  char *v1; // r10
  char v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  char *v6; // rcx
  char *result; // rax

  v1 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= 1u )
    return nullptr;
  v2 = *v1;
  v3 = 62;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = (v4 + v3) >> 1;
      v6 = (char *)&unk_2BE6260 + 16 * v5;
      if ( *v6 < v2 )
      {
        v4 = v5 + 1;
        goto LABEL_7;
      }
      if ( *v6 == v2 && v6[1] < v1[1] )
        break;
      v3 = (v4 + v3) >> 1;
      if ( v5 == v4 )
        goto LABEL_8;
    }
    v4 = v5 + 1;
LABEL_7:
    ;
  }
  while ( v3 != v4 );
LABEL_8:
  result = (char *)&unk_2BE6260 + 16 * v3;
  if ( v2 != *result || result[1] != v1[1] )
    return nullptr;
  *(_QWORD *)a1 = v1 + 2;
  return result;
}
