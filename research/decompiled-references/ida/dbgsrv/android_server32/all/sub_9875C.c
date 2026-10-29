/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9875C
// Address: 0x0009875C

//----- (0009875C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_9875C(__int64 *a1)
{
  unsigned __int8 **v2; // r2
  __int64 *v3; // r3
  const char *v4; // r0
  char *v5; // r8
  char *v6; // r9
  _DWORD *v7; // r5
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r6

  if ( sub_924C8(a1, "Ts", (unsigned __int8 *)"") )
  {
    v4 = "struct";
    v5 = "";
LABEL_7:
    v6 = (char *)v4;
    goto LABEL_8;
  }
  if ( sub_924C8(a1, "Tu", (unsigned __int8 *)"") )
  {
    v4 = "union";
    v5 = "";
    goto LABEL_7;
  }
  if ( sub_924C8(a1, "Te", (unsigned __int8 *)"") )
  {
    v4 = "enum";
    v5 = "";
    goto LABEL_7;
  }
  v6 = nullptr;
  v5 = nullptr;
LABEL_8:
  v7 = nullptr;
  v8 = sub_933A4(a1, 0, v2, v3);
  if ( v8 )
  {
    v9 = v8;
    if ( v6 == v5 )
    {
      return v8;
    }
    else
    {
      v7 = sub_93AC6((int)(a1 + 46), 20);
      *v7 = &off_DC894;
      v7[1] = 16843014;
      v7[2] = v6;
      v7[3] = v5;
      v7[4] = v9;
    }
  }
  return (unsigned __int8 *)v7;
}
// 987B2: variable 'v2' is possibly undefined
// 987B2: variable 'v3' is possibly undefined
// DC894: using guessed type _UNKNOWN *off_DC894;
