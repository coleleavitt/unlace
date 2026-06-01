/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459A18
// Address: 0x0000000000459A18

//----- (0000000000459A18) ----------------------------------------------------
__int64 __fastcall sub_459A18(__int64 a1, int a2)
{
  __int16 *v3; // x21
  __int16 *i; // x19
  int v5; // w0
  unsigned int (__fastcall *v6)(__int64); // x1
  __int64 v7; // x2
  __int64 v8; // x2
  __int64 (__fastcall *v9)(__int64); // x1
  __int64 v10; // x2
  int v11; // w0
  int v12; // w19
  unsigned int v13; // w19
  char *v15; // x1

  v3 = *(__int16 **)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  for ( i = v3; ; i += 3 )
  {
    v5 = *i;
    if ( v5 == -1 )
      break;
    while ( 1 )
    {
      if ( v5 )
      {
        if ( !*(_BYTE *)(a1 + 32) )
        {
          v6 = *(unsigned int (__fastcall **)(__int64))a1;
          v7 = *(_QWORD *)(a1 + 8);
          if ( (v7 & 1) != 0 )
            v6 = *(unsigned int (__fastcall **)(__int64))((char *)v6 + *(_QWORD *)(a1 + (v7 >> 1)));
          if ( v6(a1 + (v7 >> 1)) )
            return 0;
          *(_BYTE *)(a1 + 32) = 1;
          v5 = *i;
        }
        if ( v5 != *(unsigned __int16 *)(a1 + 64) )
          goto LABEL_24;
        *(_BYTE *)(a1 + 32) = 0;
      }
      if ( i[1] != -1 && !(unsigned __int8)sub_459A18(a1) )
        return 0;
      if ( *((unsigned __int8 *)i + 5) != 255 )
        break;
LABEL_17:
      v12 = *((unsigned __int8 *)i + 4);
      if ( v12 == 255 )
        return 1;
      i = &v3[3 * v12];
      v5 = *i;
      if ( v5 == -1 )
        goto LABEL_19;
    }
    v8 = *(_QWORD *)(a1 + 24) + 16LL * *((unsigned __int8 *)i + 5);
    v9 = *(__int64 (__fastcall **)(__int64))v8;
    v10 = *(_QWORD *)(v8 + 8);
    if ( (v10 & 1) != 0 )
      v9 = *(__int64 (__fastcall **)(__int64))((char *)v9 + *(_QWORD *)(a1 + (v10 >> 1)));
    v11 = v9(a1 + (v10 >> 1));
    if ( v11 != 1507 )
    {
      if ( v11 )
        return 0;
      goto LABEL_17;
    }
    *(_BYTE *)(a1 + 32) = 1;
LABEL_24:
    ;
  }
LABEL_19:
  v13 = i[1];
  if ( !v13 )
    return 1;
  if ( v13 == 67 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v15 = *(char **)(a1 + 40);
    else
      v15 = (char *)&qword_4B2D48;
    sub_486A58(0, v15);
  }
  sub_4869C8(v13);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
