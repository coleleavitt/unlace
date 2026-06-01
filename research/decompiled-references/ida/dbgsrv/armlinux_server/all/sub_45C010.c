/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C010
// Address: 0x000000000045C010

//----- (000000000045C010) ----------------------------------------------------
__int64 __fastcall sub_45C010(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x22
  __int64 result; // x0
  __int64 v4; // x20
  _QWORD *v5; // x21
  __int64 v6; // x19
  const char *v7; // x0
  const char *v8; // x1
  const char *v9; // x0
  const char *v10; // x1
  __int64 v11; // x1
  __int64 v12; // t1
  __int64 v13; // t1

  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 != a2[1] )
    return 0;
  if ( !v2 )
    return 1;
  v4 = *(_QWORD *)(a1 + 456);
  result = 0;
  v5 = (_QWORD *)*a2;
  if ( *(_QWORD *)*a2 == *(_QWORD *)v4 && *(_QWORD *)(v4 + 8) == v5[1] )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v4 + 24) )
        v7 = *(const char **)(v4 + 16);
      v8 = (const char *)&qword_4B2D48;
      if ( v5[3] )
        v8 = (const char *)v5[2];
      if ( strcmp(v7, v8) )
        return 0;
      v9 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v4 + 48) )
        v9 = *(const char **)(v4 + 40);
      v10 = (const char *)&qword_4B2D48;
      if ( v5[6] )
        v10 = (const char *)v5[5];
      if ( strcmp(v9, v10)
        || *(_QWORD *)(v4 + 64) != v5[8]
        || *(unsigned __int16 *)(v4 + 72) != *((unsigned __int16 *)v5 + 36) )
      {
        return 0;
      }
      if ( v2 == ++v6 )
        break;
      v12 = *(_QWORD *)(v4 + 80);
      v4 += 80;
      v11 = v12;
      v13 = v5[10];
      v5 += 10;
      if ( v11 != v13 || *(_QWORD *)(v4 + 8) != v5[1] )
        return 0;
    }
    return 1;
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
