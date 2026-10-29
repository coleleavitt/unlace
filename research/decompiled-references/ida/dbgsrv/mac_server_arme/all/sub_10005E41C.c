/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E41C
// Address: 0x000000010005E41C

//----- (000000010005E41C) ----------------------------------------------------
__int64 __fastcall sub_10005E41C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  const char *v6; // x0
  char *v7; // x21
  unsigned __int64 v8; // x1
  __int64 v9; // x0
  const char *v10; // x22
  const char *v11; // x9
  size_t v13; // x0
  size_t v14; // x23
  unsigned __int64 v15; // x24
  _QWORD *v16; // x1
  const char *v18; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v19; // [xsp+10h] [xbp-40h]

  v6 = (const char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
                       a1,
                       *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL),
                       a2);
  if ( v6 )
  {
    v7 = (char *)v6;
    v8 = (unsigned __int64)&v6[*(unsigned int *)v6 + 5];
    v18 = v6 + 5;
    v19 = v8;
    v9 = unpack_dd((unsigned __int64 *)&v18, v8);
    a3 = v9;
    if ( a4 && (v9 & 0x80000000) != 0 )
    {
      v10 = v18;
      v11 = v18;
      do
      {
        if ( (unsigned __int64)v11 >= v19 )
          goto LABEL_12;
      }
      while ( *v11++ );
      v18 = v11;
      if ( !v10 || (v13 = strlen(v10)) == 0 )
      {
LABEL_12:
        a4[1] = 0;
        goto LABEL_13;
      }
      v14 = v13;
      v15 = v13 + 1;
      v16 = (_QWORD *)*a4;
      if ( a4[2] < v13 + 1 )
      {
        v16 = qvector_reserve(a4, v16, v15, 1u);
        *a4 = v16;
      }
      a4[1] = v15;
      memmove(v16, v10, v14);
      *(_BYTE *)(*a4 + v14) = 0;
    }
LABEL_13:
    qfree(v7);
  }
  return a3;
}
