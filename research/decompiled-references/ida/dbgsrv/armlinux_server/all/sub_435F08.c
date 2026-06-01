/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435F08
// Address: 0x0000000000435F08

//----- (0000000000435F08) ----------------------------------------------------
__int64 __fastcall sub_435F08(__int64 a1)
{
  __int16 v2; // w2
  __int64 *v3; // x0
  __int64 result; // x0
  _QWORD *v5; // x21
  const char *v6; // x0
  char *v7; // x0
  const char *v8; // x20

  v2 = *(_WORD *)(a1 + 120);
  v3 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 220) = 0;
  sub_43D1C0(v3, 1, v2);
  if ( *(unsigned __int8 *)(a1 + 212) == 175 || (result = sub_434608(a1), !(_DWORD)result) )
  {
    sub_43D418(*(_QWORD *)(a1 + 192) + 32LL, (__int64 *)(a1 + 392));
    if ( *(_QWORD *)(a1 + 184) )
    {
      v5 = *(_QWORD **)(a1 + 192);
      v6 = v5[1] ? (const char *)*v5 : (const char *)&qword_4B2D48;
      v7 = strchr(v6, 46);
      if ( v7 )
      {
        v8 = v7 + 1;
        if ( !strcmp(v7 + 1, "__getattr__") )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 184) + 80LL) = sub_43DE08(*(_QWORD **)(a1 + 104), (__int64)v5);
          sub_435D18(a1);
          return 0;
        }
        if ( !strcmp(v8, "__setattr__") )
          *(_DWORD *)(*(_QWORD *)(a1 + 184) + 84LL) = sub_43DE08(*(_QWORD **)(a1 + 104), (__int64)v5);
      }
    }
    sub_435D18(a1);
    return 0;
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
