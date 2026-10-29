/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4632A0
// Address: 0x00000000004632A0

//----- (00000000004632A0) ----------------------------------------------------
void *__fastcall sub_4632A0(__int64 a1, char *s)
{
  char *v3; // x20
  size_t v4; // x23
  unsigned __int64 v5; // x19
  unsigned __int64 v6; // x22
  __int64 v7; // x3
  char *v8; // x0
  char *v9; // x0

  if ( s )
  {
    v3 = s;
    v4 = strlen(s) + 1;
  }
  else
  {
    v4 = 1;
    v3 = &byte_4B31F0;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v5 + v4;
  if ( v5 <= v5 + v4 )
  {
    if ( v5 >= v5 + v4 )
      return memcpy((void *)(*(_QWORD *)a1 + v5), v3, v4);
  }
  else
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v5 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      return memcpy((void *)(*(_QWORD *)a1 + v5), v3, v4);
    }
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v6 )
  {
    v8 = (char *)sub_491288(a1, *(void **)a1, v6, 1u);
    *(_QWORD *)a1 = v8;
    v7 = *(_QWORD *)(a1 + 8);
  }
  memset(&v8[v7], 0, v6 - v7);
  v9 = *(char **)a1;
  *(_QWORD *)(a1 + 8) = v6;
  return memcpy(&v9[v5], v3, v4);
}
// 4B31F0: using guessed type char byte_4B31F0;
