/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AAA0
// Address: 0x000000000049AAA0

//----- (000000000049AAA0) ----------------------------------------------------
char *__fastcall sub_49AAA0(__int64 a1, char *a2, __int64 a3, double a4)
{
  char *v4; // x19
  unsigned __int64 v5; // x21
  __int64 *v8; // x20
  __int64 v9; // x0

  v4 = a2;
  v5 = (unsigned __int64)&a2[a3];
  v8 = *(__int64 **)a1;
  if ( 16LL * *(_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v9 = sub_49A8A0(v8, v4, v5 - (_QWORD)v4, a4);
      v8 += 2;
      v4 += v9;
      if ( v8 == (__int64 *)(*(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8)) )
        break;
      if ( *(__int64 **)a1 != v8 )
      {
        if ( v5 <= (unsigned __int64)v4 )
        {
          if ( !under_debugger )
            sub_492270(518);
          goto LABEL_9;
        }
        *v4++ = 44;
        if ( v5 <= (unsigned __int64)v4 )
        {
          v4 = (char *)(v5 - 1);
          *(_BYTE *)(v5 - 1) = 0;
        }
      }
    }
  }
  if ( v5 <= (unsigned __int64)v4 )
  {
    if ( !under_debugger )
      sub_492270(519);
LABEL_9:
    __break(0x3E8u);
  }
  *v4 = 0;
  return (char *)(v4 - a2);
}
// 49AAE4: variable 'a4' is possibly undefined
// 52451C: using guessed type char under_debugger;
