/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452AD8
// Address: 0x0000000000452AD8

//----- (0000000000452AD8) ----------------------------------------------------
__int64 __fastcall sub_452AD8(char **a1, __int64 a2)
{
  char *v4; // x24
  char *v5; // x25
  size_t v6; // x22
  __int64 v7; // x21
  char *v8; // x19
  const char *v9; // x0
  const char *v10; // x1
  void *v12; // x19
  char *v13; // x2

  v5 = *a1;
  v4 = a1[1];
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (__int64)&(*a1)[24 * (_QWORD)v4];
  if ( *a1 == (char *)v7 )
  {
LABEL_10:
    v12 = nullptr;
    if ( v6 )
    {
      v12 = sub_491248(v6);
      memcpy(v12, *(const void **)a2, v6);
      v5 = *a1;
      v4 = a1[1];
    }
    if ( v4 + 1 > a1[2] )
    {
      v5 = (char *)sub_491288((__int64)a1, v5, (unsigned __int64)(v4 + 1), 0x18u);
      v4 = a1[1];
      *a1 = v5;
    }
    v13 = &v5[24 * (_QWORD)v4];
    *(_QWORD *)v13 = v12;
    *((_QWORD *)v13 + 1) = v6;
    *((_QWORD *)v13 + 2) = v6;
    ++a1[1];
    return 1;
  }
  else
  {
    v8 = *a1;
    while ( 1 )
    {
      v9 = (const char *)&qword_4B2D48;
      if ( v6 )
        v9 = *(const char **)a2;
      v10 = (const char *)&qword_4B2D48;
      if ( *((_QWORD *)v8 + 1) )
        v10 = *(const char **)v8;
      if ( !strcmp(v9, v10) )
        return 0;
      v8 += 24;
      if ( (char *)v7 == v8 )
        goto LABEL_10;
    }
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
