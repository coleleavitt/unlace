/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C740
// Address: 0x000000000048C740

//----- (000000000048C740) ----------------------------------------------------
char *__fastcall sub_48C740(unsigned __int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // x21
  char *v4; // x22
  bool v5; // zf
  char *v6; // x19
  char *v7; // x20
  int v8; // w0

  if ( a2 < 0 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(1225);
    __break(0x3E8u);
    return sub_490D08((char *)a1, a2, *(FILE **)(v3 + 8));
  }
  v4 = (char *)a1;
  v3 = (__int64)a3;
  if ( a3 )
    v5 = a1 == 0;
  else
    v5 = 1;
  if ( v5 )
    return nullptr;
  if ( *a3 <= 1 )
    return sub_490D08((char *)a1, a2, *(FILE **)(v3 + 8));
  if ( !a2 )
    return nullptr;
  v6 = (char *)a1;
  v7 = (char *)(a1 + a2 - 1);
  if ( a1 < (unsigned __int64)v7 )
  {
    while ( 1 )
    {
      v8 = sub_48C6F0(v3);
      if ( v8 == -1 )
        break;
      if ( v8 == 10 )
      {
        if ( v4 < v6 )
          v6 -= *(v6 - 1) == 13;
        *v6++ = 10;
        goto LABEL_14;
      }
      *v6++ = v8;
      if ( v7 == v6 )
        goto LABEL_14;
    }
    if ( v4 == v6 )
      return nullptr;
  }
LABEL_14:
  *v6 = 0;
  return v4;
}
// 48C7E4: variable 'v3' is possibly undefined
// 52451C: using guessed type char under_debugger;
