/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_register_common
// Address: 0x00000000000EAB93

//----- (00000000000EAB93) ----------------------------------------------------
void __fastcall _emutls_register_common(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
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
}

// nfuncs=2706 queued=2116 decompiled=2116 lumina nreq=0 worse=0 better=0
#error "There were 2 decompilation failure(s) on 2116 function(s)"
