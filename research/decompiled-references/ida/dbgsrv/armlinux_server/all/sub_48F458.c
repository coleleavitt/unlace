/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F458
// Address: 0x000000000048F458

//----- (000000000048F458) ----------------------------------------------------
char *__fastcall sub_48F458(const char *a1, __int64 a2, const char *a3, _BYTE *a4)
{
  const char *v4; // x19
  char *v5; // x20
  bool v6; // zf
  int v7; // w0
  unsigned __int8 *v8; // x2
  unsigned __int64 v9; // x0
  int v10; // t1
  const char *v11; // x5
  size_t v13; // x0
  int v14; // w1
  __int64 v15; // x1
  int v16; // w2
  _BYTE *v17; // [xsp+28h] [xbp-8h]

  if ( a2 < 0 )
  {
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(1225);
    goto LABEL_20;
  }
  v5 = (char *)a1;
  if ( a3 )
    v6 = a1 == nullptr;
  else
    v6 = 1;
  if ( v6 )
    return v5;
  v4 = &a1[a2];
  if ( a1 == a3 )
  {
    v17 = a4;
    v13 = strlen(a1);
    a4 = v17;
    v9 = (unsigned __int64)&v5[v13];
  }
  else
  {
    if ( v4 <= a1 )
      goto LABEL_28;
    if ( a1 == v4 - 1 )
      goto LABEL_13;
    v7 = *(unsigned __int8 *)a3;
    v8 = (unsigned __int8 *)(a3 + 1);
    *v5 = v7;
    if ( v7 )
    {
      v9 = (unsigned __int64)v5;
      while ( (const char *)++v9 != v4 - 1 )
      {
        v10 = *v8++;
        *(_BYTE *)v9 = v10;
        if ( !v10 )
          goto LABEL_14;
      }
LABEL_13:
      v9 = (unsigned __int64)(v4 - 1);
      *((_BYTE *)v4 - 1) = 0;
      goto LABEL_14;
    }
    v9 = (unsigned __int64)v5;
  }
LABEL_14:
  if ( !a4 )
    return v5;
  if ( *a4 == 46 )
    ++a4;
  if ( *(_BYTE *)(v9 - 1) != 46 )
  {
    if ( (unsigned __int64)v4 > v9 )
      goto LABEL_21;
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(518);
LABEL_20:
    __break(0x3E8u);
LABEL_21:
    *(_BYTE *)v9++ = 46;
    v11 = v4 - 1;
    if ( (unsigned __int64)v4 <= v9 )
    {
      *((_BYTE *)v4 - 1) = 0;
LABEL_23:
      *v11 = 0;
      return v5;
    }
    goto LABEL_31;
  }
  v11 = v4 - 1;
  if ( (unsigned __int64)v4 <= v9 )
  {
LABEL_28:
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(520);
    goto LABEL_20;
  }
LABEL_31:
  if ( v11 == (const char *)v9 )
    goto LABEL_23;
  v14 = (unsigned __int8)*a4;
  *(_BYTE *)v9 = v14;
  if ( v14 )
  {
    v15 = 1;
    while ( &v11[-v9] != (const char *)v15 )
    {
      v16 = (unsigned __int8)a4[v15];
      *(_BYTE *)(v9 + v15++) = v16;
      if ( !v16 )
        return v5;
    }
    *v11 = 0;
  }
  return v5;
}
// 48F510: variable 'v4' is possibly undefined
// 48F524: variable 'v5' is possibly undefined
// 52451C: using guessed type char under_debugger;
