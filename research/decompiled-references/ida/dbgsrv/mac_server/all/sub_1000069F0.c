/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000069F0
// Address: 0x00000001000069F0

//----- (00000001000069F0) ----------------------------------------------------
__int64 __fastcall sub_1000069F0()
{
  unsigned int v0; // ebx
  SecCodeRef self; // [rsp+8h] [rbp-18h] BYREF

  self = nullptr;
  if ( SecCodeCopySelf(0, &self) )
    v0 = 0;
  else
    LOBYTE(v0) = SecCodeCheckValidity(self, 0, nullptr) == 0;
  if ( self )
    CFRelease(self);
  return v0;
}
// 100006A56: variable 'v0' is possibly undefined
