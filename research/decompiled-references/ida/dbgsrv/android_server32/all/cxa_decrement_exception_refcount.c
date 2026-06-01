/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_decrement_exception_refcount
// Address: 0x000901F4

//----- (000901F4) --------------------------------------------------------
void __fastcall _cxa_decrement_exception_refcount(_DWORD *a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r1
  void (__fastcall *v4)(_DWORD *); // r1

  if ( a1 )
  {
    v2 = a1 - 32;
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    __dmb(0xBu);
    if ( v3 == 1 )
    {
      v4 = (void (__fastcall *)(_DWORD *))*(a1 - 30);
      if ( v4 )
        v4(a1);
      _cxa_free_exception(a1);
    }
  }
}
