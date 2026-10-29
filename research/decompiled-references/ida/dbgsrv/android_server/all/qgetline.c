/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetline
// Address: 0x00000000000BE06C

//----- (00000000000BE06C) ----------------------------------------------------
__int64 __fastcall qgetline(__int64 a1, FILE *stream)
{
  __int64 v4; // x20
  __int64 v5; // x8
  __int64 v6; // x1
  char *v7; // x9

  *(_QWORD *)(a1 + 8) = 0;
  v4 = 0;
  if ( !feof(stream) )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v5 ? v5 + 1023 : 1024LL;
      sub_BE154((pthread_mutex_t *)a1, v6);
      if ( !qfgets((pthread_mutex_t *)(*(_QWORD *)a1 + v4), *(_QWORD *)(a1 + 8) - v4, stream) )
        break;
      v4 += strlen((const char *)(*(_QWORD *)a1 + v4));
      if ( v4 )
      {
        v7 = *(_QWORD *)(a1 + 8) | (v4 - 1) ? (char *)(*(_QWORD *)a1 + v4 - 1) : &byte_166A39;
        if ( *v7 == 10 )
        {
          --v4;
          goto LABEL_17;
        }
      }
      if ( feof(stream) )
        goto LABEL_17;
    }
  }
  if ( !v4 )
    return -1;
LABEL_17:
  sub_BE154((pthread_mutex_t *)a1, v4);
  return v4;
}
// 166A39: using guessed type char byte_166A39;
