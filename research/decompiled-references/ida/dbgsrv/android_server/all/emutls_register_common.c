/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_register_common
// Address: 0x00000000000F145C

//----- (00000000000F145C) ----------------------------------------------------
unsigned __int64 *__fastcall _emutls_register_common(
        unsigned __int64 *result,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( *result < a2 )
  {
    *result = a2;
    result[3] = 0;
  }
  if ( result[1] < a3 )
    result[1] = a3;
  if ( a4 )
  {
    if ( a2 == *result )
      result[3] = a4;
  }
  return result;
}

// nfuncs=2894 queued=2289 decompiled=2289 lumina nreq=0 worse=0 better=0
#error "There were 7 decompilation failure(s) on 2289 function(s)"
