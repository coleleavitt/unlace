/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449520
// Address: 0x0000000000449520

//----- (0000000000449520) ----------------------------------------------------
__int64 __fastcall sub_449520(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // x19
  unsigned int v4; // w0
  __int64 v5; // x1
  __int64 v7; // x2
  __int64 v8; // x3

  if ( a1 == a2 )
    return 0;
  v3 = a1;
  if ( *(_BYTE *)a1 == 10 )
    goto LABEL_16;
  while ( 1 )
  {
    sub_448310(v3);
    v4 = *(unsigned __int8 *)a2;
    *(_BYTE *)v3 = v4;
    if ( v4 == 6 )
      break;
    if ( v4 <= 6 )
    {
      if ( v4 == 3 )
        goto LABEL_10;
      if ( v4 == 5 || v4 == 2 )
      {
LABEL_18:
        v3[1] = a2[1];
        goto LABEL_19;
      }
    }
    else
    {
      if ( v4 == 8 )
        goto LABEL_18;
      if ( v4 < 8 )
      {
        v3[1] = a2[1];
        v8 = v3[2];
        v7 = v3[3];
        v3[2] = a2[2];
        v3[3] = a2[3];
        a2[2] = v8;
        a2[3] = v7;
        goto LABEL_19;
      }
      if ( v4 == 9 )
        goto LABEL_18;
      if ( v4 == 10 )
      {
LABEL_10:
        v5 = a2[2];
        v3[1] = a2[1];
        v3[2] = v5;
        a2[1] = 0;
        *(_BYTE *)a2 = 2;
        return 0;
      }
    }
    a1 = (__int64 *)(unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(282);
    __break(0x3E8u);
LABEL_16:
    v3 = sub_448A08(a1, 1);
    if ( !v3 )
      return sub_4869A0();
  }
  *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
LABEL_19:
  a2[1] = 0;
  *(_BYTE *)a2 = 2;
  return 0;
}
// 52451C: using guessed type char under_debugger;
