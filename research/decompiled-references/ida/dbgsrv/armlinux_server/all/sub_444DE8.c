/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444DE8
// Address: 0x0000000000444DE8

//----- (0000000000444DE8) ----------------------------------------------------
__int64 __fastcall sub_444DE8(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // x19
  _QWORD *v6; // x3
  const char *v8; // x0
  const char *v9; // x1
  _QWORD *v10; // [xsp+20h] [xbp-10h]
  _QWORD *v11; // [xsp+28h] [xbp-8h]

  v4 = a1;
  v6 = (_QWORD *)(a1 + 8);
  LOBYTE(a1) = 1;
  if ( !a2 && a3 != v6 )
  {
    if ( *(_QWORD *)(a4 + 40) )
    {
      v8 = *(const char **)(a4 + 32);
      if ( a3[5] )
      {
LABEL_6:
        v9 = (const char *)a3[4];
LABEL_7:
        v10 = v6;
        v11 = a3;
        LODWORD(a1) = strcmp(v8, v9);
        v6 = v10;
        a3 = v11;
        LODWORD(a1) = (unsigned int)a1 >> 31;
        goto LABEL_2;
      }
    }
    else
    {
      v8 = (const char *)&qword_4B2D48;
      if ( a3[5] )
        goto LABEL_6;
    }
    v9 = (const char *)&qword_4B2D48;
    goto LABEL_7;
  }
LABEL_2:
  sub_49F830(a1, a4, a3, v6);
  ++*(_QWORD *)(v4 + 40);
  return a4;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
