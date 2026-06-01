/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_register_common
// Address: 0x000DC546

//----- (000DC546) --------------------------------------------------------
unsigned int *__cdecl _emutls_register_common(unsigned int *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *result; // eax

  result = a1;
  if ( *a1 < a2 )
  {
    *a1 = a2;
    a1[3] = 0;
  }
  if ( a1[1] < a3 )
    a1[1] = a3;
  if ( a4 )
  {
    if ( a2 == *a1 )
      a1[3] = a4;
  }
  return result;
}

// nfuncs=2839 queued=2436 decompiled=2436 lumina nreq=0 worse=0 better=0
#error "There were 33 decompilation failure(s) on 2436 function(s)"
