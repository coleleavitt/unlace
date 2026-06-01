/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005E70
// Address: 0x0000000100005E70

//----- (0000000100005E70) ----------------------------------------------------
bool sub_100005E70()
{
  _BOOL8 v0; // x19
  SecCodeRef v1; // x0
  SecCodeRef self; // [xsp+10h] [xbp-20h] BYREF

  self = nullptr;
  if ( SecCodeCopySelf(0, &self) )
  {
    v0 = 0;
    v1 = self;
    if ( !self )
      return v0;
    goto LABEL_5;
  }
  v0 = SecCodeCheckValidity(self, 0, nullptr) == 0;
  v1 = self;
  if ( self )
LABEL_5:
    CFRelease(v1);
  return v0;
}
