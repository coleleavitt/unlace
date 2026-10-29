/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E220
// Address: 0x000000000049E220

//----- (000000000049E220) ----------------------------------------------------
char *__fastcall sub_49E220(char a1, char *a2, char *a3, unsigned __int64 *a4)
{
  unsigned int v5; // w0
  char *result; // x0
  unsigned __int64 v7; // x4
  unsigned __int64 *v8; // x0
  unsigned int v9; // w7
  char v10; // w8
  char v11; // t1
  unsigned __int64 v12; // x6
  int v13; // w7
  char v14; // t1
  unsigned __int64 v15; // x6

  if ( a1 != 80 )
  {
    v5 = a1 & 0xF;
    if ( (a1 & 0xF) == 4 )
    {
LABEL_8:
      result = a3 + 8;
      v7 = *(_QWORD *)a3;
      goto LABEL_9;
    }
    if ( v5 <= 4 )
    {
      switch ( v5 )
      {
        case 1u:
          result = a3;
          v7 = 0;
          v13 = 0;
          do
          {
            v14 = *result++;
            v15 = (unsigned __int64)(v14 & 0x7F) << v13;
            v13 += 7;
            v7 |= v15;
          }
          while ( v14 < 0 );
          break;
        case 0u:
          goto LABEL_8;
        case 2u:
          result = a3 + 2;
          v7 = *(unsigned __int16 *)a3;
          break;
        case 3u:
          result = a3 + 4;
          v7 = *(unsigned int *)a3;
          break;
        default:
          goto LABEL_33;
      }
    }
    else if ( v5 == 10 )
    {
      result = a3 + 2;
      v7 = *(__int16 *)a3;
    }
    else if ( v5 <= 0xA )
    {
      if ( v5 != 9 )
        goto LABEL_33;
      result = a3;
      v7 = 0;
      v9 = 0;
      do
      {
        v11 = *result++;
        v10 = v11;
        v12 = (unsigned __int64)(v11 & 0x7F) << v9;
        v9 += 7;
        v7 |= v12;
      }
      while ( v11 < 0 );
      if ( v9 <= 0x3F && (v10 & 0x40) != 0 )
      {
        v7 |= -1LL << v9;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v5 != 11 )
      {
        if ( v5 == 12 )
          goto LABEL_8;
LABEL_33:
        abort();
      }
      result = a3 + 4;
      v7 = *(int *)a3;
    }
LABEL_9:
    if ( !v7 )
    {
LABEL_14:
      *a4 = v7;
      return result;
    }
LABEL_10:
    if ( (a1 & 0x70) == 0x10 )
      a2 = a3;
    v7 += (unsigned __int64)a2;
    if ( a1 < 0 )
      v7 = *(_QWORD *)v7;
    goto LABEL_14;
  }
  v8 = (unsigned __int64 *)((unsigned __int64)(a3 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  *a4 = *v8;
  return (char *)(v8 + 1);
}
