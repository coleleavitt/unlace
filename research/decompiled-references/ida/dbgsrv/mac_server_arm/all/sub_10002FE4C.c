/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002FE4C
// Address: 0x000000010002FE4C

//----- (000000010002FE4C) ----------------------------------------------------
char *__fastcall sub_10002FE4C(__int64 a1, __int64 a2, char *a3, int a4)
{
  char *v5; // x19
  int utf8_char; // w0
  int v9; // w0
  char *v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  __int64 v13; // x0
  char *v15; // x1
  __int64 v16; // x22
  __int64 v17; // x23
  __int64 v18; // x0
  char *v19; // [xsp+0h] [xbp-40h] BYREF

  v5 = a3;
  v19 = a3;
  do
  {
    while ( 1 )
    {
      utf8_char = get_utf8_char(&v19);
      if ( utf8_char == -1 )
        utf8_char = *v19++;
      if ( !utf8_char )
      {
LABEL_11:
        v10 = *(char **)(a1 + 168);
        if ( v10 < v5 )
        {
          v11 = *(unsigned int *)(a1 + 176);
          v12 = sub_10002FD0C(*(_BYTE **)(a1 + 160), v10);
          v13 = sub_10002FD0C(*(_BYTE **)(a1 + 168), v5);
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v12, v13, v11);
          *(_QWORD *)(a1 + 168) = v5;
        }
        return nullptr;
      }
      if ( utf8_char != *(char *)(a1 + 184) )
        break;
      v5 = v19;
      v9 = get_utf8_char(&v19);
      if ( v9 == -1 )
        v9 = *v19++;
      if ( !v9 )
        goto LABEL_11;
      v5 = v19;
    }
    v5 = v19;
  }
  while ( utf8_char != a4 );
  v15 = *(char **)(a1 + 168);
  if ( v15 < v19 )
  {
    v16 = *(unsigned int *)(a1 + 124);
    v17 = sub_10002FD0C(*(_BYTE **)(a1 + 160), v15);
    v18 = sub_10002FD0C(*(_BYTE **)(a1 + 168), v5);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v17, v18, v16);
    *(_QWORD *)(a1 + 168) = v5;
    return v19;
  }
  return v5;
}
